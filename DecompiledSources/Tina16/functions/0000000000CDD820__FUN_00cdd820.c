/* Ghidra address: 00cdd820 */
/* Ghidra symbol: FUN_00cdd820 */


void FUN_00cdd820(undefined8 param_1)

{
  int iVar1;
  
  if (DAT_01eb0290 != (longlong *)0x0) {
    iVar1 = (**(code **)(*DAT_01eb0290 + 0xb0))(DAT_01eb0290,param_1);
    if (0 < iVar1) {
      (**(code **)(*DAT_01eb0290 + 0x98))(DAT_01eb0290,iVar1);
    }
  }
  return;
}

