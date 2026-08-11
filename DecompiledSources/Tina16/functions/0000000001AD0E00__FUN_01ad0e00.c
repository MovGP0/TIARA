/* Ghidra address: 01ad0e00 */
/* Ghidra symbol: FUN_01ad0e00 */


undefined8 FUN_01ad0e00(longlong param_1,undefined8 param_2)

{
  char cVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  longlong lVar5;
  undefined8 uVar6;
  longlong *plVar7;
  int iVar8;
  undefined8 local_res10 [3];
  undefined8 local_58;
  int local_4c;
  undefined8 local_48;
  undefined8 local_40 [2];
  
  local_48 = 0;
  local_40[0] = 0;
  local_res10[0] = param_2;
  FUN_00414610(param_2);
  local_58 = 0;
  iVar2 = (**(code **)(**(longlong **)(param_1 + 0xd8) + 0x28))();
  local_4c = 0;
  if (-1 < iVar2 + -1) {
    do {
      lVar5 = (**(code **)(**(longlong **)(param_1 + 0xd8) + 0x30))
                        (*(longlong **)(param_1 + 0xd8),local_4c);
      iVar3 = (**(code **)(**(longlong **)(lVar5 + 0x80) + 0x28))();
      iVar8 = 0;
      if (-1 < iVar3 + -1) {
        do {
          uVar6 = (**(code **)(**(longlong **)(lVar5 + 0x80) + 0x30))
                            (*(longlong **)(lVar5 + 0x80),iVar8);
          cVar1 = FUN_004113d0(uVar6,&PTR_FUN_01aae560);
          if (cVar1 != '\0') {
            plVar7 = (longlong *)
                     (**(code **)(**(longlong **)(lVar5 + 0x80) + 0x30))
                               (*(longlong **)(lVar5 + 0x80),iVar8);
            (**(code **)(*plVar7 + 0x48))(plVar7,local_40);
            iVar4 = FUN_00416db0(local_40[0],local_res10[0]);
            if (iVar4 == 0) {
              local_58 = (**(code **)(**(longlong **)(lVar5 + 0x80) + 0x30))
                                   (*(longlong **)(lVar5 + 0x80),iVar8);
            }
          }
          uVar6 = (**(code **)(**(longlong **)(lVar5 + 0x80) + 0x30))
                            (*(longlong **)(lVar5 + 0x80),iVar8);
          cVar1 = FUN_004113d0(uVar6,&PTR_FUN_01aaff18);
          if (cVar1 != '\0') {
            plVar7 = (longlong *)
                     (**(code **)(**(longlong **)(lVar5 + 0x80) + 0x30))
                               (*(longlong **)(lVar5 + 0x80),iVar8);
            (**(code **)(*plVar7 + 0x48))(plVar7,&local_48);
            iVar4 = FUN_00416db0(local_48,local_res10[0]);
            if (iVar4 == 0) {
              local_58 = (**(code **)(**(longlong **)(lVar5 + 0x80) + 0x30))
                                   (*(longlong **)(lVar5 + 0x80),iVar8);
            }
          }
          iVar8 = iVar8 + 1;
          iVar3 = iVar3 + -1;
        } while (iVar3 != 0);
      }
      local_4c = local_4c + 1;
      iVar2 = iVar2 + -1;
    } while (iVar2 != 0);
  }
  FUN_00414560(&local_48,2);
  FUN_00414480(local_res10);
  return local_58;
}

