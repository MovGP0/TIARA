/* Ghidra address: 00a521c0 */
/* Ghidra symbol: FUN_00a521c0 */


int FUN_00a521c0(longlong param_1,int param_2,int param_3)

{
  short sVar1;
  
  while ((param_2 <= param_3 &&
         (((sVar1 = *(short *)(param_1 + -2 + (longlong)param_2 * 2), sVar1 == 10 ||
           ((ushort)(sVar1 - 0xcU) < 2)) || (sVar1 == 0x20))))) {
    param_2 = param_2 + 1;
  }
  return param_2;
}

