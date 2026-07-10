7/10
vector<string> ans;
for(int hour=0; hour<=11; hour++){
    for(int minute= 0; minute<=59; minute++){
int bits= _builtin_popcount(hour)+_builtin_popcount(minute);
  if(bits==TurnedOn){
    string time= to_string(hour)+":";
    if(minute<10)
    time += "0";
    time += to_string(minute); /* you forgot this line ki tmko idhr time me bhi to_string(minute) krna tha
    thought that ki tm dono minute aur hour ko add krdo but u didnt see that ans.pushback(time) is doing that thing */
    ans.pushback(time);
  }
    }
    return ans;
    
}

