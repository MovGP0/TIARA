/* Ghidra address: 0064e700 */
/* Ghidra symbol: FUN_0064e700 */


void FUN_0064e700(longlong param_1)

{
  longlong *plVar1;
  
  plVar1 = *(longlong **)(param_1 + 0x78);
  if (plVar1 != (longlong *)0x0) {
    (**(code **)(*plVar1 + 0x240))(plVar1,param_1);
  }
  if (((*(ushort *)(param_1 + 0x34) & 0x10) == 0) || ((*(uint *)(param_1 + 0xa0) & 0x400) != 0)) {
    FUN_0064dbe0(param_1,1);
  }
  return;
}

