/* Ghidra address: 0129f2f0 */
/* Ghidra symbol: FUN_0129f2f0 */


void FUN_0129f2f0(undefined1 param_1,longlong param_2,undefined8 param_3,undefined8 param_4)

{
  longlong *plVar1;
  longlong lVar2;
  longlong lVar3;
  int iVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  uint local_84;
  undefined8 local_78;
  undefined8 local_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 local_50 [4];
  
  local_78 = 0;
  local_70 = 0;
  local_50[0] = 0;
  local_58 = 0;
  lVar2 = FUN_00410e60(&DAT_0129f100,1);
  if (lVar2 == 0) {
    lVar3 = 0;
  }
  else {
    lVar3 = lVar2 + 0x10;
  }
  FUN_0041b840(&local_58,lVar3);
  *(undefined8 *)(lVar2 + 0x38) = param_4;
  if (*(char *)(param_2 + 0x4c8) != '\0') {
    (**(code **)(**(longlong **)(param_2 + 0x4e8) + 0x288))
              (*(longlong **)(param_2 + 0x4e8),local_50);
    FUN_01b15380(*(undefined8 *)(lVar2 + 0x38),&local_68,local_50[0]);
    *(undefined8 *)(lVar2 + 0x18) = local_68;
    *(undefined8 *)(lVar2 + 0x20) = uStack_60;
    if (lVar2 == 0) {
      lVar3 = 0;
    }
    else {
      lVar3 = lVar2 + 0x58;
    }
    FUN_016f8860(param_2,param_1,8,param_3,lVar3,*(undefined8 *)(param_2 + 0xd0),
                 *(undefined8 *)(param_2 + 0x1b0));
  }
  if (0 < *(int *)(*(longlong *)(param_2 + 0x4f8) + 0x10)) {
    FUN_01cc47e0(*(undefined8 *)(param_2 + 0xd0),param_3);
    iVar4 = *(int *)(*(longlong *)(param_2 + 0x4f8) + 0x10);
    local_84 = 0;
    if (-1 < iVar4 + -1) {
      do {
        lVar3 = *(longlong *)(param_2 + 0x4f8);
        if (*(uint *)(lVar3 + 0x10) <= local_84) {
          FUN_00594f90();
        }
        plVar1 = *(longlong **)
                  (*(longlong *)(*(longlong *)(lVar3 + 8) + (longlong)(int)local_84 * 8) + 0x18);
        (**(code **)(*plVar1 + 0x288))(plVar1,&local_70);
        FUN_00416ba0(local_50,local_70,&DAT_0129f688);
        FUN_01b15380(*(undefined8 *)(lVar2 + 0x38),&local_68,local_50[0]);
        *(undefined8 *)(lVar2 + 0x18) = local_68;
        *(undefined8 *)(lVar2 + 0x20) = uStack_60;
        lVar3 = *(longlong *)(param_2 + 0x4f8);
        if (*(uint *)(lVar3 + 0x10) <= local_84) {
          FUN_00594f90();
        }
        plVar1 = *(longlong **)
                  (*(longlong *)(*(longlong *)(lVar3 + 8) + (longlong)(int)local_84 * 8) + 0x18);
        (**(code **)(*plVar1 + 0x288))(plVar1,&local_78);
        FUN_00416ba0(lVar2 + 0x50,local_78,L"_Out");
        FUN_01b15380(*(undefined8 *)(lVar2 + 0x38),&local_68,*(undefined8 *)(lVar2 + 0x50));
        *(undefined8 *)(lVar2 + 0x40) = local_68;
        *(undefined8 *)(lVar2 + 0x48) = uStack_60;
        FUN_00c44b60(&local_68,lVar2 + 0x40,lVar2 + 0x18);
        *(undefined8 *)(lVar2 + 0x28) = local_68;
        *(undefined8 *)(lVar2 + 0x30) = uStack_60;
        uVar5 = FUN_00c44590(lVar2 + 0x28);
        uVar6 = FUN_00c445d0(lVar2 + 0x28);
        FUN_01cc48a0(*(undefined8 *)(param_2 + 0xd0),local_84,uVar5,uVar6);
        local_84 = local_84 + 1;
        iVar4 = iVar4 + -1;
      } while (iVar4 != 0);
    }
  }
  FUN_00414560(&local_78,2);
  FUN_0041b800(&local_58);
  FUN_00414480(local_50);
  return;
}

