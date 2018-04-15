#include "Page.h"

Page::Page(const std::string header, const std::string text):p_header(header),p_text(text)
{

}

void Page::AddHeader(const std::string str)
{
	p_header = str;
}

void Page::AddText(const std::string str)
{
	p_text = str;
}

Page* Page::Copy() const
{

	return new Page(p_header, p_text);
}


void Page::Print(const int flag) const
{
	if(flag < 0)
	{
	std::cout <<"Page::header "<<p_header<<std::endl;
	std::cout<<"Page::text "<<p_text<<"\n"<<std::endl;
	}

	else if(flag == 0)
	{
		if(p_text != "empty")
			std::cout<<"Page("<<flag<<")::text Title: "<<p_text<<"(header: "<<p_header<<")"<<std::endl;
		else
			std::cout<<"Page("<<flag<<")::text Title page(header: "<<p_header<<")"<<std::endl;
	}
	else std::cout<<"Page("<<flag<<")::text "<<p_text<<"(header: "<<p_header<<")"<<std::endl;
}
