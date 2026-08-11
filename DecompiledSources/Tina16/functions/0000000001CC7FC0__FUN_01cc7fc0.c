/* Ghidra address: 01cc7fc0 */
/* Ghidra symbol: FUN_01cc7fc0 */


void FUN_01cc7fc0(longlong param_1)

{
  undefined8 uVar1;
  
  uVar1 = FUN_004b6da0(*(undefined8 *)(*(longlong *)(*(longlong *)(param_1 + 8) + 8) + 0x438));
  *(undefined8 *)(param_1 + 0x68) = uVar1;
  *(undefined4 *)(param_1 + 0x60) = *(undefined4 *)(param_1 + 0x24);
  *(undefined4 *)(param_1 + 100) = *(undefined4 *)(param_1 + 0x20);
  return;
}

