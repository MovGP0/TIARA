/* Ghidra address: 008f0680 */
/* Ghidra symbol: FUN_008f0680 */


undefined8 FUN_008f0680(undefined8 param_1,ushort *param_2)

{
  uint uVar1;
  
  uVar1 = 0;
  if (param_2 != (ushort *)0x0) {
    uVar1 = *(uint *)(param_2 + -2) >> 1;
  }
  while( true ) {
    if (uVar1 == 0) {
      return 1;
    }
    if (0x7f < *param_2) break;
    param_2 = param_2 + 1;
    uVar1 = uVar1 - 1;
  }
  return 0;
}

