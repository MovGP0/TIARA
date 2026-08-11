/* Ghidra address: 018cccd0 */
/* Ghidra symbol: FUN_018cccd0 */


void FUN_018cccd0(longlong param_1)

{
  double dVar1;
  longlong *plVar2;
  char cVar3;
  int iVar4;
  longlong lVar5;
  int iVar6;
  double dVar7;
  undefined1 auStack_58 [40];
  undefined8 local_30 [3];
  
  local_30[0] = 0;
  FUN_0197fc10(*(undefined8 *)(*(longlong *)(param_1 + 0x38) + 0x48),
               *(undefined8 *)(*(longlong *)(param_1 + 0xa8) + 0x10));
  *(int *)(param_1 + 8) = *(int *)(param_1 + 8) + 1;
  plVar2 = *(longlong **)(*(longlong *)(param_1 + 0x128) + 400);
  (**(code **)(*plVar2 + 0x18))(plVar2,local_30,*(int *)(param_1 + 8) + -1);
  dVar7 = (double)FUN_0180d800(local_30[0]);
  dVar1 = *(double *)PTR_DAT_02002c30;
  *(undefined8 *)(param_1 + 0x90) = *(undefined8 *)(param_1 + 0xd0);
  iVar4 = FUN_018c5900();
  iVar6 = 0;
  if (-1 < iVar4 + -1) {
    do {
      lVar5 = FUN_018c5910(*(undefined8 *)(param_1 + 0xc0),iVar6);
      *(double *)(param_1 + 0x88) = *(double *)(lVar5 + 0x10) + dVar7 * dVar1;
      lVar5 = FUN_018c5910(*(undefined8 *)(param_1 + 0xc0),iVar6);
      cVar3 = FUN_004113d0(*(undefined8 *)(lVar5 + 8),&PTR_FUN_01930480);
      if ((((cVar3 == '\0') &&
           (lVar5 = FUN_018c5910(*(undefined8 *)(param_1 + 0xc0),iVar6),
           *(longlong *)(param_1 + 0xb0) != *(longlong *)(lVar5 + 8))) &&
          (lVar5 = FUN_018c5910(*(undefined8 *)(param_1 + 0xc0),iVar6),
          *(char *)(lVar5 + 0x18) == '\0')) && (*(char *)(param_1 + 0xf2) == '\0')) {
        lVar5 = FUN_018c5910(*(undefined8 *)(param_1 + 0xc0),iVar6);
        FUN_018ccc80(auStack_58,*(undefined8 *)(lVar5 + 8));
      }
      iVar6 = iVar6 + 1;
      iVar4 = iVar4 + -1;
    } while (iVar4 != 0);
  }
  *(double *)(param_1 + 0x88) = *(double *)(param_1 + 0x130) + dVar7 * dVar1;
  FUN_00414480(local_30);
  return;
}

