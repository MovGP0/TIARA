/* Ghidra address: 012c52d0 */
/* Ghidra symbol: FUN_012c52d0 */


void FUN_012c52d0(undefined8 param_1,longlong param_2,longlong param_3)

{
  if ((*(uint *)(*(longlong *)(param_3 + 0x18) + 0x62c) & 0x10) == 0x10) {
    FUN_005fce70(*(undefined8 *)(*(longlong *)(param_2 + 0x498) + 0x70),1);
  }
  else {
    FUN_005fce70(*(undefined8 *)(*(longlong *)(param_2 + 0x498) + 0x70),0);
  }
  return;
}

