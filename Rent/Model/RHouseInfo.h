//
//  RHouseInfo.h
//  Rent
//
//  Created by 许 磊 on 15/3/1.
//  Copyright (c) 2015年 slek. All rights reserved.
//

#import <Foundation/Foundation.h>

/**            
"id": 13,
"typeA": 1,
"typeB": 1,
"typeC": 1,
"title": "银行很高",
"price": 256,
"imgUrl": "/houseRenting/uploadImg/142398221239575.jpg",
"statusName": "发布中"
 
 address = "\U597d\U597d\U7684\U5c31\U5230";
 area = 12;
 canCooking = "\U5426";
 directionName = "\U5357\U897f";
 fitmentName = "\U4e2d\U7b49\U88c5\U4fee";
 floor = 2;
 floorTop = 6;
 haveFurniture = "\U662f";
 id = 13;
 img =     (
 {
 class = "com.tony.web.house.HouseImg";
 houseId = 13;
 id = 86;
 imgUrl = "/houseRenting/uploadImg/142398221239575.jpg";
 }
 );
 ownerId = 7;
 ownerName = hello;
 ownerPhone = 13967175096;
 payTypeName = "\U62bc\U4e00\U4ed8\U4e09";
 price = 256;
 status = 200;
 title = "\U94f6\U884c\U5f88\U9ad8";
 typeA = 1;
 typeB = 1;
 typeC = 1;
 
 **/

@interface RHouseInfo : NSObject

@property(nonatomic, strong) NSString* hid;

@property(nonatomic, strong) NSString* price;
@property(nonatomic, strong) NSString* statusName;
@property(nonatomic, strong) NSString* typeA;
@property(nonatomic, strong) NSString* typeB;
@property(nonatomic, strong) NSString* typeC;//
@property(nonatomic, strong) NSString* title;//
@property(nonatomic, strong) NSString* imgUrl;
//@property(nonatomic, readonly) NSURL* bgImgUrl;
@property(nonatomic, strong) NSURL* picUrl;

@property(nonatomic, strong) NSString* address;
@property(nonatomic, strong) NSString* area;
@property(nonatomic, strong) NSString* canCooking;
@property(nonatomic, strong) NSString* directionName;
@property(nonatomic, strong) NSString* fitmentName;
@property(nonatomic, strong) NSString* floor;
@property(nonatomic, strong) NSString* floorTop;
@property(nonatomic, strong) NSString* haveFurniture;
@property(nonatomic, strong) NSString* ownerId;
@property(nonatomic, strong) NSString* ownerName;
@property(nonatomic, strong) NSString* ownerPhone;
@property(nonatomic, strong) NSString* payTypeName;

@property(nonatomic, strong) NSDictionary* houseInfoByJsonDic;

- (void)setHouseInfoByDic:(NSDictionary*)dic;

@end
