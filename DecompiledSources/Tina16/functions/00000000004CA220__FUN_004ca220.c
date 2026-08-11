/* Ghidra address: 004ca220 */
/* Ghidra symbol: FUN_004ca220 */


void FUN_004ca220(longlong param_1)

{
  bool bVar1;
  int iVar2;
  undefined8 local_30;
  undefined8 local_28;
  int local_1c;
  
  local_28 = 0;
  local_30 = 0;
  FUN_00419260(&local_28,&DAT_00406578,1,0x20);
  FUN_00419260(&local_30,&DAT_00406578,1,0x41);
  FUN_004c23c0(*(undefined8 *)(param_1 + 0x1d0));
  FUN_004c9d80(param_1,&DAT_004ca3b0);
  *(int *)(param_1 + 0x1ec) = *(int *)(param_1 + 0x1ec) + 1;
  FUN_004bea90(*(undefined8 *)(param_1 + 0x1d0),&local_1c,4);
  bVar1 = 0x1f < local_1c;
  for (; 0 < local_1c; local_1c = local_1c - iVar2) {
    if (bVar1) {
      FUN_004c9f50(param_1);
    }
    iVar2 = local_1c;
    if (0x1f < local_1c) {
      iVar2 = 0x20;
    }
    FUN_004bec10(*(undefined8 *)(param_1 + 0x1d0),local_28,(longlong)iVar2);
    FUN_004c8560(local_28,0,&local_30,0,iVar2);
    FUN_004c3c80(*(undefined8 *)(param_1 + 0x1e0),local_30,(longlong)(iVar2 * 2));
  }
  *(int *)(param_1 + 0x1ec) = *(int *)(param_1 + 0x1ec) + -1;
  FUN_004c9d80(param_1,&DAT_004ca3c0);
  FUN_00417840(&local_30,&DAT_00406578,2);
  return;
}

