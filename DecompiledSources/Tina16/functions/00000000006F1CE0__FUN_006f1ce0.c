/* Ghidra address: 006f1ce0 */
/* Ghidra symbol: FUN_006f1ce0 */


void FUN_006f1ce0(longlong param_1,longlong param_2)

{
  longlong lVar1;
  
  FUN_006d3e20(1);
  FUN_00654e40(param_1,param_2);
  FUN_00654d20(param_1,param_2,L"SysListView32");
  lVar1 = *(longlong *)(param_1 + 0x4f0);
  *(uint *)(param_2 + 8) =
       *(uint *)(param_2 + 8) | 0x2000000 |
       *(uint *)(&DAT_01e014d8 + (ulonglong)*(byte *)(param_1 + 0x4a1) * 4) |
       *(uint *)(&DAT_01e014a0 + (ulonglong)*(byte *)(param_1 + 0x4a0) * 4) |
       *(uint *)(&DAT_01e014c0 + (ulonglong)*(byte *)(lVar1 + 0x10) * 4) |
       *(uint *)(&DAT_01e014a8 + (ulonglong)*(byte *)(param_1 + 0x4a2) * 4) |
       *(uint *)(&DAT_01e014b0 + (ulonglong)*(byte *)(param_1 + 0x4d8) * 4) |
       *(uint *)(&DAT_01e014b8 + (ulonglong)*(byte *)(param_1 + 0x4f8) * 4) |
       *(uint *)(&DAT_01e014c8 + (ulonglong)*(byte *)(lVar1 + 0x11) * 4) |
       *(uint *)(&DAT_01e014d0 + (ulonglong)*(byte *)(lVar1 + 0x12) * 4) |
       *(uint *)(&DAT_01e014e8 + (ulonglong)*(byte *)(param_1 + 0x4db) * 4) |
       *(uint *)(&DAT_01e014f0 + (ulonglong)*(byte *)(param_1 + 0x4da) * 4) | 0x40;
  if (*(char *)(param_1 + 0x510) != '\0') {
    *(uint *)(param_2 + 8) = *(uint *)(param_2 + 8) | 0x1000;
  }
  if (*(char *)(param_1 + 0x511) != '\0') {
    *(uint *)(param_2 + 8) = *(uint *)(param_2 + 8) | 0x400;
  }
  if (((*(char *)(param_1 + 0x390) != '\0') && (*PTR_DAT_02003210 != '\0')) &&
     (*(char *)(param_1 + 0x4a0) == '\x01')) {
    *(uint *)(param_2 + 8) = *(uint *)(param_2 + 8) & 0xff7fffff;
    *(uint *)(param_2 + 0xc) = *(uint *)(param_2 + 0xc) | 0x200;
  }
  *(uint *)(param_2 + 0x30) = *(uint *)(param_2 + 0x30) & 0xfffffffc;
  return;
}

