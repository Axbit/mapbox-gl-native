#import "NSString+MGLAdditions.h"

@implementation NSString (MGLAdditions)

void linkStringCategory(){}

- (nullable NSString *)mgl_stringOrNilIfEmpty
{
    return self.length ? self : nil;
}

@end
