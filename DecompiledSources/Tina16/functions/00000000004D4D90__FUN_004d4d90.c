/* Ghidra address: 004d4d90 */
/* Ghidra symbol: FUN_004d4d90 */


bool FUN_004d4d90(longlong param_1)

{
  bool bVar1;
  
  bVar1 = *(longlong *)(param_1 + 0xa8) != 0;
  if (bVar1) {
    (**(code **)(param_1 + 0xa8))(*(undefined8 *)(param_1 + 0xb0),param_1);
  }
  return bVar1;
}

