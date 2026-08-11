/* Ghidra address: 012b23b0 */
/* Ghidra symbol: FUN_012b23b0 */


void FUN_012b23b0(longlong *param_1,longlong param_2,longlong *param_3)

{
  longlong *plVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  longlong lVar6;
  undefined8 uVar7;
  int iVar8;
  undefined8 local_50 [2];
  undefined1 local_39;
  undefined *local_38;
  int local_2c;
  
  local_50[0] = 0;
  if (((param_2 != 0) && (param_3 != (longlong *)0x0)) &&
     ((lVar6 = (**(code **)(*param_1 + 0x458))(param_1), param_2 == lVar6 ||
      (lVar6 = (**(code **)(*param_1 + 0x460))(param_1), param_2 == lVar6)))) {
    iVar3 = (**(code **)(*param_3 + 0x28))();
    iVar8 = 0;
    if (-1 < iVar3 + -1) {
      do {
        lVar6 = (**(code **)(*param_3 + 0x30))(param_3,iVar8);
        if (((lVar6 != 0) && (*(char *)(lVar6 + 0x3a) == '\x01')) &&
           (*(char *)(lVar6 + 0x18) != '\0')) {
          plVar1 = (longlong *)param_1[0x1b7];
          local_38 = (undefined *)0x0;
          FUN_01cc0ae0(lVar6,local_50);
          cVar2 = (**(code **)(*plVar1 + 0x40))(plVar1,local_50[0],&local_2c);
          if (cVar2 == '\0') {
            cVar2 = (**(code **)(*plVar1 + 0x170))(plVar1,param_2,lVar6,&local_38);
            if ((cVar2 != '\0') &&
               (local_2c = (**(code **)(*(longlong *)plVar1[1] + 0xc0))
                                     ((longlong *)plVar1[1],local_38), local_2c != -1)) {
              (**(code **)(**(longlong **)(param_1[0xfb] + 0x4f0) + 0x40))
                        (*(longlong **)(param_1[0xfb] + 0x4f0),
                         local_2c + *(int *)((longlong)param_1 + 0xd8c),
                         *(undefined8 *)(local_38 + 8));
              uVar7 = FUN_004113f0(param_1[0x136],&PTR_FUN_010e62f0);
              FUN_010ec980(uVar7,*(undefined8 *)(local_38 + 0x40),
                           (*(double *)(local_38 + 0x118) * (double)*(byte *)(param_1 + 0x1b1)) /
                           2.0,(-*(double *)(local_38 + 0x118) * (double)*(byte *)(param_1 + 0x1b1))
                               / 2.0,1,local_38[0x11]);
            }
          }
          else {
            uVar7 = (**(code **)(*(longlong *)plVar1[1] + 0x30))((longlong *)plVar1[1],local_2c);
            local_38 = (undefined *)FUN_004113f0(uVar7,&PTR_FUN_01105a20);
          }
          if (local_38 != (undefined *)0x0) {
            if (local_38[0x11] == '\0') {
              local_38[0x11] = 1;
              (**(code **)(*(longlong *)param_1[0x1b7] + 0x150))
                        ((longlong *)param_1[0x1b7],(undefined1)local_2c,local_38 + 0x11);
              local_39 = 1;
              if (*(char *)((longlong)param_1 + 0x7ed) == '\0') {
                FUN_012adda0(param_1,local_38,1,1,0,&local_39);
              }
            }
            FUN_010e8e30(param_1[0x136],1);
            iVar4 = (**(code **)(*(longlong *)param_1[0xfb] + 0x260))((longlong *)param_1[0xfb]);
            iVar5 = local_2c + *(int *)((longlong)param_1 + 0xd8c);
            if (iVar4 != iVar5) {
              (**(code **)(*(longlong *)param_1[0xfb] + 0x268))((longlong *)param_1[0xfb],iVar5);
              (**(code **)(*param_1 + 0x3f0))(param_1,param_1);
            }
          }
        }
        iVar8 = iVar8 + 1;
        iVar3 = iVar3 + -1;
      } while (iVar3 != 0);
    }
  }
  FUN_00414480(local_50);
  return;
}

