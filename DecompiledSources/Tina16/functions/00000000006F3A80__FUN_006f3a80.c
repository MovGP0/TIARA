/* Ghidra address: 006f3a80 */
/* Ghidra symbol: FUN_006f3a80 */


bool FUN_006f3a80(longlong param_1,undefined8 param_2)

{
  bool bVar1;
  
  bVar1 = *(longlong *)(param_1 + 0x680) != 0;
  if (bVar1) {
    (**(code **)(param_1 + 0x680))(*(undefined8 *)(param_1 + 0x688),param_1,param_2);
  }
  return bVar1;
}

