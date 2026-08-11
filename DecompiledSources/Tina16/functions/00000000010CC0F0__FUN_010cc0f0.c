/* Ghidra address: 010cc0f0 */
/* Ghidra symbol: FUN_010cc0f0 */


void FUN_010cc0f0(undefined8 *param_1,double param_2,double param_3,undefined8 param_4,
                 undefined8 param_5,undefined8 param_6,undefined8 param_7,double param_8,
                 undefined8 param_9,undefined8 param_10,char param_11,undefined8 param_12,
                 undefined1 param_13)

{
  double dVar1;
  undefined8 local_20;
  undefined8 local_18;
  undefined8 local_10;
  
  local_18 = 0;
  local_20 = 0;
  local_10 = *param_1;
  if (param_11 == '\0') {
    dVar1 = (double)FUN_0040c850(param_3);
    if ((20.0 <= dVar1) || ((char)local_10 != '\x01')) {
      FUN_010cbe50(param_2,param_3,&local_18,param_13);
    }
    else {
      FUN_010cbda0(param_2 * param_3,&local_18,param_13);
    }
    FUN_00414ad0(param_12,local_18);
  }
  else {
    local_10._2_1_ = (char)((ulonglong)local_10 >> 0x10);
    if (local_10._2_1_ == '\0') {
      FUN_010cbe50(param_2,param_3,&local_18,param_13);
      FUN_010cbe50(param_4,param_5,&local_20,param_13);
    }
    else {
      FUN_010cbe50(param_6,param_7,&local_18,param_13);
      if (local_10._1_1_ == '\0') {
        FUN_010cb960(param_8 * 57.29577951308232,&param_9,&param_10);
      }
      FUN_010cbe50(param_9,param_10,&local_20,param_13);
    }
    FUN_010cbf20(&local_10,local_18,local_20,local_10._2_1_,param_12);
  }
  FUN_00414560(&local_20,2);
  return;
}

