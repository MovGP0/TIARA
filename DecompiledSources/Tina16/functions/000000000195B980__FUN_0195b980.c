/* Ghidra address: 0195b980 */
/* Ghidra symbol: FUN_0195b980 */


undefined8 FUN_0195b980(longlong param_1)

{
  int iVar1;
  
  if ((*(longlong *)(param_1 + 0x1b0) != 0) &&
     (iVar1 = FUN_00414cb0(*(undefined8 *)(param_1 + 0x1a8)), iVar1 != 0)) {
    return 1;
  }
  return 0;
}

