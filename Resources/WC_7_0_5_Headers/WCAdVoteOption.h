//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCoding.h"

@class NSMutableArray, NSString;

@interface WCAdVoteOption : NSObject <NSCoding>
{
    int _scoring;
    int _friends;
    NSString *_shareTitle;
    NSString *_shareDesc;
    NSString *_shareThumb;
    NSString *_title;
    NSString *_selectedTitle;
    NSString *_bgColor;
    NSString *_voteId;
    NSMutableArray *_friendsList;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSString *bgColor; // @synthesize bgColor=_bgColor;
- (void)encodeWithCoder:(id)arg1;
@property(nonatomic) int friends; // @synthesize friends=_friends;
@property(retain, nonatomic) NSMutableArray *friendsList; // @synthesize friendsList=_friendsList;
- (id)initWithCoder:(id)arg1;
@property(nonatomic) int scoring; // @synthesize scoring=_scoring;
@property(retain, nonatomic) NSString *selectedTitle; // @synthesize selectedTitle=_selectedTitle;
@property(retain, nonatomic) NSString *shareDesc; // @synthesize shareDesc=_shareDesc;
@property(retain, nonatomic) NSString *shareThumb; // @synthesize shareThumb=_shareThumb;
@property(retain, nonatomic) NSString *shareTitle; // @synthesize shareTitle=_shareTitle;
@property(retain, nonatomic) NSString *title; // @synthesize title=_title;
@property(retain, nonatomic) NSString *voteId; // @synthesize voteId=_voteId;

@end

