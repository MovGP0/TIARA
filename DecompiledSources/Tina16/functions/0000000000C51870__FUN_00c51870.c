/* Ghidra address: 00c51870 */
/* Ghidra symbol: FUN_00c51870 */


undefined8 FUN_00c51870(longlong param_1)

{
  undefined8 uVar1;
  
  if (*(longlong *)(param_1 + 0xb8) == 0) {
    uVar1 = 0;
  }
  else {
    uVar1 = (**(code **)(param_1 + 0xb8))(*(undefined8 *)(param_1 + 0xc0));
  }
  return uVar1;
}

