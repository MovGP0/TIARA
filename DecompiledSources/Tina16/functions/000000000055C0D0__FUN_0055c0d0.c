/* Ghidra address: 0055c0d0 */
/* Ghidra symbol: FUN_0055c0d0 */


void FUN_0055c0d0(longlong param_1)

{
  undefined8 uVar1;
  char cVar2;
  longlong lVar3;
  longlong *plVar4;
  int iVar5;
  int iVar6;
  longlong local_30 [2];
  
  local_30[0] = 0;
  lVar3 = FUN_0055c290(param_1);
  if (*(short *)(lVar3 + 1) == -1) {
    lVar3 = FUN_0055c290(param_1);
    if (*(short *)(lVar3 + 3) == -1) goto LAB_0055c1d0;
  }
  plVar4 = (longlong *)FUN_005586e0(param_1);
  (**(code **)(*plVar4 + 0x88))(plVar4,local_30);
  iVar5 = 0;
  iVar6 = 0;
  while( true ) {
    lVar3 = 0;
    if (local_30[0] != 0) {
      lVar3 = *(longlong *)(local_30[0] + -8);
    }
    if (lVar3 <= iVar5) break;
    uVar1 = *(undefined8 *)(local_30[0] + (longlong)iVar5 * 8);
    cVar2 = FUN_004113d0(uVar1,&PTR_FUN_005487c8);
    if (cVar2 != '\0') {
      if (iVar5 != iVar6) {
        *(undefined8 *)(local_30[0] + (longlong)iVar6 * 8) = uVar1;
      }
      iVar6 = iVar6 + 1;
    }
    iVar5 = iVar5 + 1;
  }
  lVar3 = FUN_0055c290(param_1);
  if (*(short *)(lVar3 + 1) != -1) {
    lVar3 = FUN_0055c290(param_1);
    *(undefined8 *)(param_1 + 0x30) =
         *(undefined8 *)(local_30[0] + (ulonglong)*(ushort *)(lVar3 + 1) * 8);
  }
  lVar3 = FUN_0055c290(param_1);
  if (*(short *)(lVar3 + 3) != -1) {
    lVar3 = FUN_0055c290(param_1);
    *(undefined8 *)(param_1 + 0x38) =
         *(undefined8 *)(local_30[0] + (ulonglong)*(ushort *)(lVar3 + 3) * 8);
  }
LAB_0055c1d0:
  FUN_00419430(local_30,&DAT_0052f648);
  return;
}

