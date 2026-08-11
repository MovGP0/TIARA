/* Ghidra address: 012404c0 */
/* Ghidra symbol: FUN_012404c0 */


void FUN_012404c0(ulonglong param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  short sVar3;
  int iVar4;
  longlong *plVar5;
  ulonglong uVar6;
  int iVar7;
  int iVar8;
  uint in_stack_ffffffffffffff38;
  undefined4 local_94;
  undefined8 local_90;
  undefined8 local_88;
  undefined8 local_7c;
  undefined4 uStack_74;
  undefined8 local_70;
  undefined4 uStack_68;
  undefined8 local_64;
  undefined4 uStack_5c;
  
  local_88 = 0;
  local_90 = 0;
  FUN_01241b70(param_1);
  *(undefined4 *)(param_1 + 0x78) = 0;
  *(undefined4 *)(param_1 + 0x7c) = 0;
  *(undefined4 *)(param_1 + 0x84) = 0;
  *(undefined4 *)(param_1 + 0x88) = 0;
  *(undefined4 *)(param_1 + 0x90) = 0;
  *(undefined4 *)(param_1 + 0x94) = 0;
  *(undefined4 *)(param_1 + 0x6c) = 0;
  *(undefined1 *)(param_1 + 0x5f8) = 0;
  *(undefined4 *)(param_1 + 0x74) = 0;
  if ((*(char *)(*(longlong *)(param_1 + 0x600) + 0x1fc8) != '\0') &&
     (*(int *)(*(longlong *)(param_1 + 0x600) + 0x1fcc) != 0)) {
    FUN_00416ba0(&local_88,*(undefined8 *)(param_1 + 0x48),L"filter_vgen_stage.tsc");
    FUN_0123dc00(param_1,0,local_88,0,in_stack_ffffffffffffff38 & 0xffffff00);
  }
  if (*(char *)(*(longlong *)(param_1 + 0x600) + 0x1fc8) == '\0') {
    FUN_0123fb50(param_1);
  }
  else {
    iVar8 = *(int *)(*(longlong *)(param_1 + 0x30) + 0x3880);
    iVar7 = 0;
    if (-1 < iVar8 + -1) {
      do {
        sVar3 = *(short *)(*(longlong *)(param_1 + 0x28) + 0x1fa4);
        if ((((sVar3 == 0x48) || (sVar3 == 0x4c)) || (sVar3 == 0x50)) || (sVar3 == 0x53)) {
          FUN_0123f050(param_1,iVar7);
        }
        else {
          FUN_0044d490(&PTR_FUN_004334c0,1,L"ExportFilter");
          FUN_004134c0();
        }
        if (0 < iVar7) {
          *(undefined4 *)(param_1 + 0x70) = 0;
          iVar4 = iVar7;
          if (*(int *)(*(longlong *)(param_1 + 0x600) + 0x1fcc) != 0) {
            iVar4 = iVar7 + 1;
          }
          uVar6 = param_1;
          if (iVar4 < *(int *)(param_1 + 0x74)) {
            puVar1 = (undefined8 *)(*(longlong *)(param_1 + 0x5d8) + (longlong)(iVar4 + -1) * 0xc);
            local_70 = *puVar1;
            uStack_68 = *(undefined4 *)(puVar1 + 1);
            uVar6 = *(ulonglong *)(param_1 + 0x5d0);
            puVar1 = (undefined8 *)(uVar6 + (longlong)iVar4 * 0xc);
            uVar2 = *puVar1;
            uStack_74 = *(undefined4 *)(puVar1 + 1);
            local_7c._0_4_ = (undefined4)uVar2;
            local_7c._4_4_ = (int)((ulonglong)uVar2 >> 0x20);
            local_7c = uVar2;
            if (*(int *)(param_1 + 0x6c) == 1) {
              *(undefined8 *)(param_1 + 0x120) = local_70;
              *(undefined4 *)(param_1 + 0x128) = uStack_68;
              *(int *)(param_1 + 0x70) = *(int *)(param_1 + 0x70) + 1;
              uStack_5c = *(undefined4 *)(param_1 + 200);
              local_64._0_4_ = (int)*(undefined8 *)(param_1 + 0xc0);
              local_64._0_4_ = (int)local_64 + 0x10;
              local_64._4_4_ = (int)((ulonglong)*(undefined8 *)(param_1 + 0xc0) >> 0x20);
              puVar1 = (undefined8 *)(param_1 + 0x120 + (longlong)*(int *)(param_1 + 0x70) * 0xc);
              *puVar1 = local_64;
              *(undefined4 *)(puVar1 + 1) = uStack_5c;
              *(int *)(param_1 + 0x70) = *(int *)(param_1 + 0x70) + 1;
              iVar4 = (local_64._4_4_ + local_7c._4_4_) / 2;
              uVar6 = (longlong)(local_64._4_4_ + local_7c._4_4_) % 2 & 0xffffffff;
              local_64 = CONCAT44(iVar4,(int)local_64);
              puVar1 = (undefined8 *)(param_1 + 0x120 + (longlong)*(int *)(param_1 + 0x70) * 0xc);
              *puVar1 = local_64;
              *(undefined4 *)(puVar1 + 1) = uStack_5c;
              *(int *)(param_1 + 0x70) = *(int *)(param_1 + 0x70) + 1;
              local_64 = CONCAT44(iVar4,(undefined4)local_7c);
              puVar1 = (undefined8 *)(param_1 + 0x120 + (longlong)*(int *)(param_1 + 0x70) * 0xc);
              *puVar1 = local_64;
              *(undefined4 *)(puVar1 + 1) = uStack_5c;
              *(int *)(param_1 + 0x70) = *(int *)(param_1 + 0x70) + 1;
              puVar1 = (undefined8 *)(param_1 + 0x120 + (longlong)*(int *)(param_1 + 0x70) * 0xc);
              *puVar1 = uVar2;
              *(undefined4 *)(puVar1 + 1) = uStack_74;
              *(int *)(param_1 + 0x70) = *(int *)(param_1 + 0x70) + 1;
            }
            else {
              *(undefined8 *)(param_1 + 0x120) = local_70;
              *(undefined4 *)(param_1 + 0x128) = uStack_68;
              *(int *)(param_1 + 0x70) = *(int *)(param_1 + 0x70) + 1;
              local_70._4_4_ = (int)((ulonglong)local_70 >> 0x20);
              if (local_70._4_4_ != local_7c._4_4_) {
                local_64 = CONCAT44(local_70._4_4_,(undefined4)local_7c);
                puVar1 = (undefined8 *)(param_1 + 0x120 + (longlong)*(int *)(param_1 + 0x70) * 0xc);
                *puVar1 = local_64;
                *(undefined4 *)(puVar1 + 1) = uStack_5c;
                *(int *)(param_1 + 0x70) = *(int *)(param_1 + 0x70) + 1;
              }
              puVar1 = (undefined8 *)(param_1 + 0x120 + (longlong)*(int *)(param_1 + 0x70) * 0xc);
              *puVar1 = uVar2;
              *(undefined4 *)(puVar1 + 1) = uStack_74;
              *(int *)(param_1 + 0x70) = *(int *)(param_1 + 0x70) + 1;
            }
          }
          FUN_0123fa60(param_1,uVar6);
        }
        iVar7 = iVar7 + 1;
        iVar8 = iVar8 + -1;
      } while (iVar8 != 0);
    }
  }
  FUN_01240d00(param_1);
  if (*(char *)(*(longlong *)(param_1 + 0x600) + 0x1fc8) != '\0') {
    plVar5 = (longlong *)
             FUN_0123f7f0(param_1,9,&PTR_DAT_01240ca8,*(undefined4 *)(param_1 + 0xb4),
                          *(undefined4 *)(param_1 + 0xb8),0,**(undefined8 **)(param_1 + 0x30));
    (**(code **)(*plVar5 + 0x1f0))(plVar5,1,param_1 + 0x114,param_1 + 0x118);
    plVar5 = (longlong *)
             FUN_0123f7f0(param_1,9,&DAT_01240cbc,*(undefined4 *)(param_1 + 0x114),
                          *(undefined4 *)(param_1 + 0x118),3,
                          *(undefined8 *)(*(longlong *)(param_1 + 0x30) + 8));
    (**(code **)(*plVar5 + 0x1f0))(plVar5,1,param_1 + 0x114,param_1 + 0x118);
    (**(code **)(*plVar5 + 0x1f0))(plVar5,0,param_1 + 0xfc,param_1 + 0x100);
    FUN_0123f7f0(param_1,2,0,*(undefined4 *)(param_1 + 0x114),*(undefined4 *)(param_1 + 0x118),0,0);
  }
  if (*(char *)(*(longlong *)(param_1 + 0x600) + 0x1fca) == '\0') {
    FUN_0123f7f0(param_1,0x3a,&LAB_01240cf8,*(undefined4 *)(param_1 + 0x9c),
                 *(undefined4 *)(param_1 + 0xa0),2,0);
    FUN_0123f7f0(param_1,0x3a,&DAT_01240ce4,*(undefined4 *)(param_1 + 0xfc),
                 *(undefined4 *)(param_1 + 0x100),0,0);
  }
  else {
    plVar5 = (longlong *)
             FUN_0123f7f0(param_1,0x10,&DAT_01240cd0,*(undefined4 *)(param_1 + 0x9c),
                          *(undefined4 *)(param_1 + 0xa0),3,0);
    (**(code **)(*plVar5 + 0x1f0))(plVar5,1,param_1 + 0x108,param_1 + 0x10c);
    FUN_0123f7f0(param_1,2,0,*(undefined4 *)(param_1 + 0x108),*(undefined4 *)(param_1 + 0x10c),0,0);
    if (((*(char *)(*(longlong *)(param_1 + 0x600) + 0x1fc8) == '\0') ||
        (*(char *)(param_1 + 0x5f8) == '\0')) || (*(int *)(param_1 + 0x6c) < 1)) {
      local_94 = CONCAT22(*(short *)(param_1 + 0x10c) + 0x46,*(undefined2 *)(param_1 + 0x108));
    }
    else {
      local_94 = CONCAT22(*(short *)(param_1 + 0x118) + -0x46,*(short *)(param_1 + 0x114) + 0x32);
    }
    FUN_0123db90(param_1,*(undefined8 *)(param_1 + 0x5f0),local_94);
    FUN_0123f7f0(param_1,4,&DAT_01240ce4,*(undefined4 *)(param_1 + 0xfc),
                 *(undefined4 *)(param_1 + 0x100),0,0);
  }
  FUN_00414560(&local_90,2);
  return;
}

