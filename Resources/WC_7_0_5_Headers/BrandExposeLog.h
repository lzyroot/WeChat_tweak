//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString;

@interface BrandExposeLog : NSObject
{
    _Bool _isTop;
    _Bool _isRedDot;
    _Bool _isClicked;
    unsigned int _timestamp;
    unsigned int _rank;
    NSString *_bizUsername;
    NSString *_mid;
    NSString *_idx;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSString *bizUsername; // @synthesize bizUsername=_bizUsername;
@property(retain, nonatomic) NSString *idx; // @synthesize idx=_idx;
@property(nonatomic) _Bool isClicked; // @synthesize isClicked=_isClicked;
@property(nonatomic) _Bool isRedDot; // @synthesize isRedDot=_isRedDot;
@property(nonatomic) _Bool isTop; // @synthesize isTop=_isTop;
- (id)logString;
@property(retain, nonatomic) NSString *mid; // @synthesize mid=_mid;
@property(nonatomic) unsigned int rank; // @synthesize rank=_rank;
@property(nonatomic) unsigned int timestamp; // @synthesize timestamp=_timestamp;

@end

