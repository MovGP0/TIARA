/* Ghidra address: 00fa5290 */
/* Ghidra symbol: FUN_00fa5290 */


void FUN_00fa5290(longlong param_1)

{
  int iVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  double dVar5;
  double dVar6;
  undefined8 local_98;
  undefined8 local_90;
  undefined8 local_88;
  longlong local_80 [2];
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  
  local_90 = 0;
  local_98 = 0;
  local_88 = 0;
  local_80[0] = 0;
  local_70 = 0;
  uStack_68 = 0;
  uStack_60 = 0;
  FUN_0064dd90(*(undefined8 *)(param_1 + 0x7b8),local_80);
  if (local_80[0] != 0) {
    iVar1 = *(int *)(param_1 + 0x850);
    iVar4 = 0x10000;
    if (*(int *)(param_1 + 0x870) == 8) {
      cVar2 = (**(code **)(**(longlong **)(param_1 + 0x7c0) + 0x260))
                        (*(longlong **)(param_1 + 0x7c0));
      if (cVar2 == '\0') {
        iVar4 = 0x100;
      }
    }
    dVar6 = *(double *)(param_1 + 0x868) / 4.0;
    dVar5 = (double)FUN_00b90090(*(undefined8 *)(param_1 + 0x7b8));
    FUN_00468860(&local_70,(dVar6 * dVar5) / (double)iVar1);
    iVar3 = FUN_00462650(&local_70);
    if ((1.0 / dVar6) * (double)iVar4 * (double)iVar1 < dVar5) {
      FUN_0064de00(*(undefined8 *)(param_1 + 0x798),L"Time: out of range");
      FUN_0064de00(*(undefined8 *)(param_1 + 0x778),&LAB_00fa5560);
    }
    else {
      FUN_00f61040(&local_88,iVar4 - iVar3);
      FUN_0064de00(*(undefined8 *)(param_1 + 0x778),local_88);
      *(int *)(param_1 + 0x894) = iVar4 - iVar3;
      FUN_00b8fd60(&local_98,(1.0 / dVar6) * (double)iVar3 * (double)iVar1,*PTR_DAT_02005310,0,1);
      FUN_00416ba0(&local_90,L"Time: ",local_98);
      FUN_0064de00(*(undefined8 *)(param_1 + 0x798),local_90);
    }
  }
  FUN_00414560(&local_98,3);
  FUN_00414480(local_80);
  FUN_00460ba0(&local_70);
  return;
}

