/* Ghidra address: 006fb2e0 */
/* Ghidra symbol: FUN_006fb2e0 */


void FUN_006fb2e0(longlong param_1,longlong param_2)

{
  undefined1 uVar1;
  longlong *plVar2;
  ulonglong uVar3;
  
  uVar1 = FUN_006d3e20(4);
  *(undefined1 *)(param_1 + 0x51c) = uVar1;
  FUN_00654e40(param_1,param_2);
  FUN_00654d20(param_1,param_2,L"ToolbarWindow32");
  plVar2 = (longlong *)FUN_00777cd0();
  uVar3 = (**(code **)(*plVar2 + 0x98))(plVar2);
  *(uint *)(param_2 + 8) =
       *(uint *)(param_2 + 8) | 0x4e |
       *(uint *)(&DAT_01e023e8 + (ulonglong)*(byte *)(param_1 + 0x4de) * 4) |
       *(uint *)(&DAT_01e023e0 + (ulonglong)*(byte *)(param_1 + 0x4dd) * 4) |
       *(uint *)(&DAT_01e023f8 + (ulonglong)*(byte *)(param_1 + 0x4e4) * 4) |
       *(uint *)(&DAT_01e02400 + (ulonglong)*(byte *)(param_1 + 0x4c9) * 4) |
       *(uint *)(&DAT_01e023f0 + (uVar3 & 0xff) * 4);
  if ((*(char *)(param_1 + 0x4dc) != '\0') || (*(char *)(param_1 + 0x4a0) != '\0')) {
    *(uint *)(param_2 + 8) = *(uint *)(param_2 + 8) | 0x8000;
  }
  *(uint *)(param_2 + 0x30) = *(uint *)(param_2 + 0x30) & 0xfffffffc;
  return;
}

