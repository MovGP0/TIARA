/* Ghidra address: 004d4d60 */
/* Ghidra symbol: FUN_004d4d60 */


bool FUN_004d4d60(longlong param_1)

{
  bool bVar1;
  
  bVar1 = *(longlong *)(param_1 + 0x98) != 0;
  if (bVar1) {
    (**(code **)(param_1 + 0x98))(*(undefined8 *)(param_1 + 0xa0),param_1);
  }
  return bVar1;
}

