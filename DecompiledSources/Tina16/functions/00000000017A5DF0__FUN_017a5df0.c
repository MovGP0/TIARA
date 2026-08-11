/* Ghidra address: 017a5df0 */
/* Ghidra symbol: FUN_017a5df0 */


bool FUN_017a5df0(longlong param_1)

{
  int iVar1;
  
  iVar1 = (**(code **)(**(longlong **)(param_1 + 0x58) + 0x60))(*(longlong **)(param_1 + 0x58));
  return iVar1 == *(int *)(*(longlong *)
                            (*(longlong *)(*(longlong *)(param_1 + 0x80) + 0x30) + 0x780) + 0x94);
}

