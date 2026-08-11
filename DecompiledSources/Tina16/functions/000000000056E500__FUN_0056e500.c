/* Ghidra address: 0056e500 */
/* Ghidra symbol: FUN_0056e500 */


undefined8 FUN_0056e500(longlong param_1)

{
  undefined8 uVar1;
  
  uVar1 = 0;
  if (*(longlong *)(param_1 + 8) != 0) {
    uVar1 = *(undefined8 *)(*(longlong *)(param_1 + 8) + -8);
  }
  return uVar1;
}

