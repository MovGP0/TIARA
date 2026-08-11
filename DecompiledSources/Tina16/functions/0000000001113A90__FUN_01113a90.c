/* Ghidra address: 01113a90 */
/* Ghidra symbol: FUN_01113a90 */


undefined4 FUN_01113a90(longlong param_1,undefined4 param_2)

{
  undefined1 local_30 [8];
  undefined4 local_28;
  undefined4 local_20;
  undefined4 local_1c;
  
  FUN_01112870(param_1);
  *(undefined4 *)(param_1 + 0x618) = 0x112;
  local_20 = 1;
  local_1c = param_2;
  thunk_FUN_0418b35e(*(undefined2 *)(param_1 + 0x622),0x814,0x112,local_30);
  return local_28;
}

