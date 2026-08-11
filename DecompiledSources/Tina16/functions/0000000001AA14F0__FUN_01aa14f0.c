/* Ghidra address: 01aa14f0 */
/* Ghidra symbol: FUN_01aa14f0 */


void FUN_01aa14f0(longlong param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  longlong lVar2;
  int local_24;
  int local_1c;
  
  uVar1 = param_2[1];
  lVar2 = *(longlong *)(param_1 + 0x70);
  local_24 = (int)((ulonglong)*param_2 >> 0x20);
  **(uint **)(param_1 + 0x88) = (uint)*(ushort *)(lVar2 + 0x41f6 + (longlong)local_24 * 2);
  local_1c = (int)((ulonglong)uVar1 >> 0x20);
  **(uint **)(param_1 + 0x90) = (uint)*(ushort *)(lVar2 + 0x4236 + (longlong)local_1c * 2);
  *(undefined2 *)(lVar2 + 0x41f6 + (longlong)local_24 * 2) = **(undefined2 **)(param_1 + 0x90);
  *(undefined2 *)(lVar2 + 0x4236 + (longlong)local_1c * 2) = **(undefined2 **)(param_1 + 0x88);
  return;
}

