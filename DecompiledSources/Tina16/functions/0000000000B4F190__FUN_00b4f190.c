/* Ghidra address: 00b4f190 */
/* Ghidra symbol: FUN_00b4f190 */


void FUN_00b4f190(longlong param_1,undefined8 param_2)

{
  int iVar1;
  undefined8 local_res10 [3];
  undefined8 local_30 [2];
  undefined8 local_20 [2];
  
  local_30[0] = 0;
  local_20[0] = 0;
  local_res10[0] = param_2;
  FUN_00414630(param_2);
  FUN_00b4f280(param_1,local_20);
  iVar1 = FUN_00415a60(local_20[0],local_res10[0]);
  if (iVar1 != 0) {
    FUN_00b156f0(local_30,*(undefined8 *)(param_1 + 0x40),&LAB_00b4f27c,local_res10[0]);
    FUN_00414bf0(param_1 + 0x40,local_30[0]);
    (**(code **)**(undefined8 **)(param_1 + 0x10))(*(undefined8 **)(param_1 + 0x10),param_1);
  }
  FUN_004144d0(local_30);
  FUN_004144d0(local_20);
  FUN_004144d0(local_res10);
  return;
}

