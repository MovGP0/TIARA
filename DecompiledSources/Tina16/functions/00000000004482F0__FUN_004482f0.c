/* Ghidra address: 004482f0 */
/* Ghidra symbol: FUN_004482f0 */


undefined1 FUN_004482f0(undefined8 param_1,undefined8 param_2,char param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined1 local_21;
  undefined8 local_20 [2];
  undefined8 local_10;
  
  local_20[0] = 0;
  local_10 = 0;
  FUN_00415430(local_20,param_1,0);
  FUN_00416880(&local_10,local_20[0]);
  if (param_3 == '\0') {
    uVar1 = FUN_00416740(local_10);
    local_21 = FUN_00447b10(uVar1,param_2,param_4);
  }
  else {
    uVar1 = FUN_00416740(local_10);
    local_21 = FUN_00447e70(uVar1,param_2,param_4);
  }
  FUN_004144d0(local_20);
  FUN_00414480(&local_10);
  return local_21;
}

