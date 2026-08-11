/* Ghidra address: 006d4df0 */
/* Ghidra symbol: FUN_006d4df0 */


void FUN_006d4df0(longlong param_1,longlong param_2)

{
  code *pcVar1;
  ulonglong uVar2;
  
  FUN_006d3e20(8);
  FUN_00654e40(param_1,param_2);
  FUN_00654d20(param_1,param_2,L"SysTabControl32");
  pcVar1 = (code *)FUN_00411550(param_1,0xffc5);
  uVar2 = (*pcVar1)(param_1);
  *(uint *)(param_2 + 8) =
       *(uint *)(param_2 + 8) | 0x2000000 |
       *(uint *)(&DAT_01dfdbec + (ulonglong)*(byte *)(param_1 + 0x4c2) * 4 + (uVar2 & 0xff) * 0x10)
       | *(uint *)(&DAT_01dfdc0c + (ulonglong)*(byte *)(param_1 + 0x4c1) * 4) |
       *(uint *)(&DAT_01dfdc18 + (ulonglong)*(byte *)(param_1 + 0x4b3) * 4);
  if (*(char *)(param_1 + 900) == '\0') {
    *(uint *)(param_2 + 8) = *(uint *)(param_2 + 8) | 0x8000;
  }
  if (*(char *)(param_1 + 0x4b0) != '\0') {
    *(uint *)(param_2 + 8) = *(uint *)(param_2 + 8) | 0x200;
  }
  if (*(char *)(param_1 + 0x4b1) != '\0') {
    *(uint *)(param_2 + 8) = *(uint *)(param_2 + 8) | 4;
  }
  if ((*(char *)(param_1 + 0x4b2) != '\0') && ((*(ushort *)(param_1 + 0x34) & 0x10) == 0)) {
    *(uint *)(param_2 + 8) = *(uint *)(param_2 + 8) | 0x2000;
  }
  if (*(short *)(param_1 + 0x4d0) != 0) {
    *(uint *)(param_2 + 8) = *(uint *)(param_2 + 8) | 0x400;
  }
  if ((*(char *)(param_1 + 0x498) != '\0') && ((*(ushort *)(param_1 + 0x34) & 0x10) == 0)) {
    *(uint *)(param_2 + 8) = *(uint *)(param_2 + 8) | 0x40;
  }
  if (*(char *)(param_1 + 0x4c0) != '\0') {
    *(uint *)(param_2 + 8) = *(uint *)(param_2 + 8) | 1;
  }
  *(uint *)(param_2 + 0x30) = *(uint *)(param_2 + 0x30) & 0xfffffffc | 8;
  return;
}

