/* Ghidra address: 00fb18d0 */
/* Ghidra symbol: FUN_00fb18d0 */


void FUN_00fb18d0(longlong param_1)

{
  double dVar1;
  longlong *plVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  double dVar6;
  double dVar7;
  undefined8 local_c8;
  undefined8 local_c0;
  undefined8 local_b8;
  undefined8 local_b0;
  undefined8 local_a8;
  undefined8 local_a0;
  undefined8 local_98;
  undefined8 local_90;
  undefined8 local_88;
  longlong local_80 [2];
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  
  local_c0 = 0;
  local_c8 = 0;
  local_b8 = 0;
  local_b0 = 0;
  local_a8 = 0;
  local_98 = 0;
  local_a0 = 0;
  local_90 = 0;
  local_88 = 0;
  local_80[0] = 0;
  local_70 = 0;
  uStack_68 = 0;
  uStack_60 = 0;
  FUN_0064dd90(*(undefined8 *)(param_1 + 0x700),local_80);
  if (local_80[0] == 0) goto LAB_00fb1d5d;
  (**(code **)(**(longlong **)(param_1 + 0x6e0) + 0x268))(*(longlong **)(param_1 + 0x6e0),1);
  FUN_0043e130(&local_88,*(undefined8 *)(param_1 + 0xc20));
  iVar3 = FUN_004170c0(L"ATMEGA",local_88,1);
  if (iVar3 == 0) {
    FUN_0043e130(&local_90,*(undefined8 *)(param_1 + 0xc20));
    iVar3 = FUN_004170c0(&DAT_00fb1e24,local_90,1);
    if (iVar3 != 0) goto LAB_00fb1a0b;
    iVar3 = (**(code **)(**(longlong **)(param_1 + 0x6e0) + 0x260))(*(longlong **)(param_1 + 0x6e0))
    ;
    iVar3 = *(int *)(param_1 + 0x734 + (longlong)iVar3 * 4);
  }
  else {
LAB_00fb1a0b:
    iVar3 = (**(code **)(**(longlong **)(param_1 + 0x6e0) + 0x260))(*(longlong **)(param_1 + 0x6e0))
    ;
    iVar3 = *(int *)(param_1 + 0x754 + (longlong)iVar3 * 4);
  }
  dVar1 = *(double *)(param_1 + 0xc10);
  dVar7 = (1.0 / dVar1) * 256.0 * 1024.0;
  FUN_00b8fd60(&local_a0,dVar7,*PTR_DAT_02005310,0,1);
  FUN_00416ba0(&local_98,L"Time max: ",local_a0);
  FUN_0064de00(*(undefined8 *)(param_1 + 0x6e8),local_98);
  dVar6 = (double)FUN_00b90090(*(undefined8 *)(param_1 + 0x700));
  if (dVar7 < dVar6) {
    FUN_0064de00(*(undefined8 *)(param_1 + 0x708),L"Time: out of range");
    FUN_0064de00(*(undefined8 *)(param_1 + 0x6c0),&LAB_00fb1ec0);
  }
  else {
    FUN_00468860(&local_70,(dVar1 * dVar6) / (double)iVar3);
    iVar4 = FUN_00462650(&local_70);
    if (262144.0 / (double)iVar3 <= (double)iVar4) {
      FUN_00b90440(*(undefined8 *)(param_1 + 0x700),dVar7);
      (**(code **)(**(longlong **)(param_1 + 0x6e0) + 0x268))(*(longlong **)(param_1 + 0x6e0),5);
      FUN_0064de00(*(undefined8 *)(param_1 + 0x6c0),&DAT_00fb1e5c);
    }
    while (0xff < iVar4) {
      iVar5 = (**(code **)(**(longlong **)(param_1 + 0x6e0) + 0x260))
                        (*(longlong **)(param_1 + 0x6e0));
      if (*(int *)(param_1 + 0x774) <= iVar5) break;
      plVar2 = *(longlong **)(param_1 + 0x6e0);
      iVar3 = (**(code **)(*plVar2 + 0x260))(plVar2);
      (**(code **)(*plVar2 + 0x268))(plVar2,iVar3 + 1);
      FUN_0043e130(&local_a8,*(undefined8 *)(param_1 + 0xc20));
      iVar3 = FUN_004170c0(L"ATMEGA",local_a8,1);
      if (iVar3 == 0) {
        FUN_0043e130(&local_b0,*(undefined8 *)(param_1 + 0xc20));
        iVar3 = FUN_004170c0(&DAT_00fb1e24,local_b0,1);
        if (iVar3 != 0) goto LAB_00fb1c06;
        iVar3 = (**(code **)(**(longlong **)(param_1 + 0x6e0) + 0x260))
                          (*(longlong **)(param_1 + 0x6e0));
        iVar3 = *(int *)(param_1 + 0x734 + (longlong)iVar3 * 4);
      }
      else {
LAB_00fb1c06:
        iVar3 = (**(code **)(**(longlong **)(param_1 + 0x6e0) + 0x260))
                          (*(longlong **)(param_1 + 0x6e0));
        iVar3 = *(int *)(param_1 + 0x754 + (longlong)iVar3 * 4);
      }
      FUN_00468860(&local_70,(dVar1 * dVar6) / (double)iVar3);
      iVar4 = FUN_00462650(&local_70);
    }
    FUN_00f61040(&local_b8,0x100 - iVar4);
    FUN_0064de00(*(undefined8 *)(param_1 + 0x6c0),local_b8);
    FUN_00b8fd60(&local_c8,(1.0 / dVar1) * (double)iVar4 * (double)iVar3,*PTR_DAT_02005310,0,1);
    FUN_00416ba0(&local_c0,L"Time: ",local_c8);
    FUN_0064de00(*(undefined8 *)(param_1 + 0x708),local_c0);
  }
LAB_00fb1d5d:
  FUN_00414560(&local_c8,9);
  FUN_00414480(local_80);
  FUN_00460ba0(&local_70);
  return;
}

