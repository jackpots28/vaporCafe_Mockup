﻿// WARNING: Please don't edit this file. It was generated by C++/WinRT v1.0.180227.3

#pragma once
#include "winrt/Windows.UI.Xaml.h"
#include "winrt/Windows.UI.Xaml.Controls.h"
#include "winrt/vaporCaffe.h"

namespace winrt::vaporCaffe::implementation {

template <typename D, typename... I>
struct WINRT_EBO MainPage_base : implements<D, vaporCaffe::IMainPage, Windows::UI::Xaml::Controls::IControlOverrides, Windows::UI::Xaml::Controls::IControlOverrides6, Windows::UI::Xaml::Controls::IPageOverrides, Windows::UI::Xaml::IFrameworkElementOverrides, Windows::UI::Xaml::IFrameworkElementOverrides2, Windows::UI::Xaml::IUIElementOverrides, Windows::UI::Xaml::IUIElementOverrides7, Windows::UI::Xaml::IUIElementOverrides8, composing, I...>,
    impl::require<D, Windows::UI::Xaml::Controls::IControl, Windows::UI::Xaml::Controls::IControl2, Windows::UI::Xaml::Controls::IControl3, Windows::UI::Xaml::Controls::IControl4, Windows::UI::Xaml::Controls::IControl5, Windows::UI::Xaml::Controls::IControlProtected, Windows::UI::Xaml::Controls::IPage, Windows::UI::Xaml::Controls::IUserControl, Windows::UI::Xaml::IDependencyObject, Windows::UI::Xaml::IDependencyObject2, Windows::UI::Xaml::IFrameworkElement, Windows::UI::Xaml::IFrameworkElement2, Windows::UI::Xaml::IFrameworkElement3, Windows::UI::Xaml::IFrameworkElement4, Windows::UI::Xaml::IFrameworkElement6, Windows::UI::Xaml::IUIElement, Windows::UI::Xaml::IUIElement2, Windows::UI::Xaml::IUIElement3, Windows::UI::Xaml::IUIElement4, Windows::UI::Xaml::IUIElement5, Windows::UI::Xaml::IUIElement7, Windows::UI::Xaml::IUIElement8>,
    impl::base<D, Windows::UI::Xaml::Controls::Page, Windows::UI::Xaml::Controls::UserControl, Windows::UI::Xaml::Controls::Control, Windows::UI::Xaml::FrameworkElement, Windows::UI::Xaml::UIElement, Windows::UI::Xaml::DependencyObject>,
    Windows::UI::Xaml::Controls::IControlOverridesT<D>, Windows::UI::Xaml::Controls::IControlOverrides6T<D>, Windows::UI::Xaml::Controls::IPageOverridesT<D>, Windows::UI::Xaml::IFrameworkElementOverridesT<D>, Windows::UI::Xaml::IFrameworkElementOverrides2T<D>, Windows::UI::Xaml::IUIElementOverridesT<D>, Windows::UI::Xaml::IUIElementOverrides7T<D>, Windows::UI::Xaml::IUIElementOverrides8T<D>
{
    using base_type = MainPage_base;
    using class_type = vaporCaffe::MainPage;
    using implements_type = typename MainPage_base::implements_type;
    using implements_type::implements_type;
    using composable_base = Windows::UI::Xaml::Controls::Page;
    operator class_type() const noexcept
    {
        static_assert(std::is_same_v<typename impl::implements_default_interface<D>::type, impl::default_interface_t<class_type>>);
        class_type result{ nullptr };
        attach_abi(result, detach_abi(static_cast<impl::default_interface_t<class_type>>(*this)));
        return result;
    }

    hstring GetRuntimeClassName() const
    {
        return L"vaporCaffe.MainPage";
    }
    MainPage_base()
    {
        get_activation_factory<Windows::UI::Xaml::Controls::Page, Windows::UI::Xaml::Controls::IPageFactory>().CreateInstance(*this, this->m_inner);
    }
};

}

namespace winrt::vaporCaffe::factory_implementation {

template <typename D, typename T, typename... I>
struct WINRT_EBO MainPageT : implements<D, Windows::Foundation::IActivationFactory, I...>
{
    hstring GetRuntimeClassName() const
    {
        return L"vaporCaffe.MainPage";
    }

    Windows::Foundation::IInspectable ActivateInstance() const
    {
        return make<T>();
    }
};

}

#if defined(WINRT_FORCE_INCLUDE_MAINPAGE_XAML_G_H) || __has_include("MainPage.xaml.g.h")

#include "MainPage.xaml.g.h"

#else

namespace winrt::vaporCaffe::implementation
{
    template <typename D, typename... I>
    using MainPageT = MainPage_base<D, I...>;
}

#endif
