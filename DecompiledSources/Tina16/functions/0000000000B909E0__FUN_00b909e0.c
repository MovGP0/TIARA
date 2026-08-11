/* Ghidra address: 00b909e0 */
/* Ghidra symbol: FUN_00b909e0 */


undefined2 * FUN_00b909e0(undefined2 *param_1,char param_2)

{
  int iVar1;
  
  iVar1 = 0;
  do {
    iVar1 = iVar1 + 1;
    if (0x14 < iVar1) break;
  } while (*(char *)((longlong)&UNWIND_INFO_01e946a8 + (longlong)iVar1 * 7 + 1) != param_2);
  if (iVar1 < 0x15) {
    FUN_00415020(param_1,(longlong)iVar1 * 7 + 0x1e946aa,CONCAT71((int7)(int3)((uint)iVar1 >> 8),10)
                );
  }
  else {
    *param_1 = 0x2301;
  }
  return param_1;
}

