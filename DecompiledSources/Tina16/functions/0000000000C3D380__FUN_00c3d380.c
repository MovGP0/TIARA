/* Ghidra address: 00c3d380 */
/* Ghidra symbol: FUN_00c3d380 */


ulonglong FUN_00c3d380(longlong param_1,longlong *param_2,undefined8 *param_3)

{
  bool bVar1;
  int *piVar2;
  longlong lVar3;
  undefined8 unaff_R13;
  int iVar4;
  
  for (iVar4 = 0; iVar4 < *(int *)(*(longlong *)(param_1 + 0x38) + 0x10); iVar4 = iVar4 + 1) {
    piVar2 = (int *)FUN_004aeac0(*(longlong *)(param_1 + 0x38),iVar4);
    if (*piVar2 == 0x6a) break;
  }
  bVar1 = iVar4 < *(int *)(*(longlong *)(param_1 + 0x38) + 0x10);
  if (bVar1) {
    lVar3 = FUN_004aeac0(*(longlong *)(param_1 + 0x38),iVar4);
    *param_2 = lVar3 + 0x20;
    lVar3 = FUN_004aeac0(*(undefined8 *)(param_1 + 0x38),iVar4);
    *param_3 = *(undefined8 *)(lVar3 + 0xc);
    param_3[1] = *(undefined8 *)(lVar3 + 0x14);
    *(undefined4 *)(param_3 + 2) = *(undefined4 *)(lVar3 + 0x1c);
    *(undefined1 *)((longlong)param_3 + 0x14) = *(undefined1 *)(lVar3 + 0x20);
  }
  return CONCAT71((int7)((ulonglong)unaff_R13 >> 8),bVar1) & 0xffffffff;
}

