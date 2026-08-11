/* Ghidra address: 01cdf760 */
/* Ghidra symbol: FUN_01cdf760 */


undefined1 FUN_01cdf760(longlong param_1,undefined8 param_2,undefined4 param_3,undefined4 param_4)

{
  char cVar1;
  int iVar2;
  undefined8 uVar3;
  longlong *plVar4;
  longlong lVar5;
  int iVar6;
  double *pdVar7;
  undefined8 in_stack_ffffffffffffff50;
  undefined4 uVar9;
  undefined8 in_stack_ffffffffffffff58;
  undefined4 uVar10;
  undefined1 local_71;
  undefined8 local_70;
  undefined8 local_68;
  undefined8 local_60;
  undefined1 local_58 [16];
  undefined8 local_48;
  double local_40;
  double local_38;
  undefined8 local_30 [2];
  undefined4 uVar8;
  
  local_60 = 0;
  local_68 = 0;
  local_70 = 0;
  FUN_01ae5e70(*(undefined8 *)(param_1 + 0x50),0);
  cVar1 = FUN_01d2dd00(param_1 + 0x14,param_3,param_4);
  if (cVar1 == '\0') {
    local_71 = 0;
  }
  else {
    iVar2 = (**(code **)(**(longlong **)(param_1 + 0x70) + 0x28))(*(longlong **)(param_1 + 0x70));
    iVar6 = 1;
    if (0 < iVar2) {
      do {
        uVar3 = (**(code **)(**(longlong **)(param_1 + 0x70) + 0x30))
                          (*(longlong **)(param_1 + 0x70),iVar6 + -1);
        cVar1 = FUN_004113d0(uVar3,&PTR_FUN_01d282a8);
        if (cVar1 != '\0') {
          plVar4 = (longlong *)
                   (**(code **)(**(longlong **)(param_1 + 0x70) + 0x30))
                             (*(longlong **)(param_1 + 0x70),iVar6 + -1);
          cVar1 = (**(code **)(*plVar4 + 0x88))(plVar4,param_2,param_3,param_4);
          if (cVar1 != '\0') {
            local_71 = 1;
            goto LAB_01cdfbd0;
          }
        }
        iVar6 = iVar6 + 1;
        iVar2 = iVar2 + -1;
      } while (iVar2 != 0);
    }
    iVar2 = (**(code **)(**(longlong **)(param_1 + 0x78) + 0x28))(*(longlong **)(param_1 + 0x78));
    iVar6 = 1;
    if (0 < iVar2) {
      do {
        uVar3 = (**(code **)(**(longlong **)(param_1 + 0x78) + 0x30))
                          (*(longlong **)(param_1 + 0x78),iVar6 + -1);
        cVar1 = FUN_004113d0(uVar3,&PTR_FUN_01d282a8);
        if (cVar1 != '\0') {
          plVar4 = (longlong *)
                   (**(code **)(**(longlong **)(param_1 + 0x78) + 0x30))
                             (*(longlong **)(param_1 + 0x78),iVar6 + -1);
          cVar1 = (**(code **)(*plVar4 + 0x88))(plVar4,param_2,param_3,param_4);
          if (cVar1 != '\0') {
            local_71 = 1;
            goto LAB_01cdfbd0;
          }
          lVar5 = (**(code **)(**(longlong **)(param_1 + 0x78) + 0x30))
                            (*(longlong **)(param_1 + 0x78),iVar6 + -1);
          if (*(longlong *)(lVar5 + 0x118) != 0) {
            lVar5 = (**(code **)(**(longlong **)(param_1 + 0x78) + 0x30))
                              (*(longlong **)(param_1 + 0x78),iVar6 + -1);
            cVar1 = (**(code **)(**(longlong **)(lVar5 + 0x118) + 0x88))
                              (*(longlong **)(lVar5 + 0x118),param_2,param_3,param_4);
            if (cVar1 != '\0') {
              local_71 = 1;
              goto LAB_01cdfbd0;
            }
          }
        }
        iVar6 = iVar6 + 1;
        iVar2 = iVar2 + -1;
      } while (iVar2 != 0);
    }
    iVar2 = (**(code **)(**(longlong **)(param_1 + 0x80) + 0x28))(*(longlong **)(param_1 + 0x80));
    if (0 < iVar2) {
      do {
        iVar6 = iVar2 + -1;
        uVar3 = (**(code **)(**(longlong **)(param_1 + 0x80) + 0x30))
                          (*(longlong **)(param_1 + 0x80),iVar6);
        cVar1 = FUN_004113d0(uVar3,&PTR_FUN_01d282a8);
        uVar10 = (undefined4)((ulonglong)in_stack_ffffffffffffff58 >> 0x20);
        uVar9 = (undefined4)((ulonglong)in_stack_ffffffffffffff50 >> 0x20);
        if (cVar1 != '\0') {
          plVar4 = (longlong *)
                   (**(code **)(**(longlong **)(param_1 + 0x80) + 0x30))
                             (*(longlong **)(param_1 + 0x80),iVar6);
          pdVar7 = &local_38;
          (**(code **)(*plVar4 + 0xf8))(plVar4,param_3,param_4,local_30,pdVar7);
          uVar8 = (undefined4)((ulonglong)pdVar7 >> 0x20);
          if (*(char *)(param_1 + 0x58) == '\x05') {
            FUN_00c44460(local_58,local_30[0],local_38);
            FUN_00f06e00(&local_48,local_58);
            local_30[0] = local_48;
            local_38 = local_40;
          }
          else if (*(char *)(param_1 + 0x58) == '\x06') {
            FUN_00c44460(local_58,local_30[0],local_38);
            local_48 = FUN_00c44590(local_58);
            FUN_00c44460(local_58,local_30[0],local_38);
            local_40 = (double)FUN_00c445d0(local_58);
            local_40 = local_40 * 57.29577951308232;
            local_30[0] = local_48;
            local_38 = local_40;
          }
          FUN_00f05f60(&local_68,local_30[0],0x3ff0000000000000,1,CONCAT44(uVar8,2),
                       CONCAT44(uVar9,0xffffffe2),CONCAT44(uVar10,0xffffffe2));
          FUN_00f05f60(&local_70,local_38,0x3ff0000000000000,1,2,0xffffffe2,0xffffffe2);
          in_stack_ffffffffffffff58 = 0;
          in_stack_ffffffffffffff50 = local_70;
          FUN_00416cd0(&local_60,5,&DAT_01cdfc28,local_68,&DAT_01cdfc3c,local_70,&DAT_01cdfc4c);
          FUN_01ae5e70(*(undefined8 *)(param_1 + 0x50),local_60);
          plVar4 = (longlong *)
                   (**(code **)(**(longlong **)(param_1 + 0x80) + 0x30))
                             (*(longlong **)(param_1 + 0x80),iVar6);
          cVar1 = (**(code **)(*plVar4 + 0x88))(plVar4,param_2,param_3,param_4);
          if (cVar1 != '\0') {
            local_71 = 1;
            goto LAB_01cdfbd0;
          }
        }
        iVar2 = iVar2 + -1;
      } while (iVar2 != 0);
    }
    local_71 = 0;
  }
LAB_01cdfbd0:
  FUN_00414560(&local_70,3);
  return local_71;
}

