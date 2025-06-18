#include <gtest/gtest.h>
// #include <vector>
#include "../../my_file/my_file.h"
#include "../Html.h"


namespace my
{
    const char* test_div = "\n----------------------------------\n";
    const char* path_file = "index.html";
    const char* test_file = "test.txt";
    // const std::string http_scheme = "http";
}

template <class T>
void print_test(T val, const char* name)
{
    std::cout << my::test_div;
    std::cout << name << val;
    std::cout << my::test_div;
}

// TEST(UrlSingleTest, get_url)
// {
//     // Arange - source
//     Url url(my::test_url);

//     // Act
//     std::string value = url.get();

//     // Assert
//     EXPECT_STREQ(value.c_str(), my::test_url.c_str());
// }

struct HtmlClassTest : public testing::Test
{
    Html *html;
    MyFile *file;
    MyFile *test_file;
    std::string test_str;
    const char* html_str;

    void SetUp()
    {
        try
        {
            file = new MyFile(my::path_file);
            html_str = file->to_str().c_str();
            html = new Html(html_str);
            test_file = new MyFile(my::test_file);
            test_str = test_file->to_str();
        }
        catch(const std::exception& e)
        {
            std::cerr << e.what() << '\n';
        }
        
    }
    void TearDown()
    {
        delete file;
        delete test_file;
        delete html;
    }
};

TEST_F(HtmlClassTest, get_a)
{
    std::string value = url->get();

    EXPECT_STREQ(value.c_str(), my::url_test);
}

int main(int argc, char **argv)
{
    ::testing::InitGoogleTest(&argc, argv);
//    ::testing::InitGoogleMock(&argc, argv);

    return RUN_ALL_TESTS();
}