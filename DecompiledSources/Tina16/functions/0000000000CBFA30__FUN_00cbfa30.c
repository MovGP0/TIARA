/* Ghidra address: 00cbfa30 */
/* Ghidra symbol: FUN_00cbfa30 */


undefined4 FUN_00cbfa30(longlong param_1)

{
  undefined1 auStack_48 [40];
  undefined1 *local_20;
  longlong local_18;
  undefined4 local_c;
  
  local_20 = auStack_48;
  local_18 = FUN_004afa30(param_1);
  local_c = *(undefined4 *)(local_18 + 0x10);
  FUN_00412130(*(undefined8 *)(param_1 + 0x10));
  return local_c;
}

