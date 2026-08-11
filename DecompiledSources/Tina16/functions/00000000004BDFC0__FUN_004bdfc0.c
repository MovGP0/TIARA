/* Ghidra address: 004bdfc0 */
/* Ghidra symbol: FUN_004bdfc0 */


void FUN_004bdfc0(longlong param_1)

{
  undefined8 uVar1;
  undefined1 auStack_38 [40];
  undefined1 *local_10;
  
  local_10 = auStack_38;
  uVar1 = FUN_004e0f60(&PTR_FUN_0048f0b8,1);
  *(undefined8 *)(param_1 + 0x68) = uVar1;
  uVar1 = FUN_004dfb90(&PTR_FUN_0048d528,1);
  *(undefined8 *)(param_1 + 0x60) = uVar1;
  return;
}

