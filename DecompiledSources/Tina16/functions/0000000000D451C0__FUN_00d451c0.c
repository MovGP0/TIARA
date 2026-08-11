/* Ghidra address: 00d451c0 */
/* Ghidra symbol: FUN_00d451c0 */


void FUN_00d451c0(undefined8 *param_1,longlong param_2)

{
  int *piVar1;
  longlong lVar2;
  char cVar3;
  int iVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  undefined8 uVar7;
  bool bVar8;
  wchar_t *local_40;
  int local_38;
  int local_34;
  int local_30;
  int local_2c;
  
  local_40 = (wchar_t *)0x0;
  if ((*(char *)((longlong)param_1 + 0x2a) == '\0') ||
     (cVar3 = FUN_00788df0(param_1), cVar3 == '\0')) {
    *(undefined1 *)(param_1 + 8) = 0;
    goto LAB_00d454cf;
  }
  (**(code **)*param_1)(param_1,&local_38);
  uVar5 = FUN_00787d50(param_1[3]);
  uVar6 = FUN_00787d50(param_1[3]);
  *(undefined1 *)((longlong)param_1 + 0x7c) = 0;
  *(undefined1 *)((longlong)param_1 + 0x7d) = 0;
  if ((uVar5 & 0x200000) == 0x200000) {
    uVar6 = uVar6 & 0xffffffffffdfffff;
    *(undefined1 *)((longlong)param_1 + 0x7c) = 1;
  }
  if ((uVar5 & 0x100000) == 0x100000) {
    uVar6 = uVar6 & 0xffffffffffefffff;
    *(undefined1 *)((longlong)param_1 + 0x7d) = 1;
  }
  if (uVar5 != uVar6) {
    FUN_00788040(param_1[3],uVar6);
    if (*(char *)(param_1 + 0xb) == '\0') {
      uVar7 = FUN_00788400(param_1,param_2);
      *(undefined8 *)(param_2 + 0x18) = uVar7;
    }
    FUN_00788040(param_1[3],uVar5);
  }
  FUN_00787c20(param_1[3],&local_40);
  if (local_40 == L"ComboLBox") {
    bVar8 = true;
  }
  else if (local_40 == (wchar_t *)0x0) {
    bVar8 = false;
  }
  else {
    iVar4 = FUN_0043e420(local_40,L"ComboLBox");
    bVar8 = iVar4 == 0;
  }
  if (bVar8) {
    uVar7 = FUN_00787cc0(param_1[3]);
    uVar5 = FUN_00787d50(uVar7);
    if ((uVar5 & 1) == 1) goto LAB_00d45411;
    if (*(char *)((longlong)param_1 + 0x7c) != '\0') {
      cVar3 = FUN_00d3cfa0(param_1);
      if (cVar3 == '\0') {
        iVar4 = FUN_00d3c3b0(param_1);
        local_30 = local_30 + iVar4;
      }
      else {
        iVar4 = FUN_00d3c3b0(param_1);
        local_38 = local_38 + iVar4;
      }
    }
    if (*(char *)((longlong)param_1 + 0x7d) != '\0') {
      iVar4 = FUN_00d3c3b0(param_1);
      local_2c = local_2c + iVar4;
    }
    if (*(int *)(param_2 + 8) != 0) {
      piVar1 = *(int **)(param_2 + 0x10);
      lVar2 = *(longlong *)(piVar1 + 0xc);
      *piVar1 = *(int *)(lVar2 + 0x10);
      piVar1[1] = *(int *)(lVar2 + 0x14);
      piVar1[2] = *(int *)(lVar2 + 0x10) + *(int *)(lVar2 + 0x18);
      piVar1[3] = *(int *)(lVar2 + 0x14) + *(int *)(lVar2 + 0x1c);
      *piVar1 = *piVar1 + local_38;
      piVar1[1] = piVar1[1] + local_34;
      piVar1[2] = piVar1[2] - local_30;
      piVar1[3] = piVar1[3] - local_2c;
      *(undefined8 *)(piVar1 + 4) = *(undefined8 *)piVar1;
      *(undefined8 *)(piVar1 + 6) = *(undefined8 *)(piVar1 + 2);
      *(int **)(param_2 + 0x10) = piVar1;
      *(undefined8 *)(param_2 + 0x18) = 0x400;
    }
  }
  else {
LAB_00d45411:
    if (*(char *)((longlong)param_1 + 0x7c) != '\0') {
      cVar3 = FUN_00d3cfa0(param_1);
      if (cVar3 == '\0') {
        iVar4 = FUN_00d3c3b0(param_1);
        piVar1 = (int *)(*(longlong *)(param_2 + 0x10) + 8);
        *piVar1 = *piVar1 - iVar4;
      }
      else {
        iVar4 = FUN_00d3c3b0(param_1);
        **(int **)(param_2 + 0x10) = **(int **)(param_2 + 0x10) + iVar4;
      }
    }
    if (*(char *)((longlong)param_1 + 0x7d) != '\0') {
      iVar4 = FUN_00d3c3b0(param_1);
      piVar1 = (int *)(*(longlong *)(param_2 + 0x10) + 0xc);
      *piVar1 = *piVar1 - iVar4;
    }
    cVar3 = FUN_00787ad0(param_1[3]);
    if (cVar3 != '\0') {
      **(int **)(param_2 + 0x10) = **(int **)(param_2 + 0x10) + local_38;
      piVar1 = (int *)(*(longlong *)(param_2 + 0x10) + 4);
      *piVar1 = *piVar1 + local_34;
      piVar1 = (int *)(*(longlong *)(param_2 + 0x10) + 0xc);
      *piVar1 = *piVar1 - local_2c;
      piVar1 = (int *)(*(longlong *)(param_2 + 0x10) + 8);
      *piVar1 = *piVar1 - local_30;
    }
  }
  *(undefined1 *)(param_1 + 8) = 1;
LAB_00d454cf:
  FUN_00414480(&local_40);
  return;
}

