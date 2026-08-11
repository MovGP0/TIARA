/* Ghidra address: 00f701e0 */
/* Ghidra symbol: FUN_00f701e0 */


void FUN_00f701e0(undefined8 param_1,ulonglong *param_2)

{
  ulonglong uVar1;
  longlong lVar2;
  undefined4 uStack_c;
  
  uVar1 = *param_2;
  lVar2 = FUN_00f6f040();
  *(undefined1 *)(lVar2 + 0x10) = 2;
  uStack_c = (undefined4)(uVar1 >> 0x20);
  FUN_00f6e1e0(lVar2,uVar1 & 0xffffffff,uStack_c);
  return;
}

