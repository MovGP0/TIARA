/* Ghidra address: 01113c80 */
/* Ghidra symbol: FUN_01113c80 */


void FUN_01113c80(longlong param_1,uint param_2)

{
  undefined4 uVar1;
  undefined1 local_28 [8];
  uint local_20;
  
  *(undefined4 *)(param_1 + 0x618) = 0x401;
  local_20 = param_2 & 0xff;
  uVar1 = thunk_FUN_0418b35e(*(undefined2 *)(param_1 + 0x622),0x80d,0x401,local_28);
  *(undefined4 *)(param_1 + 0x634) = uVar1;
  return;
}

