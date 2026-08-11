/* Ghidra address: 01114190 */
/* Ghidra symbol: FUN_01114190 */


undefined4 FUN_01114190(longlong param_1)

{
  undefined4 uVar1;
  undefined1 local_30 [8];
  undefined4 local_28;
  undefined4 local_20;
  
  FUN_01112870(param_1);
  *(undefined4 *)(param_1 + 0x618) = 0x102;
  local_20 = 1;
  uVar1 = thunk_FUN_0418b35e(*(undefined2 *)(param_1 + 0x622),0x814,0x102,local_30);
  *(undefined4 *)(param_1 + 0x634) = uVar1;
  return local_28;
}

