/* Ghidra address: 01c04260 */
/* Ghidra symbol: FUN_01c04260 */


undefined4 FUN_01c04260(longlong param_1,undefined8 *param_2)

{
  int iVar1;
  int local_20;
  
  local_20 = (int)*param_2;
  if ((local_20 != 0) && (iVar1 = FUN_01c041a0(param_1), iVar1 != 0)) {
    return *(undefined4 *)(param_1 + 0x348);
  }
  return 0;
}

