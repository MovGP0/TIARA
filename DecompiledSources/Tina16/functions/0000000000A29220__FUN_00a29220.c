/* Ghidra address: 00a29220 */
/* Ghidra symbol: FUN_00a29220 */


void FUN_00a29220(longlong param_1,undefined2 param_2,undefined2 param_3)

{
  int iVar1;
  longlong lVar2;
  undefined8 local_28;
  undefined8 local_20 [2];
  
  local_28 = 0;
  local_20[0] = 0;
  FUN_00416780(local_20,param_2);
  iVar1 = FUN_004170c0(local_20[0],**(undefined8 **)(param_1 + 0x40),1);
  while (0 < iVar1) {
    lVar2 = FUN_00414de0(*(undefined8 *)(param_1 + 0x40));
    *(undefined2 *)(lVar2 + -2 + (longlong)iVar1 * 2) = param_3;
    FUN_00416780(&local_28,param_2);
    iVar1 = FUN_004170c0(local_28,**(undefined8 **)(param_1 + 0x40),1);
  }
  FUN_00414560(&local_28,2);
  return;
}

