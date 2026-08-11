/* Ghidra address: 006e1370 */
/* Ghidra symbol: FUN_006e1370 */


void FUN_006e1370(longlong param_1,longlong param_2)

{
  uint uVar1;
  ulonglong uVar2;
  
  FUN_006d3e20(2);
  FUN_00654e40(param_1,param_2);
  FUN_00654d20(param_1,param_2,L"SysTreeView32");
  uVar1 = FUN_0064c470(param_1);
  uVar2 = FUN_0064e930(param_1);
  *(uint *)(param_2 + 8) =
       *(uint *)(param_2 + 8) | *(uint *)(&DAT_01dff634 + (ulonglong)*(byte *)(param_1 + 0x52d) * 4)
       | *(uint *)(&DAT_01dff62c + (ulonglong)*(byte *)(param_1 + 0x491) * 4) |
       *(uint *)(&DAT_01dff63c + (ulonglong)*(byte *)(param_1 + 0x52e) * 4) |
       *(uint *)(&DAT_01dff644 + (ulonglong)*(byte *)(param_1 + 0x52c) * 4) |
       *(uint *)(&DAT_01dff64c + (ulonglong)*(byte *)(param_1 + 0x512) * 4) |
       *(uint *)(&DAT_01dff654 + (ulonglong)*(byte *)(param_1 + 0x4d8) * 4) |
       *(uint *)(&DAT_01dff65c + ((ulonglong)uVar1 & 0xff) * 4) |
       *(uint *)(&DAT_01dff664 + (uVar2 & 0xff) * 4) |
       *(uint *)(&DAT_01dff66c + (ulonglong)*(byte *)(param_1 + 0x548) * 4) |
       *(uint *)(&DAT_01dff674 + (ulonglong)*(byte *)(param_1 + 0x490) * 4) |
       *(uint *)(&DAT_01dff67c + (ulonglong)*(byte *)(param_1 + 0x4d9) * 4) |
       *(uint *)(&DAT_01dff684 + (ulonglong)*(byte *)(param_1 + 0x513) * 4);
  if (((*(char *)(param_1 + 0x390) != '\0') && (*PTR_DAT_02003210 != '\0')) &&
     (*(char *)(param_1 + 0x491) == '\x01')) {
    *(uint *)(param_2 + 8) = *(uint *)(param_2 + 8) & 0xff7fffff;
    *(uint *)(param_2 + 0xc) = *(uint *)(param_2 + 0xc) | 0x200;
  }
  *(uint *)(param_2 + 0x30) = *(uint *)(param_2 + 0x30) & 0xfffffffc;
  return;
}

