/* Ghidra address: 008367f0 */
/* Ghidra symbol: FUN_008367f0 */


void FUN_008367f0(longlong *param_1,undefined8 param_2)

{
  char cVar1;
  
  cVar1 = FUN_008355d0(param_1);
  if ((cVar1 != '\0') && ((*(ushort *)((longlong)param_1 + 0x34) & 0x10) == 0)) {
    (**(code **)(*param_1 + 0x2c8))(param_1);
    FUN_00835cc0(param_1);
  }
  FUN_00682010(param_1,param_2);
  return;
}

