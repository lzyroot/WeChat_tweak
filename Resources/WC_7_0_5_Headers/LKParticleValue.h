//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface LKParticleValue : NSObject
{
    struct map<std::__1::basic_string<char>, int, std::__1::less<std::__1::basic_string<char>>, std::__1::allocator<std::__1::pair<const std::__1::basic_string<char>, int>>> varMap;
    struct vector<RVar *, std::__1::allocator<RVar *>> vars;
    NSObject *_object;
    struct ROperation *_exp;
    double _num;
}

- (id).cxx_construct;
- (void).cxx_destruct;
- (id)clone;
- (void)dealloc;
- (id)description;
@property(nonatomic) struct ROperation *exp; // @synthesize exp=_exp;
- (id)initWithObject:(id)arg1;
@property(nonatomic) double num; // @synthesize num=_num;
@property(retain, nonatomic) NSObject *object; // @synthesize object=_object;
- (void)setVar:(double *)arg1 name:(id)arg2;
- (double)value;

@end

