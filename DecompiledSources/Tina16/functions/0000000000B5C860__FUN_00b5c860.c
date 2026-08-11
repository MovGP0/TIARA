/* Ghidra address: 00b5c860 */
/* Ghidra symbol: FUN_00b5c860 */


void FUN_00b5c860(longlong param_1)

{
  undefined8 uVar1;
  
  if (*(longlong *)(param_1 + 0x88) == 0) {
    uVar1 = FUN_00b30f20(&DAT_00b30710,1,*(undefined8 *)(param_1 + 0x98));
    *(undefined8 *)(param_1 + 0x88) = uVar1;
  }
  return;
}

