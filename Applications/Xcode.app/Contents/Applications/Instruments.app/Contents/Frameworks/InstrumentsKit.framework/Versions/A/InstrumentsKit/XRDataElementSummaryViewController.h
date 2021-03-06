//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSViewController.h"

@class DVTGradientImageButton, NSLayoutConstraint, NSTextField, NSView, PFTDataElement;

@interface XRDataElementSummaryViewController : NSViewController
{
    int _style;
    PFTDataElement *_element;
    NSTextField *_titleField;
    DVTGradientImageButton *_configurationButton;
    NSView *_dataView;
    NSLayoutConstraint *_dataTopConstraint;
}

@property(retain, nonatomic) NSLayoutConstraint *dataTopConstraint; // @synthesize dataTopConstraint=_dataTopConstraint;
@property(nonatomic) __weak NSView *dataView; // @synthesize dataView=_dataView;
@property(nonatomic) __weak DVTGradientImageButton *configurationButton; // @synthesize configurationButton=_configurationButton;
@property(nonatomic) __weak NSTextField *titleField; // @synthesize titleField=_titleField;
@property(readonly, nonatomic) PFTDataElement *element; // @synthesize element=_element;
- (void).cxx_destruct;
- (void)reloadData;
- (void)awakeFromNib;
- (id)initWithDataElement:(id)arg1 style:(int)arg2;

@end

