/* Ghidra address: 01804950 */
/* Ghidra symbol: FUN_01804950 */


void FUN_01804950(longlong param_1,undefined8 param_2)

{
  undefined1 auStack_48 [40];
  undefined1 *local_20;
  longlong local_10;
  
  local_20 = auStack_48;
  local_10 = FUN_018054d0(&DAT_01802c58,1,param_2);
  *(undefined8 *)(local_10 + 0x20) = *(undefined8 *)(param_1 + 0x30);
  *(undefined1 *)(local_10 + 8) = *(undefined1 *)(param_1 + 8);
  FUN_01805690(local_10);
  FUN_01805d00(local_10,*(undefined8 *)(param_1 + 0x28));
  FUN_00410f20(local_10);
  return;
}

