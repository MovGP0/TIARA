/* Ghidra address: 018ba320 */
/* Ghidra symbol: FUN_018ba320 */


void FUN_018ba320(undefined8 param_1,int param_2,double param_3,char param_4)

{
  undefined8 uVar1;
  undefined8 local_28;
  undefined8 local_20 [2];
  
  local_28 = 0;
  local_20[0] = 0;
  if (0 < param_2 || param_4 != '\0') {
    uVar1 = FUN_018b8410(param_1);
    FUN_0043f750(local_20,param_2);
    FUN_01803ed0(uVar1,&DAT_018ba428,local_20[0]);
  }
  if (param_3 != 0.0 || param_4 != '\0') {
    uVar1 = FUN_018b8410(param_1);
    FUN_00448430(&local_28,param_3);
    FUN_01803ed0(uVar1,&DAT_018ba438,local_28);
  }
  FUN_00414560(&local_28,2);
  return;
}

