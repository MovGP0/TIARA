/* Ghidra address: 01535e00 */
/* Ghidra symbol: FUN_01535e00 */


void FUN_01535e00(longlong param_1)

{
  uint uVar1;
  
  uVar1 = *(uint *)(*(longlong *)(param_1 + 0x718) + 0x4a8);
  if (uVar1 < 4) {
    FUN_006d8180(*(undefined8 *)(param_1 + 0x720),0);
  }
  else if (uVar1 == 4) {
    FUN_006d8180(*(undefined8 *)(param_1 + 0x720),2);
  }
  else if (uVar1 == 5) {
    FUN_006d8180(*(undefined8 *)(param_1 + 0x720),1);
  }
  else if (uVar1 == 6) {
    FUN_006d8180(*(undefined8 *)(param_1 + 0x720),0);
  }
  return;
}

