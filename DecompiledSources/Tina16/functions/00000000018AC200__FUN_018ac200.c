/* Ghidra address: 018ac200 */
/* Ghidra symbol: FUN_018ac200 */


void FUN_018ac200(longlong *param_1)

{
  char cVar1;
  int iVar2;
  longlong lVar3;
  undefined8 local_28;
  undefined8 local_20 [2];
  
  local_28 = 0;
  local_20[0] = 0;
  lVar3 = (**(code **)(*param_1 + 0x278))(param_1);
  if (lVar3 != 0) {
    FUN_0064dd90(*(undefined8 *)(param_1[0xa1] + 0x6e0),local_20);
    iVar2 = FUN_00416db0(DAT_02110668,local_20[0]);
    if (iVar2 == 0) {
      cVar1 = (**(code **)(**(longlong **)(param_1[0xa1] + 0x708) + 0x260))
                        (*(longlong **)(param_1[0xa1] + 0x708));
      if (DAT_0211068c == cVar1) {
        cVar1 = (**(code **)(**(longlong **)(param_1[0xa1] + 0x710) + 0x260))
                          (*(longlong **)(param_1[0xa1] + 0x710));
        if ((DAT_0211068d == cVar1) && (DAT_0211068d != '\0')) goto LAB_018ac455;
      }
    }
    FUN_0064dd90(*(undefined8 *)(param_1[0xa1] + 0x6e0),&local_28);
    FUN_00414ad0(&DAT_02110668,local_28);
    DAT_0211068c = (**(code **)(**(longlong **)(param_1[0xa1] + 0x708) + 0x260))
                             (*(longlong **)(param_1[0xa1] + 0x708));
    DAT_0211068d = (**(code **)(**(longlong **)(param_1[0xa1] + 0x710) + 0x260))
                             (*(longlong **)(param_1[0xa1] + 0x710));
    DAT_0211068e = (**(code **)(**(longlong **)(param_1[0xa1] + 0x700) + 0x260))
                             (*(longlong **)(param_1[0xa1] + 0x700));
    iVar2 = FUN_006decb0(*(undefined8 *)(*(longlong *)(param_1[0xa1] + 0x718) + 0x550));
    if (0 < iVar2) {
      FUN_01894a70(param_1[0xa1]);
    }
    if (DAT_0211068d == '\0') {
      if ((DAT_0211068e == '\0') && (*(char *)((longlong)param_1 + 0x4b9) != '\0')) {
        *(int *)(param_1[0xaa] + 0x50c) = (int)param_1[0xa5] + -1;
      }
      else {
        *(undefined4 *)(param_1[0xaa] + 0x50c) = 0;
        DAT_02110688 = 0xffffffff;
      }
      (**(code **)(*param_1 + 600))(param_1);
    }
    if (DAT_0211068d != '\0') {
      DAT_02110688 = 0xffffffff;
      *(undefined1 *)((longlong)param_1 + 0x4b9) = 0;
    }
    FUN_018a6c20(param_1[0xaa]);
    if (DAT_0211068d == '\0') {
      if (DAT_02110670 != '\0') {
        FUN_018aba30(param_1);
      }
    }
    else {
      FUN_006e23c0(*(undefined8 *)(param_1[0xa1] + 0x718));
    }
  }
LAB_018ac455:
  FUN_00414560(&local_28,2);
  return;
}

