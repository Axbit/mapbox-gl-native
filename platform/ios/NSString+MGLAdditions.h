#import "MGLTypes.h"

NS_ASSUME_NONNULL_BEGIN

void linkStringCategory();

@interface NSString (MGLAdditions)

/** Returns the receiver if non-empty or nil if empty. */
- (nullable NSString *)mgl_stringOrNilIfEmpty;

@end

NS_ASSUME_NONNULL_END
