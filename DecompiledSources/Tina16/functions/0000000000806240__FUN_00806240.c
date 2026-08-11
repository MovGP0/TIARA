/* Ghidra address: 00806240 */
/* Ghidra symbol: FUN_00806240 */


void FUN_00806240(longlong param_1)

{
  if (*(longlong *)(param_1 + 0x78) == 0) {
    FUN_00809420(DAT_02012670,param_1);
  }
  else if ((*(ushort *)(param_1 + 0x34) & 0x10) == 0) {
    FUN_00658b40();
  }
  return;
}

