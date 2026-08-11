/* Ghidra address: 00b78d50 */
/* Ghidra symbol: FUN_00b78d50 */


void FUN_00b78d50(ushort *param_1,ushort param_2)

{
  int iVar1;
  
  iVar1 = (uint)*param_1 * (uint)param_2;
  if (iVar1 == 0) {
    *param_1 = 1 - (*param_1 + param_2);
  }
  else {
    *param_1 = (ushort)((uint)iVar1 >> 0x10);
    *param_1 = (ushort)iVar1 - *param_1;
    if ((ushort)iVar1 < *param_1) {
      *param_1 = *param_1 + 1;
    }
  }
  return;
}

