#ifndef HTML_H
#define HTML_H
#include <string>
#include <vector>

namespace tag
{
    enum
    {
        a = 0,
    };
}

namespace option
{
    enum
    {
        link = 0,
        alt,
        obj,
    };
}

class Tag
{
    private:
        std::string tag_str;
        // std::string link;
        // std::string alt;
        // std::string obj;

    public:
        Tag(const char* str);
        ~Tag();
        std::string get(unsigned int option);

};

class Html
{
    private:
        std::string html_str;

    public:
        Html(const char* str);
        ~Html();

        std::vector<Tag> get(unsigned int tag);
};

#endif