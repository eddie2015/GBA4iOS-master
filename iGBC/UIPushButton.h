/*
 *     Generated by class-dump 3.1.2.
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2007 by Steve Nygard.
 */

/*
 * File: ../Frameworks/UIKit.framework/UIKit
 * Arch: PowerPC 7400 (ppc7400)
 *       Current version: 747.19.0, Compatibility version: 1.0.0
 */

#import <UIKit/UIKit.h>
#import "CDAnonStruct.h"

@interface UIPushButton : UIControl
{
    NSString *_title;
    UIFont *_font;
    struct CGSize _shadowOffset;
    struct CGSize _imageOffset;
    struct CGSize _titlePadding;
    struct __CFDictionary *_info;
    struct {
        unsigned int selected:1;
        unsigned int drawShadow:1;
        unsigned int disableAutosizeToFit:1;
        unsigned int drawContentsCentered:1;
        unsigned int reverseShadowDirectionWhenHighlighted:1;
        unsigned int stretchBackground:1;
        unsigned int showPressFeedback:1;
        unsigned int disabledDimsImage:1;
        unsigned int reserved:24;
    } _pushButtonFlags;
}

+ (id)defaultFont;
- (id)initWithFrame:(struct CGRect)fp8;
- (id)initWithTitle:(id)fp8;
- (id)initWithTitle:(id)fp8 autosizesToFit:(BOOL)fp12;
- (id)initWithImage:(id)fp8;
- (void)dealloc;
- (unsigned int)state;
- (void)setEnabled:(BOOL)fp8;
- (BOOL)isPressed;
- (void)setSelected:(BOOL)fp8;
- (BOOL)isSelected;
- (void)setTitle:(id)fp8;
- (id)title;
- (void)setTitleFont:(id)fp8;
- (id)titleFont;
- (void)setAutosizesToFit:(BOOL)fp8;
- (BOOL)autosizesToFit;
- (void)sizeToFit;
- (struct CGPoint)pressFeedbackPosition;
- (void)setHighlighted:(BOOL)fp8;
- (void)setTitlePadding:(struct CGSize)fp8;
- (void)setImageOffset:(struct CGSize)fp8;
- (void)setDrawsShadow:(BOOL)fp8;
- (void)setShadowOffset:(float)fp8;
- (void)setReverseShadowDirectionWhenHighlighted:(BOOL)fp8;
- (void)setStretchBackground:(BOOL)fp8;
- (void)setDrawContentsCentered:(BOOL)fp8;
- (void)setShowPressFeedback:(BOOL)fp8;
- (BOOL)drawsShadow;
- (struct CGSize)shadowOffset;
- (struct CGSize)imageOffset;
- (BOOL)drawContentsCentered;
- (void)setImage:(id)fp8 forState:(unsigned int)fp12;
- (void)setTitleColor:(id)fp8 forState:(unsigned int)fp12;
- (void)setShadowColor:(id)fp8 forState:(unsigned int)fp12;
- (void)setBackground:(id)fp8 forState:(unsigned int)fp12;
- (void)setDisabledDimsImage:(BOOL)fp8;
- (id)imageForState:(unsigned int)fp8;
- (id)titleColorForState:(unsigned int)fp8;
- (id)shadowColorForState:(unsigned int)fp8;
- (id)backgroundForState:(unsigned int)fp8;
- (id)currentImage;
- (id)currentTitleColor;
- (id)currentShadowColor;
- (id)currentBackground;
- (void)setFrame:(struct CGRect)fp8;
- (CDAnonymousStruct8)_backgroundSlices:(struct CGSize)fp8;
- (void)_drawBezelPartInRect:(struct CGRect)fp8;
- (void)drawImageAtPoint:(struct CGPoint)fp8 fraction:(float)fp16;
- (void)drawTitleAtPoint:(struct CGPoint)fp8 width:(float)fp16;
- (void)_drawImageAndTextPartInRect:(struct CGRect)fp8;
- (void)drawButtonPart:(int)fp8 inRect:(struct CGRect)fp12;
- (void)drawRect:(struct CGRect)fp8;
- (void)setNeedsDisplay;

@end