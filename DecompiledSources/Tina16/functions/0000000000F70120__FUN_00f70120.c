/* Ghidra address: 00f70120 */
/* Ghidra symbol: FUN_00f70120 */


void FUN_00f70120(undefined8 param_1,ulonglong *param_2)

{
  ulonglong uVar1;
  longlong lVar2;
  undefined4 uStack_1c;
  
  uVar1 = *param_2;
  uStack_1c = (undefined4)(uVar1 >> 0x20);
  FUN_00f6ed70(param_1,uVar1 & 0xffffffff,uStack_1c);
  lVar2 = FUN_00f6f040(param_1);
  *(undefined1 *)(lVar2 + 0x94) = 1;
  *(undefined1 *)(lVar2 + 0x92) = 1;
  *(ulonglong *)(lVar2 + 0x98) = uVar1;
  *(ulonglong *)(lVar2 + 0xa0) = uVar1;
  return;
}

