//
//  LJMacroWeakSelf.h
//  CommonlyMacro
//
//  Created by liangju on 10/13/16.
//  Copyright © 2016 liangju. All rights reserved.
//

#ifndef LJMacroWeakSelf_h
#define LJMacroWeakSelf_h

/**
 *  打破block循环引用，使用方法:
 *  @weakify(self)
 *  [self doSomething^{
 *      @strongify(self)
 *      if (!self) {
 *          return;
 *      }
 *      // ...
 *  }];
 */
#ifndef weakify
#if DEBUG
#if __has_feature(objc_arc)
#define weakify(object) autoreleasepool{} __weak __typeof__(object) weak##_##object = object;
#else
#define weakify(object) autoreleasepool{} __block __typeof__(object) block##_##object = object;
#endif
#else
#if __has_feature(objc_arc)
#define weakify(object) try{} @finally{} {} __weak __typeof__(object) weak##_##object = object;
#else
#define weakify(object) try{} @finally{} {} __block __typeof__(object) block##_##object = object;
#endif
#endif
#endif
#ifndef strongify
#if DEBUG
#if __has_feature(objc_arc)
#define strongify(object) autoreleasepool{} __typeof__(object) object = weak##_##object;
#else
#define strongify(object) autoreleasepool{} __typeof__(object) object = block##_##object;
#endif
#else
#if __has_feature(objc_arc)
#define strongify(object) try{} @finally{} __typeof__(object) object = weak##_##object;
#else
#define strongify(object) try{} @finally{} __typeof__(object) object = block##_##object;
#endif
#endif
#endif

// block weak & strong self
#define WEAKSELF typeof(self) __weak weakSelf = self;
#define STRONGSELF typeof(weakSelf) __strong strongSelf = weakSelf;

#define WS(weakSelf) __weak __typeof(&*self)weakSelf = self;



#endif /* LJMacroWeakSelf_h */
