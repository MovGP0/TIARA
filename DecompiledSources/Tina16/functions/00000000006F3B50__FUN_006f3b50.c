/* Ghidra address: 006f3b50 */
/* Ghidra symbol: FUN_006f3b50 */


bool FUN_006f3b50(longlong param_1,undefined4 param_2,undefined4 param_3)

{
  bool bVar1;
  
  bVar1 = *(longlong *)(param_1 + 0x6a0) != 0;
  if (bVar1) {
    (**(code **)(param_1 + 0x6a0))(*(undefined8 *)(param_1 + 0x6a8),param_1,param_2,param_3);
  }
  return bVar1;
}

