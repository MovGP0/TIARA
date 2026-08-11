/* Ghidra address: 00baeff0 */
/* Ghidra symbol: FUN_00baeff0 */


undefined8 FUN_00baeff0(longlong param_1)

{
  int iVar1;
  
  if ((*(longlong *)(param_1 + 0x30) != 0) &&
     (iVar1 = (**(code **)(**(longlong **)(param_1 + 0x30) + 0x18))(*(longlong **)(param_1 + 0x30)),
     0 < iVar1)) {
    return 1;
  }
  return 0;
}

