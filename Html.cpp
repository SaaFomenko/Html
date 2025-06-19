#include "Html.h"


Tag::Tag(const char* str) :
tag_str(str)
{}

Tag::~Tag(){}

Html::Html(const char* str) :
html_str(str)
{}

Html::~Html(){}

std::vector<Tag> Html::get(unsigned int tag_id)
{

}