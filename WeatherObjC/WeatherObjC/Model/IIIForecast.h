//
//  IIIForecast.h
//  WeatherObjC
//
//  Created by Michael Flowers on 11/4/19.
//  Copyright © 2019 Lambda School. All rights reserved.
//

#import <Foundation/Foundation.h>



@interface IIIForecast : NSObject

@property (nonatomic, readonly, copy) NSString *cityName;
@property (nonatomic, readonly) double temperature;
@property (nonatomic, readonly, copy) NSString *imageName;

- (instancetype)initWithCityName:(NSString *)cityName temperature:(double)temperature imageName:(NSString *)imageName;

- (instancetype)initWithDictionary:(NSDictionary *)dictionary;

@end


