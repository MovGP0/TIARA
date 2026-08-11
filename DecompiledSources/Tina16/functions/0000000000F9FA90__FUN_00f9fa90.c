/* Ghidra address: 00f9fa90 */
/* Ghidra symbol: FUN_00f9fa90 */


void FUN_00f9fa90(longlong param_1)

{
  longlong *plVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  double dVar7;
  double dVar8;
  int local_94;
  undefined8 local_90;
  undefined8 local_88;
  undefined8 local_80;
  undefined8 local_78;
  undefined8 local_70 [2];
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  
  local_88 = 0;
  local_90 = 0;
  local_80 = 0;
  local_70[0] = 0;
  local_78 = 0;
  local_60 = 0;
  uStack_58 = 0;
  uStack_50 = 0;
  if (*(int *)(param_1 + 0x788) != 1) {
    dVar8 = *(double *)(param_1 + 0x740) / 4.0;
    cVar2 = (**(code **)(**(longlong **)(param_1 + 0x730) + 0x260))(*(longlong **)(param_1 + 0x730))
    ;
    if (cVar2 == '\x01') {
      *(undefined4 *)(param_1 + 0x784) = 0x10000;
    }
    else {
      *(undefined4 *)(param_1 + 0x784) = 0x100;
    }
    FUN_00b8fd60(&local_78,(1.0 / dVar8) * (double)*(int *)(param_1 + 0x784) * 256.0,
                 *PTR_DAT_02005310,0,1);
    FUN_00416ba0(local_70,L"Time max: ",local_78);
    FUN_0064de00(*(undefined8 *)(param_1 + 0x6d8),local_70[0]);
    dVar7 = (double)FUN_00b90090(*(undefined8 *)(param_1 + 0x700));
    iVar6 = *(int *)(param_1 + 0x784) + 1;
    iVar3 = (**(code **)(**(longlong **)(param_1 + 0x718) + 0x260))(*(longlong **)(param_1 + 0x718))
    ;
    iVar5 = iVar3;
    while ((iVar5 < 8 && (*(int *)(param_1 + 0x784) - iVar6 < 0))) {
      iVar6 = (**(code **)(**(longlong **)(param_1 + 0x718) + 0x260))
                        (*(longlong **)(param_1 + 0x718));
      local_94 = *(int *)(param_1 + 0x760 + (longlong)iVar6 * 4);
      FUN_00468860(&local_60,(dVar8 * dVar7) / (double)local_94);
      iVar6 = FUN_00462650(&local_60);
      if (*(int *)(param_1 + 0x784) - iVar6 < 0) {
        iVar5 = iVar5 + 1;
        plVar1 = *(longlong **)(param_1 + 0x718);
        iVar4 = (**(code **)(*plVar1 + 0x260))(plVar1);
        (**(code **)(*plVar1 + 0x268))(plVar1,iVar4 + 1);
      }
    }
    iVar5 = *(int *)(param_1 + 0x784) - iVar6;
    if (iVar5 < 0) {
      FUN_0064de00(*(undefined8 *)(param_1 + 0x6f0),L"Time: Out of range");
      FUN_0064de00(*(undefined8 *)(param_1 + 0x728),&DAT_00f9fe60);
      (**(code **)(**(longlong **)(param_1 + 0x718) + 0x268))(*(longlong **)(param_1 + 0x718),iVar3)
      ;
    }
    else {
      FUN_00f61040(&local_80,iVar5);
      FUN_0064de00(*(undefined8 *)(param_1 + 0x728),local_80);
      FUN_00b8fd60(&local_90,(1.0 / dVar8) * (double)iVar6 * (double)local_94,*PTR_DAT_02005310,0,1)
      ;
      FUN_00416ba0(&local_88,L"Time: ",local_90);
      FUN_0064de00(*(undefined8 *)(param_1 + 0x6f0),local_88);
    }
  }
  FUN_00414560(&local_90,5);
  FUN_00460ba0(&local_60);
  return;
}

