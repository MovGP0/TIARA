/* Ghidra address: 00ccf3b0 */
/* Ghidra symbol: FUN_00ccf3b0 */


undefined8 FUN_00ccf3b0(longlong param_1)

{
  undefined8 uVar1;
  
  uVar1 = 1;
  if (*(longlong *)(param_1 + 0x218) != 0) {
    uVar1 = (**(code **)(param_1 + 0x218))(*(undefined8 *)(param_1 + 0x220));
  }
  return uVar1;
}

