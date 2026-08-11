/* Ghidra address: 0044fa70 */
/* Ghidra symbol: FUN_0044fa70 */


undefined4 FUN_0044fa70(undefined8 param_1,undefined8 param_2,char param_3)

{
  char cVar1;
  undefined1 auStack_68 [40];
  undefined8 local_40;
  undefined8 local_38;
  char local_2d;
  undefined4 local_2c;
  undefined8 local_28;
  undefined8 local_20;
  undefined8 local_18;
  undefined8 local_10;
  
  local_28 = 0;
  local_20 = 0;
  local_10 = 0;
  local_18 = 0;
  local_40 = param_1;
  local_38 = param_2;
  local_2d = param_3;
  if (param_3 == '\0') {
    FUN_0043e600(&local_10,param_1);
    FUN_0043e600(&local_18,local_38);
  }
  else {
    FUN_00441640(&local_20,param_1);
    cVar1 = FUN_0044f980(auStack_68,local_20);
    if (cVar1 == '\0') {
      FUN_00441640(&local_28,local_38);
      cVar1 = FUN_0044f980(auStack_68,local_28);
      if (cVar1 == '\0') {
        FUN_0043e600(&local_10,local_40);
        FUN_0043e600(&local_18,local_38);
        goto LAB_0044fb3a;
      }
    }
    FUN_00414b50(&local_10,local_40);
    FUN_00414b50(&local_18,local_38);
  }
LAB_0044fb3a:
  local_2c = FUN_0043e210(local_10,local_18);
  FUN_00414560(&local_28,4);
  return local_2c;
}

