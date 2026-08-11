/* Ghidra address: 00622560 */
/* Ghidra symbol: FUN_00622560 */


void FUN_00622560(longlong param_1)

{
  byte bVar1;
  undefined4 uVar2;
  ulonglong uVar3;
  longlong lVar4;
  
  bVar1 = *(byte *)(param_1 + 0x50);
  if (bVar1 != 0) {
    uVar3 = (**(code **)(**(longlong **)(param_1 + 0x10) + 0x30))(*(longlong **)(param_1 + 0x10));
    if (param_1 == 0) {
      lVar4 = 0;
    }
    else {
      lVar4 = param_1 + 0x68;
    }
    uVar2 = thunk_FUN_0411db7a(param_1 + 0x20,lVar4,4,
                               *(uint *)((longlong)&UNWIND_INFO_01df0c04 + (ulonglong)bVar1 * 4 + 8)
                               | *(uint *)(&DAT_01df0c18 + (uVar3 & 0xff) * 4),param_1 + 0x60);
    FUN_006245b0(uVar2);
  }
  return;
}

