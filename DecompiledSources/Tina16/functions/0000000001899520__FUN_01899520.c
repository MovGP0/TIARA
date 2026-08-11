/* Ghidra address: 01899520 */
/* Ghidra symbol: FUN_01899520 */


undefined8 FUN_01899520(longlong param_1)

{
  undefined8 uVar1;
  
  uVar1 = 0;
  if (*(longlong *)(param_1 + 0x4b8) != 0) {
    uVar1 = *(undefined8 *)(*(longlong *)(param_1 + 0x4b8) + 0x4c0);
  }
  return uVar1;
}

