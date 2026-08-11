/* Ghidra address: 01804870 */
/* Ghidra symbol: FUN_01804870 */


void FUN_01804870(longlong param_1,undefined8 param_2,char param_3)

{
  undefined1 auStack_48 [40];
  undefined1 *local_20;
  longlong local_10;
  
  local_20 = auStack_48;
  FUN_018046a0(param_1);
  local_10 = FUN_01804b60(&DAT_01802850,1,param_2);
  FUN_018039a0(*(undefined8 *)(param_1 + 0x28));
  FUN_01803c90(*(undefined8 *)(param_1 + 0x28),0);
  FUN_01804d50(local_10);
  *(undefined1 *)(param_1 + 0x38) = *(undefined1 *)(local_10 + 0x30);
  FUN_01805470(local_10,*(undefined8 *)(param_1 + 0x28),param_3 == '\0');
  FUN_00410f20(local_10);
  if (param_3 == '\0') {
    *(undefined8 *)(param_1 + 0x30) = 0;
  }
  else {
    *(undefined8 *)(param_1 + 0x30) = param_2;
  }
  return;
}

