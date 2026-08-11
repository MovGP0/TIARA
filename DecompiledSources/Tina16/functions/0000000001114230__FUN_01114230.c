/* Ghidra address: 01114230 */
/* Ghidra symbol: FUN_01114230 */


longlong FUN_01114230(longlong param_1)

{
  undefined4 uVar1;
  undefined1 local_30 [8];
  longlong local_28;
  undefined4 local_20;
  
  *(undefined4 *)(param_1 + 0x618) = 0x102;
  local_20 = 4;
  uVar1 = thunk_FUN_0418b35e(*(undefined2 *)(param_1 + 0x622),0x814,0x102,local_30);
  *(undefined4 *)(param_1 + 0x634) = uVar1;
  return local_28 + -0x20c;
}

