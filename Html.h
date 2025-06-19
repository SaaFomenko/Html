#ifndef HTML_H
#define HTML_H
#include <string>
#include <vector>


class Tag
{
    private:
        std::string tag_str;
       
        // std::string link;
        // std::string alt;
        // std::string obj;

    public:
        enum option
        {
            link = 0,
            alt,
            obj,
        };
        Tag(const char* str);
        ~Tag();
        std::string get(unsigned int option);

};

class Html
{
    private:
        std::string html_str;
        

    public:
        enum tag
        {
            a = 0,
        };
        Html(const char* str);
        ~Html();

        std::vector<Tag> get(unsigned int tag_id);
};

#endif