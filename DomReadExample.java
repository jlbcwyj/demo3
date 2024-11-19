import org.w3c.dom.*;
import javax.xml.parsers.*;

/**
 * DOM 方式读取 XML文件
 * 
 * @author lizhengi
 **/
public class DomReadExample {
    public static void main(String[] args) throws Exception {
        // 创建一个 DocumentBuilderFactory 实例，用于创建 DocumentBuilder
        DocumentBuilderFactory factory = DocumentBuilderFactory.newInstance();
        // 使用工厂创建一个 DocumentBuilder 实例，用于解析 XML 文档
        DocumentBuilder builder = factory.newDocumentBuilder();

        // 使用 ClassLoader 获取资源文件的输入流，并解析成 Document 对象
        Document document = builder.parse(DomReadExample.class.getClassLoader()
                .getResourceAsStream("C:\\Users\\Administrator\\Desktop\\demo3\\student.xml"));

        // 获取 XML 文档中所有名为 "book" 的元素节点
        NodeList bookNodes = document.getElementsByTagName("student");
        // 遍历每个 "book" 元素节点，并输出其子元素的内容
        for (int i = 0; i < bookNodes.getLength(); i++) {
            Node bookNode = bookNodes.item(i);
            Element bookElement = (Element) bookNode;
            // 获取 "title"、"author" 和 "year" 子元素的内容
            String name = bookElement.getElementsByTagName("name").item(0).getTextContent();
            String age = bookElement.getElementsByTagName("age").item(0).getTextContent();
            String sex = bookElement.getElementsByTagName("sex").item(0).getTextContent();
            // 打印输出图书的信息
            System.out.println("Title: " + name + ", Author: " + age + ", Year: " + sex);
        }
    }
}
