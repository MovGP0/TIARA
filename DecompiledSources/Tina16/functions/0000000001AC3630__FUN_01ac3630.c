/* Ghidra address: 01ac3630 */
/* Ghidra symbol: FUN_01ac3630 */


undefined8 FUN_01ac3630(longlong param_1)

{
  undefined8 uVar1;
  
  uVar1 = 0;
  if (*(longlong *)(param_1 + 0x58) != 0) {
    uVar1 = FUN_01ab52a0();
  }
  return uVar1;
}

