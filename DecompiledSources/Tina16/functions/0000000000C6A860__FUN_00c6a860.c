/* Ghidra address: 00c6a860 */
/* Ghidra symbol: FUN_00c6a860 */


void FUN_00c6a860(longlong param_1,longlong param_2,longlong param_3)

{
  longlong lVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  undefined8 uVar6;
  longlong *plVar7;
  undefined1 auStack_68 [40];
  undefined1 *local_40;
  int local_34;
  undefined8 local_30;
  longlong local_28;
  longlong *local_20;
  
  local_40 = auStack_68;
  if (param_2 != param_3) {
    cVar2 = FUN_004113d0(param_3,&PTR_FUN_00c6a0e8);
    if (cVar2 != '\0') {
      local_20 = (longlong *)FUN_00c6f960(&PTR_FUN_00c6d180,1,0);
      local_30 = 0;
      lVar1 = *(longlong *)
               (*(longlong *)(*(longlong *)(*(longlong *)(param_1 + 0x78) + 0x78) + 0x78) + 0x78);
      local_28 = param_3;
      cVar2 = FUN_004113d0(lVar1,&PTR_FUN_00c68b38);
      if (cVar2 != '\0') {
        local_30 = *(undefined8 *)(lVar1 + 0x6e8);
      }
      iVar3 = FUN_006fa830(local_28);
      iVar4 = FUN_006fa830(param_1);
      if (iVar3 < iVar4) {
        uVar5 = FUN_006fa830(param_1);
        uVar6 = FUN_00c6fe60(local_30,uVar5);
        (**(code **)(*local_20 + 0x10))(local_20,uVar6);
        iVar3 = FUN_006fa830(param_1);
        iVar4 = FUN_006fa830(local_28);
        local_34 = iVar3;
        if (iVar4 + 1 <= iVar3) {
          iVar3 = ((iVar4 + 1) - iVar3) + -1;
          do {
            plVar7 = (longlong *)FUN_00c6fe60(local_30,local_34);
            uVar6 = FUN_00c6fe60(local_30,local_34 + -1);
            (**(code **)(*plVar7 + 0x10))(plVar7,uVar6);
            local_34 = local_34 + -1;
            iVar3 = iVar3 + 1;
          } while (iVar3 != 0);
        }
        uVar5 = FUN_006fa830(local_28);
        plVar7 = (longlong *)FUN_00c6fe60(local_30,uVar5);
        (**(code **)(*plVar7 + 0x10))(plVar7,local_20);
      }
      else {
        uVar5 = FUN_006fa830(param_1);
        uVar6 = FUN_00c6fe60(local_30,uVar5);
        (**(code **)(*local_20 + 0x10))(local_20,uVar6);
        iVar3 = FUN_006fa830(param_1);
        iVar4 = FUN_006fa830(local_28);
        local_34 = iVar3;
        if (iVar3 <= iVar4 + -1) {
          iVar3 = ((iVar4 + -1) - iVar3) + 1;
          do {
            plVar7 = (longlong *)FUN_00c6fe60(local_30,local_34);
            uVar6 = FUN_00c6fe60(local_30,local_34 + 1);
            (**(code **)(*plVar7 + 0x10))(plVar7,uVar6);
            local_34 = local_34 + 1;
            iVar3 = iVar3 + -1;
          } while (iVar3 != 0);
        }
        uVar5 = FUN_006fa830(local_28);
        plVar7 = (longlong *)FUN_00c6fe60(local_30,uVar5);
        (**(code **)(*plVar7 + 0x10))(plVar7,local_20);
      }
      FUN_00c6ffe0(*(undefined8 *)
                    (*(longlong *)
                      (*(longlong *)(*(longlong *)(*(longlong *)(param_1 + 0x78) + 0x78) + 0x78) +
                      0x78) + 0x6e8),*(undefined8 *)(param_1 + 0x340));
      FUN_00410f20(local_20);
    }
  }
  return;
}

