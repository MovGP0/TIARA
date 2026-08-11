/* Ghidra address: 00b1b070 */
/* Ghidra symbol: FUN_00b1b070 */


void FUN_00b1b070(longlong param_1)

{
  int iVar1;
  
  FUN_00b193b0(*(undefined8 *)(param_1 + 8));
  iVar1 = FUN_00b19370(*(undefined8 *)(param_1 + 8));
  (**(code **)(**(longlong **)(param_1 + 0x10) + 0x10))
            (*(longlong **)(param_1 + 0x10),(longlong)(iVar1 + -1));
  return;
}

