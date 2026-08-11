/* Ghidra address: 00be8020 */
/* Ghidra symbol: FUN_00be8020 */


void FUN_00be8020(longlong param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  FUN_00409620(param_1 + 0x18,(longlong)(*(int *)(param_1 + 0x30) * 4));
  *(undefined4 *)(param_1 + 0x28) = *(undefined4 *)(param_1 + 0x30);
  iVar1 = FUN_00be7fe0(param_1);
  FUN_00409620(param_1 + 0x20,(longlong)(iVar1 * 2));
  uVar2 = FUN_00be7fe0(param_1);
  *(undefined4 *)(param_1 + 0x2c) = uVar2;
  return;
}

