/* Ghidra address: 01a86430 */
/* Ghidra symbol: FUN_01a86430 */


void FUN_01a86430(longlong param_1)

{
  char cVar1;
  int iVar2;
  longlong *plVar3;
  undefined8 uVar4;
  longlong lVar5;
  longlong lVar6;
  undefined8 uVar7;
  undefined8 in_stack_ffffffffffffff38;
  undefined4 uVar8;
  undefined8 local_98;
  undefined8 local_90;
  undefined8 local_88;
  undefined8 local_80;
  undefined8 local_78;
  undefined8 local_70;
  undefined8 local_68;
  undefined8 local_60 [2];
  undefined8 local_50;
  undefined8 local_48;
  undefined8 local_40;
  undefined8 local_38;
  undefined8 local_30 [2];
  
  uVar8 = (undefined4)((ulonglong)in_stack_ffffffffffffff38 >> 0x20);
  local_90 = 0;
  local_98 = 0;
  local_78 = 0;
  local_88 = 0;
  local_80 = 0;
  local_60[0] = 0;
  local_70 = 0;
  local_68 = 0;
  if (PTR_DAT_02004010[0x913] == '\x01') {
    iVar2 = -0xb4;
  }
  else {
    iVar2 = 0;
  }
  cVar1 = FUN_01ae6af0(*(undefined8 *)(param_1 + 0x798),(double)iVar2,local_30,&local_38);
  if (cVar1 == '\0') {
    uVar4 = FUN_00b89270();
    FUN_0041ddd0(&local_98,&PTR_PTR_01a860b0);
    FUN_00b8e650(uVar4,&local_90,L"DrawWind.GainMarginError",local_98);
    FUN_0072d440(local_90,1,4,0);
  }
  else {
    plVar3 = (longlong *)FUN_004b6930(&PTR_FUN_00478280,1);
    uVar4 = FUN_00b89270();
    FUN_0041ddd0(&local_68,&PTR_PTR_01a86070);
    FUN_00b8e650(uVar4,local_60,L"DrawWind.GainMargin",local_68);
    uVar4 = CONCAT44(uVar8,2);
    FUN_00f05f60(&local_70,local_38,0x3ff0000000000000,1,uVar4,0xffffffe2,0xffffffe2);
    uVar8 = (undefined4)((ulonglong)uVar4 >> 0x20);
    FUN_00416ad0(local_60,local_70);
    (**(code **)(*plVar3 + 0x78))(plVar3,local_60[0]);
    uVar4 = FUN_00b89270();
    FUN_0041ddd0(&local_80,&PTR_PTR_01a86090);
    FUN_00b8e650(uVar4,&local_78,L"DrawWind.MFreqTxt",local_80);
    FUN_00f05f60(&local_88,local_30[0],0x3ff0000000000000,1,CONCAT44(uVar8,2),0xffffffe2,0xffffffe2)
    ;
    FUN_00416ad0(&local_78,local_88);
    (**(code **)(*plVar3 + 0x78))(plVar3,local_78);
    local_50 = 0;
    FUN_01acff30(*(undefined8 *)(param_1 + 0x798),&local_50);
    lVar5 = FUN_004aeac0(local_50,0);
    lVar6 = FUN_004aeac0(local_50,0);
    (**(code **)(**(longlong **)(lVar5 + 200) + 0x10))
              (*(longlong **)(lVar5 + 200),*(undefined8 *)(lVar6 + 0xe0),0);
    DAT_02110848 = 0;
    DAT_02110850 = 0;
    lVar5 = FUN_004aeac0(local_50,0);
    cVar1 = FUN_004113d0(*(undefined8 *)(lVar5 + 200),&PTR_FUN_01cb9c30);
    if (cVar1 == '\0') {
      uVar4 = FUN_004aeac0(local_50,0);
      lVar5 = FUN_004aeac0(local_50,0);
      uVar7 = (**(code **)(**(longlong **)(lVar5 + 200) + 0x48))
                        (*(longlong **)(lVar5 + 200),local_30[0]);
      FUN_01a8a3c0(param_1,plVar3,uVar4,local_30[0],uVar7);
    }
    else {
      lVar5 = FUN_004aeac0(local_50,0);
      (**(code **)(**(longlong **)(lVar5 + 200) + 0x90))
                (*(longlong **)(lVar5 + 200),local_30[0],&local_40,&local_48);
      uVar4 = FUN_004aeac0(local_50,0);
      FUN_01a8a3c0(param_1,plVar3,uVar4,local_40,local_48);
    }
    FUN_00410f20(local_50);
    FUN_00410f20(plVar3);
  }
  FUN_00414560(&local_98,8);
  return;
}

