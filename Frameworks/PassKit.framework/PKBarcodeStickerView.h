/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode5.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator7.0.sdk/System/Library/Frameworks/PassKit.framework/PassKit
 */

@class UIImageView, UILabel, UIView, PKBarcode, NSMutableArray;

@interface PKBarcodeStickerView : UIView  {
    PKBarcode *_barcode;
    UIImageView *_matteView;
    UIImageView *_barcodeView;
    NSMutableArray *_stickerConstraints;
    NSMutableArray *_matteConstraints;
    UILabel *_altTextLabel;
    int _layoutMode;
    BOOL _drawBarcode;
    int _validity;
}

@property int validity;
@property(readonly) UIView * matteView;

+ (struct CGSize { float x1; float x2; })_sizeForBarcode:(id)arg1;

- (void)_updateValidity;
- (id)matteView;
- (void)_generateMatteRect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; }*)arg1 barcodeRect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; }*)arg2 altTextRect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; }*)arg3 boundingSize:(struct CGSize { float x1; float x2; })arg4;
- (id)_resizedBarcode:(id)arg1 desiredSize:(struct CGSize { float x1; float x2; })arg2;
- (struct CGSize { float x1; float x2; })_varianceForBarcode:(id)arg1;
- (void)setValidity:(int)arg1;
- (id)initWithBarcode:(id)arg1 validityState:(int)arg2 layoutMode:(int)arg3;
- (int)validity;
- (void)dealloc;
- (struct CGSize { float x1; float x2; })sizeThatFits:(struct CGSize { float x1; float x2; })arg1;
- (void)layoutSubviews;

@end
