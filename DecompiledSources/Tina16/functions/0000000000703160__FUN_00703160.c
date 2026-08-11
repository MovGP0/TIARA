/* Ghidra address: 00703160 */
/* Ghidra symbol: FUN_00703160 */


void FUN_00703160(longlong param_1,longlong param_2)

{
  FUN_006d3e20(0x1000);
  FUN_00654e40(param_1,param_2);
  FUN_00654d20(param_1,param_2,L"SysPager");
  if (*(char *)(param_1 + 0x490) != '\0') {
    *(uint *)(param_2 + 8) = *(uint *)(param_2 + 8) | 2;
  }
  if (*(char *)(param_1 + 0x4a0) != '\0') {
    *(uint *)(param_2 + 8) = *(uint *)(param_2 + 8) | 4;
  }
  *(uint *)(param_2 + 8) =
       *(uint *)(param_2 + 8) | *(uint *)(&DAT_01e02f00 + (ulonglong)*(byte *)(param_1 + 0x4a8) * 4)
  ;
  *(uint *)(param_2 + 0x30) = *(uint *)(param_2 + 0x30) & 0xfffffffc;
  return;
}

