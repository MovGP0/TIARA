/* Ghidra address: 0094e660 */
/* Ghidra symbol: FUN_0094e660 */


undefined8 FUN_0094e660(longlong param_1,undefined8 param_2)

{
  int iVar1;
  undefined8 local_28;
  undefined8 local_20 [2];
  
  local_28 = 0;
  local_20[0] = 0;
  iVar1 = FUN_00416420(*(undefined8 *)(param_1 + 0x58),0);
  if (iVar1 == 0) {
    iVar1 = (**(code **)(**(longlong **)(param_1 + 0x50) + 0x28))(*(longlong **)(param_1 + 0x50));
    if (iVar1 == 1) {
      (**(code **)(**(longlong **)(param_1 + 0x50) + 0x18))
                (*(longlong **)(param_1 + 0x50),local_20,0);
      FUN_004168e0(param_1 + 0x58,local_20[0]);
    }
    else {
      (**(code **)(**(longlong **)(param_1 + 0x50) + 0x38))
                (*(longlong **)(param_1 + 0x50),&local_28);
      FUN_004168e0(param_1 + 0x58,local_28);
    }
  }
  FUN_00414b90(param_2,*(undefined8 *)(param_1 + 0x58));
  FUN_00414560(&local_28,2);
  return param_2;
}

