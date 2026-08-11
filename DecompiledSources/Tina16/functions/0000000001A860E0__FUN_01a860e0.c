/* Ghidra address: 01a860e0 */
/* Ghidra symbol: FUN_01a860e0 */


void FUN_01a860e0(longlong param_1)

{
  char cVar1;
  longlong *plVar2;
  undefined8 uVar3;
  longlong lVar4;
  longlong lVar5;
  undefined8 uVar6;
  undefined8 in_stack_ffffffffffffff68;
  undefined4 uVar7;
  undefined8 local_70;
  undefined8 local_68;
  undefined8 local_60;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 local_48;
  undefined8 local_40;
  undefined8 local_38;
  undefined8 local_30 [2];
  
  uVar7 = (undefined4)((ulonglong)in_stack_ffffffffffffff68 >> 0x20);
  local_68 = 0;
  local_70 = 0;
  local_50 = 0;
  local_60 = 0;
  local_58 = 0;
  cVar1 = FUN_01ae69f0(*(undefined8 *)(param_1 + 0x798),local_30);
  if (cVar1 == '\0') {
    uVar3 = FUN_00b89270();
    FUN_0041ddd0(&local_70,&PTR_PTR_01a860a0);
    FUN_00b8e650(uVar3,&local_68,L"DrawWind.CrossOverFrequencyError",local_70);
    FUN_0072d440(local_68,1,4,0);
  }
  else {
    plVar2 = (longlong *)FUN_004b6930(&PTR_FUN_00478280,1);
    uVar3 = FUN_00b89270();
    FUN_0041ddd0(&local_58,&PTR_PTR_01a86060);
    FUN_00b8e650(uVar3,&local_50,L"DrawWind.CrossOverFrequency",local_58);
    FUN_00f05f60(&local_60,local_30[0],0x3ff0000000000000,1,CONCAT44(uVar7,2),0xffffffe2,0xffffffe2)
    ;
    FUN_00416ad0(&local_50,local_60);
    (**(code **)(*plVar2 + 0x78))(plVar2,local_50);
    local_48 = 0;
    FUN_01acff30(*(undefined8 *)(param_1 + 0x798),&local_48);
    lVar4 = FUN_004aeac0(local_48,0);
    lVar5 = FUN_004aeac0(local_48,0);
    (**(code **)(**(longlong **)(lVar4 + 200) + 0x10))
              (*(longlong **)(lVar4 + 200),*(undefined8 *)(lVar5 + 0xe0),0);
    DAT_02110848 = 0;
    DAT_02110850 = 0;
    lVar4 = FUN_004aeac0(local_48,0);
    cVar1 = FUN_004113d0(*(undefined8 *)(lVar4 + 200),&PTR_FUN_01cb9c30);
    if (cVar1 == '\0') {
      uVar3 = FUN_004aeac0(local_48,0);
      lVar4 = FUN_004aeac0(local_48,0);
      uVar6 = (**(code **)(**(longlong **)(lVar4 + 200) + 0x48))
                        (*(longlong **)(lVar4 + 200),local_30[0]);
      FUN_01a8a3c0(param_1,plVar2,uVar3,local_30[0],uVar6);
    }
    else {
      lVar4 = FUN_004aeac0(local_48,0);
      (**(code **)(**(longlong **)(lVar4 + 200) + 0x90))
                (*(longlong **)(lVar4 + 200),local_30[0],&local_38,&local_40);
      uVar3 = FUN_004aeac0(local_48,0);
      FUN_01a8a3c0(param_1,plVar2,uVar3,local_38,local_40);
    }
    FUN_00410f20(local_48);
    FUN_00410f20(plVar2);
  }
  FUN_00414560(&local_70,5);
  return;
}

