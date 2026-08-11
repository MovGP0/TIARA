/* Ghidra address: 0155fcf0 */
/* Ghidra symbol: FUN_0155fcf0 */


undefined8
FUN_0155fcf0(longlong param_1,undefined8 param_2,longlong *param_3,undefined8 param_4,
            undefined4 param_5,char param_6)

{
  short sVar1;
  undefined8 local_38;
  undefined8 local_30;
  undefined8 local_28;
  longlong local_20 [2];
  
  local_30 = 0;
  local_38 = 0;
  local_20[0] = 0;
  local_28 = 0;
  (**(code **)(*param_3 + 0x288))(param_3,local_20);
  FUN_017ff4a0(param_3,&local_28);
  sVar1 = (**(code **)(*param_3 + 0xf8))(param_3);
  if (sVar1 != 0x90) {
    param_3 = (longlong *)0x0;
  }
  FUN_00415dd0(&local_38,local_20[0],0);
  FUN_015f1890(&local_30,local_38,param_4,param_5,param_3);
  FUN_00416880(local_20,local_30);
  if (local_20[0] == 0) {
    FUN_01d43440(local_20,param_5);
  }
  if ((param_6 == '\0') && (*(char *)(param_1 + 0x94e) == '\0')) {
    FUN_00416cd0(param_2,3,local_20[0],&DAT_0155fe6c,local_28);
  }
  else {
    FUN_00414ad0(param_2,local_20[0]);
  }
  FUN_00414590(&local_38,2);
  FUN_00414560(&local_28,2);
  return param_2;
}

