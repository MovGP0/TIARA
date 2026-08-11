/* Ghidra address: 00af9960 */
/* Ghidra symbol: FUN_00af9960 */


void FUN_00af9960(undefined8 param_1,longlong param_2)

{
  longlong lVar1;
  
  lVar1 = *(longlong *)(param_2 + 0x70);
  *(undefined8 *)(lVar1 + 0x830) = *(undefined8 *)(param_2 + 0x40);
  *(undefined8 *)(lVar1 + 0x838) = *(undefined8 *)(param_2 + 0x48);
  return;
}

