/* Ghidra address: 012f69d0 */
/* Ghidra symbol: FUN_012f69d0 */


void FUN_012f69d0(undefined8 param_1,longlong param_2,longlong param_3)

{
  if ((*(uint *)(*(longlong *)(param_3 + 0x18) + 4) & 0x10) == 0x10) {
    FUN_005fce70(*(undefined8 *)(*(longlong *)(param_2 + 0x498) + 0x70),1);
  }
  else {
    FUN_005fce70(*(undefined8 *)(*(longlong *)(param_2 + 0x498) + 0x70),0);
  }
  return;
}

