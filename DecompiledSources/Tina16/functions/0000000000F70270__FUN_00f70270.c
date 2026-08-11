/* Ghidra address: 00f70270 */
/* Ghidra symbol: FUN_00f70270 */


void FUN_00f70270(longlong param_1,undefined8 param_2,undefined1 param_3,undefined4 param_4)

{
  undefined4 uVar1;
  
  uVar1 = FUN_00f6f870(param_2);
  *(undefined4 *)(param_1 + 0x140) = uVar1;
  *(undefined1 *)(param_1 + 0x144) = param_3;
  *(undefined4 *)(param_1 + 0x114) = param_4;
  return;
}

