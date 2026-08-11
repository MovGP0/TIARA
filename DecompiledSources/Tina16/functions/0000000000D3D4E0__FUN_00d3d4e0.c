/* Ghidra address: 00d3d4e0 */
/* Ghidra symbol: FUN_00d3d4e0 */


void FUN_00d3d4e0(undefined8 *param_1,longlong param_2)

{
  int *piVar1;
  char cVar2;
  int iVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  undefined8 uVar6;
  int local_38;
  int local_34;
  int local_30;
  int local_2c;
  
  if ((*(char *)((longlong)param_1 + 0x2a) != '\0') &&
     (cVar2 = FUN_00788df0(param_1), cVar2 != '\0')) {
    (**(code **)*param_1)(param_1,&local_38);
    uVar4 = FUN_00787d50(param_1[3]);
    uVar5 = FUN_00787d50(param_1[3]);
    *(undefined1 *)((longlong)param_1 + 0x7c) = 0;
    *(undefined1 *)((longlong)param_1 + 0x7d) = 0;
    if ((uVar4 & 0x200000) == 0x200000) {
      uVar5 = uVar5 & 0xffffffffffdfffff;
      *(undefined1 *)((longlong)param_1 + 0x7c) = 1;
    }
    if ((uVar4 & 0x100000) == 0x100000) {
      uVar5 = uVar5 & 0xffffffffffefffff;
      *(undefined1 *)((longlong)param_1 + 0x7d) = 1;
    }
    if (uVar4 != uVar5) {
      FUN_00788040(param_1[3],uVar5);
      if (*(char *)(param_1 + 0xb) == '\0') {
        uVar6 = FUN_00788400(param_1,param_2);
        *(undefined8 *)(param_2 + 0x18) = uVar6;
      }
      FUN_00788040(param_1[3],uVar4);
    }
    if (*(char *)((longlong)param_1 + 0x7c) != '\0') {
      cVar2 = FUN_00d3cfa0(param_1);
      if (cVar2 == '\0') {
        iVar3 = FUN_00d3c3b0(param_1);
        piVar1 = (int *)(*(longlong *)(param_2 + 0x10) + 8);
        *piVar1 = *piVar1 - iVar3;
      }
      else {
        iVar3 = FUN_00d3c3b0(param_1);
        **(int **)(param_2 + 0x10) = **(int **)(param_2 + 0x10) + iVar3;
      }
    }
    if (*(char *)((longlong)param_1 + 0x7d) != '\0') {
      iVar3 = FUN_00d3c3b0(param_1);
      piVar1 = (int *)(*(longlong *)(param_2 + 0x10) + 0xc);
      *piVar1 = *piVar1 - iVar3;
    }
    cVar2 = FUN_00787ad0(param_1[3]);
    if (cVar2 != '\0') {
      **(int **)(param_2 + 0x10) = **(int **)(param_2 + 0x10) + local_38;
      piVar1 = (int *)(*(longlong *)(param_2 + 0x10) + 4);
      *piVar1 = *piVar1 + local_34;
      piVar1 = (int *)(*(longlong *)(param_2 + 0x10) + 0xc);
      *piVar1 = *piVar1 - local_2c;
      piVar1 = (int *)(*(longlong *)(param_2 + 0x10) + 8);
      *piVar1 = *piVar1 - local_30;
    }
    *(undefined1 *)(param_1 + 8) = 1;
    return;
  }
  *(undefined1 *)(param_1 + 8) = 0;
  return;
}

