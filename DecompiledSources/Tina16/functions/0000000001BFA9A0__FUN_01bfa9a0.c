/* Ghidra address: 01bfa9a0 */
/* Ghidra symbol: FUN_01bfa9a0 */


undefined8 FUN_01bfa9a0(longlong param_1)

{
  undefined8 uVar1;
  
  if (*(longlong *)(param_1 + 0x20) == 0) {
    uVar1 = FUN_00603960(&DAT_005f7500,1);
    *(undefined8 *)(param_1 + 0x20) = uVar1;
  }
  return *(undefined8 *)(param_1 + 0x20);
}

