/* Ghidra address: 00f36270 */
/* Ghidra symbol: FUN_00f36270 */


undefined8 FUN_00f36270(longlong param_1)

{
  undefined8 uVar1;
  
  if (*(longlong *)(param_1 + 0x50) == 0) {
    uVar1 = FUN_00f367b0(&PTR_FUN_00f27468,1,param_1);
    *(undefined8 *)(param_1 + 0x50) = uVar1;
  }
  return *(undefined8 *)(param_1 + 0x50);
}

