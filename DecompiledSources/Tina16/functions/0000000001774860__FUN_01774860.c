/* Ghidra address: 01774860 */
/* Ghidra symbol: FUN_01774860 */


undefined4 FUN_01774860(longlong param_1)

{
  undefined1 auStack_78 [40];
  undefined1 *local_50;
  undefined8 local_38;
  undefined4 local_1c;
  undefined1 local_18 [4];
  undefined1 local_14 [8];
  undefined4 local_c;
  
  local_50 = auStack_78;
  local_38 = *(undefined8 *)(param_1 + 0xf8);
  FUN_004b6dc0(local_38,0);
  FUN_004b84c0(local_38,local_18,4);
  FUN_004b84c0(local_38,&local_1c,4);
  FUN_004b84c0(local_38,local_14,4);
  local_c = local_1c;
  FUN_004b6dc0(local_38,0);
  return local_c;
}

