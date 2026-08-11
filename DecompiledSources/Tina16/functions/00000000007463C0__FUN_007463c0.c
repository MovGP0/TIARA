/* Ghidra address: 007463c0 */
/* Ghidra symbol: FUN_007463c0 */


undefined8 FUN_007463c0(undefined8 param_1,undefined8 param_2,int param_3,undefined4 param_4)

{
  undefined1 auStack_48 [32];
  undefined8 local_28;
  int local_20;
  undefined4 local_1c;
  undefined8 local_18;
  undefined8 local_10;
  
  local_18 = 0;
  local_10 = 0;
  local_28 = param_2;
  local_20 = param_3;
  local_1c = param_4;
  if (param_3 == 1) {
    FUN_007462a0(auStack_48,&local_10,param_4);
    FUN_00414ad0(local_28,local_10);
  }
  else if (param_3 == 2) {
    FUN_00746320(auStack_48,&local_18,param_4);
    FUN_00414ad0(local_28,local_18);
  }
  else {
    FUN_00414480(param_2);
  }
  FUN_00414560(&local_18,2);
  return local_28;
}

