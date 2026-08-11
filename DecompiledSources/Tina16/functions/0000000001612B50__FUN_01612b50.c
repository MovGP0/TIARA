/* Ghidra address: 01612b50 */
/* Ghidra symbol: FUN_01612b50 */


void FUN_01612b50(longlong param_1,undefined4 param_2)

{
  int iVar1;
  undefined8 uVar2;
  
  *(int *)(param_1 + 0xd8) = *(int *)(param_1 + 0xd8) + 1;
  iVar1 = *(int *)(param_1 + 0xd8);
  if (iVar1 == 1) {
    uVar2 = FUN_004095c0(4);
    *(undefined8 *)(param_1 + 0xd0) = uVar2;
  }
  else {
    FUN_00409620(param_1 + 0xd0,(longlong)(iVar1 * 4));
  }
  *(undefined4 *)(*(longlong *)(param_1 + 0xd0) + (longlong)(iVar1 + -1) * 4) = param_2;
  return;
}

