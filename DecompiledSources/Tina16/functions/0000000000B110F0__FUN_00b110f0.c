/* Ghidra address: 00b110f0 */
/* Ghidra symbol: FUN_00b110f0 */


void FUN_00b110f0(longlong *param_1,byte param_2)

{
  bool bVar1;
  undefined1 auStack_38 [40];
  
  bVar1 = (param_2 & 1) != 0;
  if (((*(byte *)((longlong)param_1 + 0x609) & 1) != 0) != bVar1) {
    FUN_00b110a0(auStack_38,bVar1);
  }
  *(byte *)((longlong)param_1 + 0x609) = param_2;
  (**(code **)(*param_1 + 0x2c0))(param_1);
  FUN_00b11730(param_1);
  return;
}

