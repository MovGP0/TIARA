/* Ghidra address: 00cce490 */
/* Ghidra symbol: FUN_00cce490 */


undefined8 FUN_00cce490(longlong param_1)

{
  undefined8 uVar1;
  
  uVar1 = 1;
  if (*(longlong *)(param_1 + 0x148) != 0) {
    uVar1 = (**(code **)(param_1 + 0x148))(*(undefined8 *)(param_1 + 0x150));
  }
  return uVar1;
}

