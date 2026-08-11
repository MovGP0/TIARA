/* Ghidra address: 0159bf30 */
/* Ghidra symbol: FUN_0159bf30 */


void FUN_0159bf30(longlong param_1)

{
  *(int *)(param_1 + 0x4d) = *(int *)(param_1 + 0x39) << 1;
  *(undefined2 *)(*(longlong *)(param_1 + 0x59) + (ulonglong)(*(int *)(param_1 + 0x65) - 1) * 2) = 0
  ;
  FUN_01596900(*(undefined8 *)(param_1 + 0x59),0,(ulonglong)(*(int *)(param_1 + 0x65) - 1) << 1);
  *(uint *)(param_1 + 0x99) =
       (uint)*(ushort *)(&DAT_01f68362 + (longlong)*(int *)(param_1 + 0x9d) * 0x10);
  *(uint *)(param_1 + 0xa5) =
       (uint)*(ushort *)(&DAT_01f68360 + (longlong)*(int *)(param_1 + 0x9d) * 0x10);
  *(uint *)(param_1 + 0xa9) =
       (uint)*(ushort *)(&DAT_01f68364 + (longlong)*(int *)(param_1 + 0x9d) * 0x10);
  *(uint *)(param_1 + 0x95) =
       (uint)*(ushort *)(&DAT_01f68366 + (longlong)*(int *)(param_1 + 0x9d) * 0x10);
  *(undefined4 *)(param_1 + 0x85) = 0;
  *(undefined4 *)(param_1 + 0x75) = 0;
  *(undefined4 *)(param_1 + 0x8d) = 0;
  *(undefined4 *)(param_1 + 0x16ea) = 0;
  *(undefined4 *)(param_1 + 0x91) = 2;
  *(undefined4 *)(param_1 + 0x79) = 2;
  *(undefined4 *)(param_1 + 0x81) = 0;
  *(undefined4 *)(param_1 + 0x61) = 0;
  return;
}

