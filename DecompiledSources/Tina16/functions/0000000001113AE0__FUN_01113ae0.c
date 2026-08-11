/* Ghidra address: 01113ae0 */
/* Ghidra symbol: FUN_01113ae0 */


undefined4 FUN_01113ae0(longlong param_1,undefined4 param_2)

{
  undefined1 local_20 [8];
  undefined4 local_18;
  undefined4 local_10;
  undefined4 local_c;
  
  *(undefined4 *)(param_1 + 0x618) = 0x112;
  local_10 = 2;
  local_c = param_2;
  thunk_FUN_0418b35e(*(undefined2 *)(param_1 + 0x622),0x814,0x112,local_20);
  return local_18;
}

