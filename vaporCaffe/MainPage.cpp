#include "pch.h"
#include "MainPage.h"
#include <windows.Applicationmodel.Payments.h>
#include <iostream>

using namespace winrt;
using namespace Windows::UI::Xaml;

namespace winrt::vaporCaffe::implementation
{
    MainPage::MainPage()
    {
        InitializeComponent();
    }

    int32_t MainPage::MyProperty()
    {
        throw hresult_not_implemented();
    }
    void MainPage::MyProperty(int32_t /* value */)
    {
        throw hresult_not_implemented();
    }


	int counter = 0;
    void MainPage::ClickHandler(IInspectable const&, RoutedEventArgs const&)
    {
		if (counter % 2 == 0) {
			myButton().Content(box_value(L"Clicked\n"));
		}
		else {
			myButton().Content(box_value(L"Click Me"));
		}
		counter += 1;
    }
}
