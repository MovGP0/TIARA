/* Ghidra address: 00de1f50 */
/* Ghidra symbol: FUN_00de1f50 */


undefined8 FUN_00de1f50(longlong param_1)

{
  undefined8 uVar1;
  
  if (*(longlong *)(param_1 + 0x510) == 0) {
    uVar1 = 0x80004001;
  }
  else {
    uVar1 = (**(code **)(param_1 + 0x510))(*(undefined8 *)(param_1 + 0x518));
  }
  return uVar1;
}

