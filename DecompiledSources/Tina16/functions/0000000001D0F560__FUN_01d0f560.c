/* Ghidra address: 01d0f560 */
/* Ghidra symbol: FUN_01d0f560 */


void FUN_01d0f560(longlong param_1,longlong param_2,longlong param_3,undefined8 param_4,
                 undefined8 param_5,undefined8 param_6)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  longlong lVar6;
  int iVar7;
  int iVar8;
  int local_38;
  int local_34;
  
  FUN_01d0f910(param_4,param_5,param_6);
  iVar7 = *(int *)(param_1 + 0x10);
  local_38 = 0;
  if (-1 < iVar7 + -1) {
    do {
      uVar1 = FUN_004aeac0(param_1,local_38);
      uVar1 = FUN_01d0f530(uVar1);
      FUN_004ae7e0(param_4,uVar1);
      local_38 = local_38 + 1;
      iVar7 = iVar7 + -1;
    } while (iVar7 != 0);
  }
  iVar7 = *(int *)(param_2 + 0x10);
  local_38 = 0;
  if (-1 < iVar7 + -1) {
    do {
      uVar1 = FUN_004aeac0(param_2,local_38);
      uVar1 = FUN_01d0f4c0(uVar1);
      FUN_004ae7e0(param_5,uVar1);
      local_38 = local_38 + 1;
      iVar7 = iVar7 + -1;
    } while (iVar7 != 0);
  }
  iVar7 = *(int *)(param_3 + 0x10);
  local_38 = 0;
  if (-1 < iVar7 + -1) {
    do {
      puVar2 = (undefined8 *)FUN_004095c0(0x37);
      puVar3 = (undefined8 *)FUN_004aeac0(param_3,local_38);
      puVar4 = puVar2;
      for (lVar6 = 6; lVar6 != 0; lVar6 = lVar6 + -1) {
        *puVar4 = *puVar3;
        puVar3 = puVar3 + 1;
        puVar4 = puVar4 + 1;
      }
      *(undefined4 *)puVar4 = *(undefined4 *)puVar3;
      *(undefined2 *)((longlong)puVar4 + 4) = *(undefined2 *)((longlong)puVar3 + 4);
      *(undefined1 *)((longlong)puVar4 + 6) = *(undefined1 *)((longlong)puVar3 + 6);
      uVar1 = FUN_00410e60(&PTR_FUN_00472dd0,1);
      *(undefined8 *)((longlong)puVar2 + 0x13) = uVar1;
      lVar6 = FUN_004aeac0(param_3,local_38);
      iVar8 = *(int *)(*(longlong *)(lVar6 + 0x13) + 0x10);
      local_34 = 0;
      if (-1 < iVar8 + -1) {
        do {
          puVar3 = (undefined8 *)FUN_004095c0(0x10);
          lVar6 = FUN_004aeac0(param_3,local_38);
          puVar4 = (undefined8 *)FUN_004aeac0(*(undefined8 *)(lVar6 + 0x13),local_34);
          *puVar3 = *puVar4;
          puVar3[1] = puVar4[1];
          FUN_004ae7e0(*(undefined8 *)((longlong)puVar2 + 0x13),puVar3);
          local_34 = local_34 + 1;
          iVar8 = iVar8 + -1;
        } while (iVar8 != 0);
      }
      uVar1 = FUN_00410e60(&PTR_FUN_00472dd0,1);
      *(undefined8 *)((longlong)puVar2 + 0x1b) = uVar1;
      lVar6 = FUN_004aeac0(param_3,local_38);
      iVar8 = *(int *)(*(longlong *)(lVar6 + 0x1b) + 0x10);
      local_34 = 0;
      if (-1 < iVar8 + -1) {
        do {
          puVar5 = (undefined8 *)FUN_004095c0(0x29);
          lVar6 = FUN_004aeac0(param_3,local_38);
          puVar3 = (undefined8 *)FUN_004aeac0(*(undefined8 *)(lVar6 + 0x1b),local_34);
          puVar4 = puVar5;
          for (lVar6 = 5; lVar6 != 0; lVar6 = lVar6 + -1) {
            *puVar4 = *puVar3;
            puVar3 = puVar3 + 1;
            puVar4 = puVar4 + 1;
          }
          *(undefined1 *)puVar4 = *(undefined1 *)puVar3;
          FUN_004ae7e0(*(undefined8 *)((longlong)puVar2 + 0x1b),puVar5);
          local_34 = local_34 + 1;
          iVar8 = iVar8 + -1;
        } while (iVar8 != 0);
      }
      uVar1 = FUN_00410e60(&PTR_FUN_00472dd0,1);
      *(undefined8 *)((longlong)puVar2 + 0x23) = uVar1;
      lVar6 = FUN_004aeac0(param_3,local_38);
      iVar8 = *(int *)(*(longlong *)(lVar6 + 0x23) + 0x10);
      local_34 = 0;
      if (-1 < iVar8 + -1) {
        do {
          puVar5 = (undefined8 *)FUN_004095c0(0x29);
          lVar6 = FUN_004aeac0(param_3,local_38);
          puVar3 = (undefined8 *)FUN_004aeac0(*(undefined8 *)(lVar6 + 0x23),local_34);
          puVar4 = puVar5;
          for (lVar6 = 5; lVar6 != 0; lVar6 = lVar6 + -1) {
            *puVar4 = *puVar3;
            puVar3 = puVar3 + 1;
            puVar4 = puVar4 + 1;
          }
          *(undefined1 *)puVar4 = *(undefined1 *)puVar3;
          FUN_004ae7e0(*(undefined8 *)((longlong)puVar2 + 0x23),puVar5);
          local_34 = local_34 + 1;
          iVar8 = iVar8 + -1;
        } while (iVar8 != 0);
      }
      FUN_004ae7e0(param_6,puVar2);
      local_38 = local_38 + 1;
      iVar7 = iVar7 + -1;
    } while (iVar7 != 0);
  }
  return;
}

