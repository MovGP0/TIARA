/* Ghidra address: 006d8bb0 */
/* Ghidra symbol: FUN_006d8bb0 */


bool FUN_006d8bb0(longlong param_1)

{
  bool bVar1;
  
  bVar1 = *(longlong *)(param_1 + 0x4c0) != 0;
  if (bVar1) {
    (**(code **)(param_1 + 0x4c0))(*(undefined8 *)(param_1 + 0x4c8),param_1);
  }
  return bVar1;
}

