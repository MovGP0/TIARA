/* Ghidra address: 01867750 */
/* Ghidra symbol: FUN_01867750 */


void FUN_01867750(longlong param_1,undefined8 param_2)

{
  undefined1 auStack_38 [40];
  undefined1 *local_10;
  
  local_10 = auStack_38;
  FUN_00618d20(*(undefined8 *)(param_1 + 0x18));
  FUN_004aee30(param_1,param_2);
  FUN_00618d40(*(undefined8 *)(param_1 + 0x18));
  if (*(int *)(param_1 + 0x10) == 0) {
    FUN_00452320(&DAT_01faf058);
  }
  return;
}

