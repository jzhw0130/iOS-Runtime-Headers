/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/Stocks.framework/Stocks
 */

@interface StocksPreferences : NSObject {
    BOOL _changeColorSwapped;
    BOOL _textAttachmentDirectionIsRightToLeft;
    unsigned int _textDirection;
}

@property(getter=isChangeColorSwapped,readonly) BOOL changeColorSwapped;
@property(readonly) BOOL textAttachmentDirectionIsRightToLeft;
@property(readonly) unsigned int textDirection;

+ (void)clearSharedPreferences;
+ (id)sharedPreferences;

- (BOOL)boolForKey:(id)arg1;
- (void)dealloc;
- (id)init;
- (BOOL)isChangeColorSwapped;
- (id)objectForKey:(id)arg1;
- (void)resetLocale;
- (void)setObject:(id)arg1 forKey:(id)arg2;
- (void)synchronize;
- (BOOL)textAttachmentDirectionIsRightToLeft;
- (unsigned int)textDirection;

@end