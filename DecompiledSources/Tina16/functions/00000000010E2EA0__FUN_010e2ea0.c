/* Ghidra address: 010e2ea0 */
/* Ghidra symbol: FUN_010e2ea0 */


int FUN_010e2ea0(longlong *param_1)

{
  bool bVar1;
  bool bVar2;
  int iVar3;
  int iVar4;
  undefined8 uVar5;
  longlong lVar6;
  int iVar7;
  int iVar8;
  int local_34;
  
  iVar7 = -1;
  iVar3 = (**(code **)(**(longlong **)(param_1[0xfb] + 0x4f0) + 0x28))
                    (*(longlong **)(param_1[0xfb] + 0x4f0));
  if (iVar3 != 0) {
    iVar8 = 0;
    bVar2 = false;
    bVar1 = false;
    iVar3 = -1;
    iVar4 = (**(code **)(**(longlong **)(param_1[0xfb] + 0x4f0) + 0x28))();
    local_34 = 0;
    if (-1 < iVar4 + -1) {
      do {
        uVar5 = (**(code **)(**(longlong **)(param_1[0xfb] + 0x4f0) + 0x30))
                          (*(longlong **)(param_1[0xfb] + 0x4f0),local_34);
        lVar6 = FUN_004113f0(uVar5,&PTR_FUN_01105a20);
        if (((*(longlong *)(lVar6 + 0x18) != 0) && (local_34 % 2 == iVar8)) &&
           ((iVar3 == -1 || (iVar3 / 2 != local_34 / 2)))) {
          bVar1 = true;
          *(undefined1 *)(lVar6 + 0x11) = 1;
          if (iVar8 == 0) {
            (**(code **)(*(longlong *)param_1[0xfb] + 0x268))((longlong *)param_1[0xfb],local_34);
            param_1[0x10e] = lVar6;
            iVar7 = local_34;
          }
          iVar8 = iVar8 + 1;
          iVar3 = local_34;
          bVar2 = true;
          if (iVar8 == 2) break;
        }
        bVar1 = bVar2;
        local_34 = local_34 + 1;
        iVar4 = iVar4 + -1;
        bVar2 = bVar1;
      } while (iVar4 != 0);
    }
    if (!bVar1) {
      (**(code **)(*(longlong *)param_1[0xfb] + 0x268))((longlong *)param_1[0xfb],0);
      iVar7 = 0;
      uVar5 = (**(code **)(**(longlong **)(param_1[0xfb] + 0x4f0) + 0x30))
                        (*(longlong **)(param_1[0xfb] + 0x4f0),0);
      lVar6 = FUN_004113f0(uVar5,&PTR_FUN_01105a20);
      param_1[0x10e] = lVar6;
    }
  }
  iVar3 = (**(code **)(**(longlong **)(param_1[0xfb] + 0x4f0) + 0x28))
                    (*(longlong **)(param_1[0xfb] + 0x4f0));
  if (iVar3 != 0) {
    local_34 = (**(code **)(**(longlong **)(param_1[0xfb] + 0x4f0) + 0x28))
                         (*(longlong **)(param_1[0xfb] + 0x4f0));
    local_34 = local_34 + -1;
    if (-1 < local_34) {
      do {
        uVar5 = (**(code **)(**(longlong **)(param_1[0xfb] + 0x4f0) + 0x30))
                          (*(longlong **)(param_1[0xfb] + 0x4f0),local_34);
        lVar6 = FUN_004113f0(uVar5,&PTR_FUN_011051a8);
        if (*(char *)(lVar6 + 0x11) != '\0') {
          (**(code **)(*(longlong *)param_1[0xfb] + 0x268))((longlong *)param_1[0xfb],local_34);
          param_1[0x10e] = lVar6;
          (**(code **)(*param_1 + 0x3f0))(param_1,param_1);
        }
        local_34 = local_34 + -1;
      } while (local_34 != -1);
    }
  }
  return iVar7;
}

