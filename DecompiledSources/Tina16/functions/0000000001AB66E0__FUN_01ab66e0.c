/* Ghidra address: 01ab66e0 */
/* Ghidra symbol: FUN_01ab66e0 */


void FUN_01ab66e0(longlong param_1)

{
  undefined8 uVar1;
  
  if (*(longlong *)(param_1 + 0x50) == 0) {
    *(undefined4 *)(param_1 + 0x58) = 0x32;
    uVar1 = FUN_004095c0(400);
    *(undefined8 *)(param_1 + 0x50) = uVar1;
  }
  *(undefined4 *)(param_1 + 0x48) = 0;
  return;
}

