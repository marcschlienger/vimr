/**
 * Tae Won Ha - http://taewon.de - @hataewon
 * See LICENSE
 */

@import Cocoa;
@import CoreText;

#import "NeoVimUiBridgeProtocol.h"

@interface TextDrawer : NSObject

@property (nonatomic, nonnull, retain) NSFont *font;
@property (nonatomic) bool usesLigatures;
@property (nonatomic, readonly) CGFloat leading;
@property (nonatomic, readonly) CGFloat descent;
@property (nonatomic, readonly) CGSize cellSize;
@property (nonatomic) bool usesFontSmoothing;

- (instancetype _Nonnull)initWithFont:(NSFont *_Nonnull)font useLigatures:(bool)useLigatures;

- (void)drawString:(NSString *_Nonnull)string
         positions:(CGPoint *_Nonnull)positions positionsCount:(NSInteger)positionsCount
    highlightAttrs:(CellAttributes)attrs
           context:(CGContextRef _Nonnull)context;

@end
