//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "WAWebViewPluginBase.h"

#import "UIScrollViewDelegate-Protocol.h"

@class NSDictionary, NSString, UIColor, UILongPressGestureRecognizer, UIScrollView, WAWebViewController;

@interface WAWebViewPlugin_CustomNavigationBar : WAWebViewPluginBase <UIScrollViewDelegate>
{
    _Bool _bIsJsapiDefineNavigationLeftItem;
    _Bool _bIsJsapiDefineNavigationRightItem;
    CDUnknownBlockType _onClickRightNavItem;
    _Bool _bIsShowNavigationLoading;
    int _navigationMode;
    UILongPressGestureRecognizer *_longPressRecognizer;
    _Bool _isTrigerLongPress;
    _Bool _isEnableClose;
    _Bool _webAppear;
    UIScrollView *_scrollListener;
    UIColor *_frontBlendColor;
    _Bool _listenTapStatusBar;
    _Bool _shouldUseDynamicPageShare;
    long long _shareMenu;
    WAWebViewController *_mainWebView;
    NSDictionary *_dicNavigationRightItemData;
}

@property(nonatomic) _Bool shouldUseDynamicPageShare; // @synthesize shouldUseDynamicPageShare=_shouldUseDynamicPageShare;
@property(retain, nonatomic) NSDictionary *dicNavigationRightItemData; // @synthesize dicNavigationRightItemData=_dicNavigationRightItemData;
@property(nonatomic) _Bool listenTapStatusBar; // @synthesize listenTapStatusBar=_listenTapStatusBar;
@property(nonatomic) __weak WAWebViewController *mainWebView; // @synthesize mainWebView=_mainWebView;
@property(nonatomic) long long shareMenu; // @synthesize shareMenu=_shareMenu;
@property(nonatomic) _Bool m_bIsJsapiDefineNavigationRightItem; // @synthesize m_bIsJsapiDefineNavigationRightItem=_bIsJsapiDefineNavigationRightItem;
- (void).cxx_destruct;
- (void)setNavBarForeColor:(id)arg1;
- (void)setNavBarBackgroundColor:(id)arg1;
- (_Bool)scrollViewShouldScrollToTop:(id)arg1;
- (void)addWeAppStatusBarListener;
- (void)setTitleColorAndUpdate:(id)arg1;
- (void)setTitle:(id)arg1 color:(id)arg2;
- (void)changeStatusBarWhite:(_Bool)arg1;
- (void)hideNavigationTitleLoading;
- (void)showNavigationTitleLoading;
- (void)setRightNavBarItemHidden:(_Bool)arg1;
- (void)onClickJSDefineRightNavItem;
- (void)onRouteToHome;
- (void)onClickCustomRightButton;
- (void)onMore;
- (void)onLongPressMoreItem:(id)arg1;
- (id)getPresentNavigationRightButtonData;
- (void)setBlendColor:(id)arg1 forBarButtonItem:(id)arg2;
- (void)initDefaultRightMoreItemWithEnmMode:(int)arg1 blendColor:(id)arg2 rightBarItems:(id)arg3;
- (void)initRightItemWithEnmMode:(int)arg1 blendColor:(id)arg2 rightBarItems:(id)arg3;
- (void)updateNavItemsWithEnmMode:(int)arg1 blendColor:(id)arg2;
- (void)setNavBarElementAndStatusBarStyle:(int)arg1;
- (_Bool)handleEvent:(unsigned long long)arg1 userInfo:(id)arg2;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

