/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode5.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator7.0.sdk/System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

@class EDCollection, NSString, EDReference, EDResources;

@interface EDPivotTable : NSObject  {
    EDResources *mResources;
    boolmShowLastColumn;
    boolmShowRowHeaders;
    boolmShowColumnHeaders;
    boolmShowRowStripes;
    boolmShowColumnStripes;
    boolmApplyNumberFormats;
    boolmApplyBorderFormats;
    boolmApplyFontFormats;
    boolmApplyPatternFormats;
    boolmApplyAlignmentFormats;
    boolmApplyWidthHeightFormats;
    boolmUseAutoFormatting;
    boolmColGrandTotals;
    boolmRowGrandTotals;
    boolmCustomListSort;
    boolmCompactData;
    boolmCompact;
    boolmDataCaption;
    boolmDataOnRows;
    boolmDisableFieldList;
    boolmMergeItem;
    boolmMultipleFieldFilters;
    boolmOutline;
    boolmOutlineData;
    boolmPageOverThenDown;
    boolmShowCalcMbrs;
    boolmShowDataDropDown;
    boolmShowDropZones;
    boolmShowEmptyCol;
    boolmShowEmptyRow;
    boolmShowHeaders;
    boolmShowMemberPropertyTips;
    boolmShowMissing;
    boolmShowMultipleLabel;
    boolmSubtotalHiddenItems;
    NSString *mName;
    NSString *mStyleName;
    NSString *mColumnHeaderCaption;
    NSString *mRowHeaderCaption;
    NSString *mPageStyleName;
    EDReference *mPivotTableRange;
    unsigned int mStyleIndex;
    long mFirstHeaderRow;
    long mFirstDataRow;
    long mFirstDataColumn;
    unsigned long mRowPageCount;
    unsigned long mColumnPageCount;
    unsigned long mPageWrap;
    unsigned long mAutoFormatId;
    unsigned long mDataPosition;
    EDCollection *mRowFields;
    EDCollection *mColumnFields;
    EDCollection *mRowItems;
    EDCollection *mColumnItems;
    EDCollection *mPivotFields;
    EDCollection *mDataFields;
    EDCollection *mConditionalFields;
    EDCollection *mPivotAreas;
    EDCollection *mPageFields;
}

+ (id)pivotTableWithResources:(id)arg1;

- (id)pageFields;
- (id)pivotAreas;
- (id)conditionalFormats;
- (id)dataFields;
- (id)pivotFields;
- (id)columnItems;
- (id)rowItems;
- (id)columnFields;
- (id)rowFields;
- (void)setSubtotalHiddenItems:(bool)arg1;
- (bool)subtotalHiddenItems;
- (void)setShowMultipleLabel:(bool)arg1;
- (bool)showMultipleLabel;
- (void)setShowMissing:(bool)arg1;
- (bool)showMissing;
- (void)setShowMemberPropertyTips:(bool)arg1;
- (bool)showMemberPropertyTips;
- (void)setShowHeaders:(bool)arg1;
- (bool)showHeaders;
- (void)setShowEmptyRow:(bool)arg1;
- (bool)showEmptyRow;
- (void)setShowEmptyCol:(bool)arg1;
- (bool)showEmptyCol;
- (void)setShowDropZones:(bool)arg1;
- (bool)showDropZones;
- (void)setShowDataDropDown:(bool)arg1;
- (bool)showDataDropDown;
- (void)setShowCalcMbrs:(bool)arg1;
- (bool)showCalcMbrs;
- (void)setPageOverThenDown:(bool)arg1;
- (bool)pageOverThenDown;
- (void)setOutlineData:(bool)arg1;
- (bool)outlineData;
- (void)setMultipleFieldFilters:(bool)arg1;
- (bool)multipleFieldFilters;
- (void)setMergeItem:(bool)arg1;
- (bool)mergeItem;
- (void)setDisableFieldList:(bool)arg1;
- (bool)disableFieldList;
- (void)setDataOnRows:(bool)arg1;
- (bool)dataOnRows;
- (void)setDataCaption:(bool)arg1;
- (bool)dataCaption;
- (void)setCompactData:(bool)arg1;
- (bool)compactData;
- (void)setCustomListSort:(bool)arg1;
- (bool)customListSort;
- (void)setRowGrandTotals:(bool)arg1;
- (bool)rowGrandTotals;
- (void)setUseAutoFormatting:(bool)arg1;
- (bool)useAutoFormatting;
- (void)setColGrandTotals:(bool)arg1;
- (bool)colGrandTotals;
- (void)setApplyWidthHeightFormats:(bool)arg1;
- (bool)applyWidthHeightFormats;
- (void)setApplyAlignmentFormats:(bool)arg1;
- (bool)applyAlignmentFormats;
- (void)setApplyPatternFormats:(bool)arg1;
- (bool)applyPatternFormats;
- (void)setApplyFontFormats:(bool)arg1;
- (bool)applyFontFormats;
- (void)setApplyBorderFormats:(bool)arg1;
- (bool)applyBorderFormats;
- (void)setApplyNumberFormats:(bool)arg1;
- (bool)applyNumberFormats;
- (void)setShowColumnHeaders:(bool)arg1;
- (bool)showColumnHeaders;
- (void)setShowRowHeaders:(bool)arg1;
- (bool)showRowHeaders;
- (void)setShowColumnStripes:(bool)arg1;
- (bool)showColumnStripes;
- (void)setShowRowStripes:(bool)arg1;
- (bool)showRowStripes;
- (void)setShowLastColumn:(bool)arg1;
- (bool)showLastColumn;
- (void)setDataPosition:(unsigned long)arg1;
- (unsigned long)dataPosition;
- (void)setAutoFormatId:(unsigned long)arg1;
- (unsigned long)autoFormatId;
- (void)setPageWrap:(unsigned long)arg1;
- (unsigned long)pageWrap;
- (void)setFirstDataColumn:(long)arg1;
- (long)firstDataColumn;
- (void)setFirstDataRow:(long)arg1;
- (long)firstDataRow;
- (void)setFirstHeaderRow:(long)arg1;
- (long)firstHeaderRow;
- (void)setColumnPageCount:(unsigned long)arg1;
- (unsigned long)columnPageCount;
- (void)setRowPageCount:(unsigned long)arg1;
- (unsigned long)rowPageCount;
- (void)setPivotTableRange:(id)arg1;
- (id)pivotTableRange;
- (void)setStyleName:(id)arg1;
- (id)styleName;
- (void)setPageStyleName:(id)arg1;
- (id)pageStyleName;
- (void)setRowHeaderCaption:(id)arg1;
- (id)rowHeaderCaption;
- (void)setColumnHeaderCaption:(id)arg1;
- (id)columnHeaderCaption;
- (void)setStyleIndex:(unsigned int)arg1;
- (unsigned int)styleIndex;
- (id)initWithResources:(id)arg1;
- (void)setStyle:(id)arg1;
- (void)setCompact:(bool)arg1;
- (void)setOutline:(bool)arg1;
- (bool)outline;
- (id)style;
- (id)name;
- (void)dealloc;
- (void)setName:(id)arg1;
- (bool)compact;

@end
