//
//  LJMacroIgnoreWarning.h
//  CommonlyMacro
//
//  Created by liangju on 10/13/16.
//  Copyright © 2016 liangju. All rights reserved.
//

#ifndef LJMacroIgnoreWarning_h
#define LJMacroIgnoreWarning_h

/**
 *  忽略"-(id)performSelector:(SEL)aSelector withObject:(id)object;"警告
 */
#define SuppressPerformSelectorLeakWarning(Stuff) \
do { \
_Pragma("clang diagnostic push") \
_Pragma("clang diagnostic ignored \"-Warc-performSelector-leaks\"") \
Stuff; \
_Pragma("clang diagnostic pop") \
} while (0)


/**
 *  忽略-Wundeclared-selector警告
 */
#define SuppressPerformSelectorUndeclaredWarning(Stuff) \
do { \
_Pragma("clang diagnostic push") \
_Pragma("clang diagnostic ignored \"-Wundeclared-selector\"") \
Stuff; \
_Pragma("clang diagnostic pop") \
} while (0)



#endif /* LJMacroIgnoreWarning_h */
