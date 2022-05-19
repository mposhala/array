#include <stdio.h>
float convert_inr_to_usd(float inr)
{
    return inr / 77.49;
}
float convert_usd_to_inr(float usd)
{
    return usd * 77.49;
}

float convert_meter_feet(float meter)
{
    return meter * 3.281;
}
float convert_feet_meter(float feet)
{
    return feet * 0.304;
}
float convert_celsius_fahrenheit(float celsius)
{
    return ((celsius * 9 / 5) + 32);
}
float convert_fahrenheit_celsius(float fahrenheit)
{
    return ((fahrenheit - 32)) * 5 / 9;
}
float conver_MPH_KPH(float MPH)
{
    return MPH * 1.60934;
}
float conver_KPH_MPH(float KPH)
{
    return KPH * 0.6214;
}
int main()
{
    int inr = 3;
    int usd = 6;
    int meter = 5;
    int feet = 12;
    int celsius = 4;
    int fahrenheit = 5;
    int MPH=10;
    int KPH=12;
    printf("%d INR(Indian rupee) = %f USD (dollars)\n", inr, convert_inr_to_usd(inr));
    printf("%d USD(dollar) = %f INR(Indian rupees)\n", usd, convert_usd_to_inr(usd));
    printf("%d meters=%f feets\n", meter, convert_meter_feet(meter));
    printf("%d feets=%f meters\n", feet, convert_feet_meter(feet));
    printf("%d Celsius=%f Fahrenheit\n", celsius, convert_celsius_fahrenheit(celsius));
    printf("%d Fahrenheit =%f Celsius\n",fahrenheit , convert_fahrenheit_celsius(fahrenheit));
    printf("%d MPH = %f KPM\n",MPH,conver_MPH_KPH(MPH));
      printf("%d KPH = %f MPH\n",KPH,conver_KPH_MPH(KPH));
  
}