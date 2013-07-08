/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode5.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator7.0.sdk/System/Library/Frameworks/UIKit.framework/UIKit
 */

@class _UIGraphicsLetterpressStyle, UIImage, NSString, UIColor, NSNumber, NSAttributedString;

@interface UIButtonContent : NSObject <NSCoding, NSCopying> {
    NSString *title;
    NSAttributedString *attributedTitle;
    UIImage *image;
    UIImage *background;
    UIColor *titleColor;
    UIColor *imageColor;
    UIColor *shadowColor;
    NSNumber *drawingStroke;
}

@property(retain) NSString * title;
@property(retain) NSAttributedString * attributedTitle;
@property(retain) UIImage * image;
@property(retain) UIImage * background;
@property(retain) UIColor * titleColor;
@property(retain) UIColor * imageColor;
@property(retain) UIColor * shadowColor;
@property(retain) NSNumber * drawingStroke;
@property(retain) _UIGraphicsLetterpressStyle * letterpressStyle;
@property(readonly) BOOL isEmpty;


- (void)setTitle:(id)arg1;
- (id)title;
- (void)setShadowColor:(id)arg1;
- (id)shadowColor;
- (void)setImage:(id)arg1;
- (id)image;
- (BOOL)isEmpty;
- (void)dealloc;
- (id)description;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)setDrawingStroke:(id)arg1;
- (id)drawingStroke;
- (void)setImageColor:(id)arg1;
- (id)imageColor;
- (void)setTitleColor:(id)arg1;
- (id)titleColor;
- (void)setBackground:(id)arg1;
- (id)background;
- (id)attributedTitle;
- (void)setLetterpressStyle:(id)arg1;
- (id)letterpressStyle;
- (void)setAttributedTitle:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;

@end
