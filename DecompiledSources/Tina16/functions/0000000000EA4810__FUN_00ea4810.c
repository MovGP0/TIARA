/* Ghidra address: 00ea4810 */
/* Ghidra symbol: FUN_00ea4810 */


undefined8 FUN_00ea4810(longlong param_1,undefined8 param_2)

{
  int iVar1;
  
  iVar1 = 0;
  if (*(longlong *)(param_1 + 0x20) != 0) {
    iVar1 = *(int *)(*(longlong *)(param_1 + 0x20) + -4);
  }
  FUN_00416dc0(param_2,*(undefined8 *)(param_1 + 0x20),*(int *)(param_1 + 0x54) + 1,
               iVar1 - *(int *)(param_1 + 0x54));
  return param_2;
}

