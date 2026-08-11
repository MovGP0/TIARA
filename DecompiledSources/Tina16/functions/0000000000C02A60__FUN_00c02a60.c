/* Ghidra address: 00c02a60 */
/* Ghidra symbol: FUN_00c02a60 */


void FUN_00c02a60(longlong *param_1)

{
  int iVar1;
  
  (**(code **)(*param_1 + 0x180))(param_1);
  if ((*(uint *)((longlong)param_1 + 0x63a) & 4) != 0) {
    iVar1 = FUN_00bcfa20(param_1[0x9d]);
    if ((int)param_1[0xa2] < iVar1) {
      FUN_00c036c0(param_1,iVar1);
    }
  }
  FUN_00bfd160(param_1);
  return;
}

