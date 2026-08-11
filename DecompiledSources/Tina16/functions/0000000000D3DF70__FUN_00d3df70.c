/* Ghidra address: 00d3df70 */
/* Ghidra symbol: FUN_00d3df70 */


void FUN_00d3df70(longlong param_1,longlong param_2)

{
  undefined8 uVar1;
  
  uVar1 = FUN_00788400(param_1,param_2);
  *(undefined8 *)(param_2 + 0x18) = uVar1;
  *(undefined1 *)(param_1 + 0x40) = 1;
  return;
}

