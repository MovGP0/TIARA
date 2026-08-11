/* Ghidra address: 0194f9a0 */
/* Ghidra symbol: FUN_0194f9a0 */


void FUN_0194f9a0(longlong *param_1,longlong param_2)

{
  undefined1 auStack_48 [40];
  undefined1 *local_20;
  
  local_20 = auStack_48;
  *(byte *)(param_2 + 0xd1) = *(byte *)(param_2 + 0xd1) | 4;
  (**(code **)(*param_1 + 0x10))(param_1,param_2);
  *(byte *)(param_2 + 0xd1) = *(byte *)(param_2 + 0xd1) & 0xfb;
  return;
}

