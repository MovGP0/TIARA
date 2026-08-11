/* Ghidra address: 017768c0 */
/* Ghidra symbol: FUN_017768c0 */


undefined8 FUN_017768c0(longlong param_1,undefined4 param_2)

{
  longlong lVar1;
  undefined1 auStack_48 [40];
  undefined1 *local_20;
  
  local_20 = auStack_48;
  lVar1 = FUN_004aeac0(*(undefined8 *)(param_1 + 0x170),param_2);
  return *(undefined8 *)(lVar1 + 8);
}

