/* Ghidra address: 0137a900 */
/* Ghidra symbol: FUN_0137a900 */


undefined8 FUN_0137a900(longlong param_1,longlong *param_2)

{
  char cVar1;
  int iVar2;
  undefined8 uVar3;
  longlong lVar4;
  longlong *plVar5;
  int iVar6;
  int iVar7;
  int local_5c;
  undefined1 local_51 [17];
  undefined8 local_40;
  undefined8 local_38;
  undefined8 local_30;
  
  local_51[0] = 0;
  uVar3 = 1;
  if (*(longlong *)(*(longlong *)(param_1 + 0x50) + 0xa8 + (longlong)*(int *)(param_1 + 0x18) * 8)
      != 0) {
    if (*(char *)(param_1 + 0x59) != '\0') {
      if (*param_2 != 0) {
        FUN_01cc6030(*param_2);
      }
      lVar4 = FUN_01cc3870(&PTR_FUN_01cb5bc0,1,4,0,0);
      *param_2 = lVar4;
      FUN_01cc6020(*param_2);
      *(undefined8 *)(param_1 + 0x68) = 0xffffffffffffffff;
      iVar6 = 0;
      iVar7 = 0;
      iVar2 = (**(code **)(**(longlong **)(param_1 + 8) + 0x28))();
      local_5c = 0;
      if (-1 < iVar2 + -1) {
        do {
          uVar3 = (**(code **)(**(longlong **)(param_1 + 8) + 0x30))
                            (*(longlong **)(param_1 + 8),local_5c);
          lVar4 = FUN_004113f0(uVar3,&PTR_FUN_011051a8);
          *(undefined4 *)(lVar4 + 0xbc) = 0xffffffff;
          if ((*(char *)(lVar4 + 0x11) != '\0') && (cVar1 = FUN_00e1a6e0(local_5c), cVar1 != '\0'))
          {
            *(int *)(lVar4 + 0xbc) = iVar6;
            iVar7 = iVar7 + 1;
            iVar6 = iVar6 + 1;
            local_51[0] = 1;
          }
          local_5c = local_5c + 1;
          iVar2 = iVar2 + -1;
        } while (iVar2 != 0);
      }
      iVar2 = 0;
      if (iVar7 != 0) {
        FUN_01cc31d0(*(undefined8 *)(*param_2 + 8),iVar7,0,2,1,0,0,1);
        uVar3 = FUN_01cc6f70(&PTR_FUN_01cb8ae0,1,*param_2);
        *(undefined8 *)(param_1 + 0x60) = uVar3;
        FUN_01cc5c60(*param_2);
        iVar6 = (**(code **)(**(longlong **)(param_1 + 8) + 0x28))();
        local_5c = 0;
        if (-1 < iVar6 + -1) {
          do {
            uVar3 = (**(code **)(**(longlong **)(param_1 + 8) + 0x30))
                              (*(longlong **)(param_1 + 8),local_5c);
            plVar5 = (longlong *)FUN_004113f0(uVar3,&PTR_FUN_011051a8);
            if (*(int *)((longlong)plVar5 + 0xbc) == -1) {
              *(undefined4 *)(plVar5 + 0x17) = 0xffffffff;
            }
            else {
              uVar3 = FUN_01cc5cc0(*param_2);
              (**(code **)(*plVar5 + 0x10))(plVar5,uVar3,*param_2);
              FUN_01cc09f0(plVar5[8],plVar5[1]);
              *(int *)(plVar5 + 0x17) = iVar2;
              iVar2 = iVar2 + 1;
              if (iVar2 == 1) {
                (**(code **)(**(longlong **)(param_1 + 0x60) + 0x10))
                          (*(longlong **)(param_1 + 0x60),plVar5[8],0);
              }
            }
            local_5c = local_5c + 1;
            iVar6 = iVar6 + -1;
          } while (iVar6 != 0);
        }
        uVar3 = FUN_01cc80a0(*(undefined8 *)(param_1 + 0x60));
        *(undefined8 *)(param_1 + 0x68) = uVar3;
      }
      *(undefined1 *)(param_1 + 0x59) = 0;
    }
    uVar3 = FUN_004113f0(*(undefined8 *)
                          (*(longlong *)(param_1 + 0x50) + 0xa8 +
                          (longlong)*(int *)(param_1 + 0x18) * 8),&PTR_FUN_01133e90);
    local_40 = FUN_01138ff0(uVar3,local_51);
    if ((*(longlong *)(param_1 + 0x60) == 0) || (*(longlong *)(param_1 + 0x68) == -1)) {
      uVar3 = 0xffffffff;
    }
    else {
      FUN_01cc80c0(*(longlong *)(param_1 + 0x60),*(undefined8 *)(param_1 + 0x68));
      FUN_01cc47e0(*param_2,local_40);
      iVar2 = (**(code **)(**(longlong **)(param_1 + 8) + 0x28))();
      local_5c = 0;
      if (-1 < iVar2 + -1) {
        do {
          uVar3 = (**(code **)(**(longlong **)(param_1 + 8) + 0x30))
                            (*(longlong **)(param_1 + 8),local_5c);
          lVar4 = FUN_004113f0(uVar3,&PTR_FUN_011051a8);
          if (*(int *)(lVar4 + 0xb8) != -1) {
            *(undefined1 *)(param_1 + 0x58) = 1;
            FUN_00e1a8c0(local_5c,&local_30,&local_38,&local_40,local_51);
            *(undefined1 *)(param_1 + 0x58) = 0;
            FUN_01cc48a0(*param_2,0,local_30,local_38);
          }
          local_5c = local_5c + 1;
          iVar2 = iVar2 + -1;
        } while (iVar2 != 0);
      }
      if (*(longlong *)(param_1 + 0x60) != 0) {
        uVar3 = FUN_01cc80a0(*(longlong *)(param_1 + 0x60));
        *(undefined8 *)(param_1 + 0x68) = uVar3;
      }
      uVar3 = 0;
    }
  }
  return uVar3;
}

