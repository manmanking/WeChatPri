//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIButton.h>

@class UIImage, UIImageView, UILabel;

@interface MMAssetSelectCheckButton : UIButton
{
    long long m_selectedIndex;
    UIImageView *m_notSelectImageView;
    UILabel *m_selectedIndexView;
    UIImage *m_normalImage;
    UIImage *m_selectedImage;
    struct CGRect _selectedIndexViewFrame;
}

@property(nonatomic) struct CGRect selectedIndexViewFrame; // @synthesize selectedIndexViewFrame=_selectedIndexViewFrame;
- (void).cxx_destruct;
- (void)startPopUpAnimation:(id)arg1 originScale:(double)arg2;
- (id)selectedView;
- (void)setSelectedIndex:(long long)arg1 animated:(_Bool)arg2;
- (void)setSelected:(_Bool)arg1 animated:(_Bool)arg2;
- (void)setSelected:(_Bool)arg1;
- (_Bool)isSelected;
- (void)setTitle:(id)arg1 forState:(unsigned long long)arg2;
- (id)imageForState:(unsigned long long)arg1;
- (void)setImage:(id)arg1 forState:(unsigned long long)arg2;

@end
