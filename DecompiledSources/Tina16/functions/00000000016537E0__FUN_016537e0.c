/* Ghidra address: 016537e0 */
/* Ghidra symbol: FUN_016537e0 */


void FUN_016537e0(longlong param_1,longlong param_2)

{
  bool bVar1;
  uint *puVar2;
  undefined2 uVar3;
  uint uVar4;
  byte *pbVar5;
  longlong lVar6;
  longlong *plVar7;
  undefined8 uVar8;
  int iVar9;
  uint in_stack_ffffffffffffff78;
  int local_58;
  undefined8 local_50;
  undefined8 local_48;
  undefined8 local_40 [2];
  uint *local_30;
  
  local_50 = 0;
  local_48 = 0;
  local_40[0] = 0;
  pbVar5 = (byte *)FUN_016ea6c0(param_1,1);
  FUN_016ee260(param_1,&local_30,0xd0,0);
  *(uint **)(*(longlong *)(param_1 + 0x128) + 0x538) = local_30;
  local_30[1] = (uint)*pbVar5;
  *(undefined2 *)(local_30 + 2) = *(undefined2 *)(pbVar5 + 0x10);
  *(undefined8 *)(local_30 + 8) = *(undefined8 *)(pbVar5 + 0x18);
  *(char *)(local_30 + 0x1b) = '\0';
  *(char *)((longlong)local_30 + 0x6d) = '\0';
  local_30[0x1c] = 0xffffffff;
  puVar2 = local_30;
  puVar2[0x1e] = 0;
  puVar2[0x1f] = 0;
  local_30[0x27] = 0xffffffff;
  *(char *)(local_30 + 0x28) = '\x01';
  *(char *)((longlong)local_30 + 0xa1) = '\x02';
  uVar3 = FUN_016ea1b0(param_1,2);
  *(undefined2 *)((longlong)local_30 + 0x9a) = uVar3;
  lVar6 = *(longlong *)(pbVar5 + 0x38);
  if ((lVar6 == 0) || (*(char *)(lVar6 + 0x4a) != '\0')) {
    bVar1 = false;
  }
  else {
    bVar1 = true;
  }
  if (bVar1) {
    iVar9 = *(int *)(*(longlong *)(lVar6 + 8) + 0x10);
    local_58 = 0;
    if (-1 < iVar9 + -1) {
      do {
        lVar6 = FUN_004aeac0(*(undefined8 *)(*(longlong *)(pbVar5 + 0x38) + 8),local_58);
        *(longlong *)(lVar6 + 0x80) = param_1;
        local_58 = local_58 + 1;
        iVar9 = iVar9 + -1;
      } while (iVar9 != 0);
    }
    iVar9 = *(int *)(*(longlong *)(*(longlong *)(pbVar5 + 0x38) + 0x10) + 0x10);
    local_58 = 0;
    if (-1 < iVar9 + -1) {
      do {
        lVar6 = FUN_004aeac0(*(undefined8 *)(*(longlong *)(pbVar5 + 0x38) + 0x10),local_58);
        *(longlong *)(lVar6 + 0x80) = param_1;
        local_58 = local_58 + 1;
        iVar9 = iVar9 + -1;
      } while (iVar9 != 0);
    }
  }
  if ((local_30[1] == 1) && ((short)local_30[2] == 1)) {
    uVar4 = FUN_016e9e80(param_1,2);
    *local_30 = uVar4 & 0xff;
    *(undefined8 *)(local_30 + 0x24) = **(undefined8 **)(local_30 + 8);
    FUN_016ebdd0(param_1,(char)*local_30 + '\x01',1,2,1);
    iVar9 = (**(code **)(**(longlong **)(pbVar5 + 8) + 0x28))(*(longlong **)(pbVar5 + 8));
    if (iVar9 == 0) {
      plVar7 = (longlong *)FUN_016ebdc0(param_1);
      (**(code **)(*plVar7 + 0x288))(plVar7,local_40);
      FUN_01b04d70(0x20e,*(undefined8 *)(param_2 + 0x1310),local_40[0]);
    }
    uVar8 = FUN_016ebdc0(param_1);
    (**(code **)(**(longlong **)(pbVar5 + 8) + 0x18))(*(longlong **)(pbVar5 + 8),&local_48,0);
    uVar8 = FUN_01b07f10(param_2,uVar8,local_48,&DAT_01f7d074,6,1);
    FUN_016ed0a0(param_1,(char)*local_30 + '\x02',uVar8,1,(char)*local_30 + '\x01');
    FUN_016ed220(param_1,(char)*local_30 + '\x02',*(undefined8 *)(local_30 + 0x24),0);
    FUN_016e9f40(param_1,FUN_0164c730);
    FUN_016e9ff0(param_1,FUN_0164c040);
    FUN_016ea040(param_1,FUN_0164c240);
  }
  else {
    uVar8 = FUN_00409570((longlong)(int)(local_30[1] * 8));
    *(undefined8 *)(local_30 + 10) = uVar8;
    uVar8 = FUN_00409570((longlong)(int)(local_30[1] * 2));
    *(undefined8 *)(local_30 + 0x12) = uVar8;
    puVar2[0xe] = 0;
    puVar2[0xf] = 0;
    puVar2[0xc] = 0;
    puVar2[0xd] = 0;
    puVar2[6] = 0;
    puVar2[7] = 0;
    uVar4 = FUN_016e9e80(param_1,(char)local_30[1] + '\x01');
    *local_30 = uVar4 & 0xff;
    FUN_016ebdd0(param_1,(char)*local_30 + '\x01',1,2,in_stack_ffffffffffffff78 & 0xffffff00);
    uVar4 = local_30[1];
    local_58 = 1;
    if (0 < (int)uVar4) {
      do {
        uVar8 = FUN_016ebdc0(param_1);
        (**(code **)(**(longlong **)(pbVar5 + 8) + 0x18))
                  (*(longlong **)(pbVar5 + 8),&local_50,local_58 + -1);
        uVar8 = FUN_01b07f10(param_2,uVar8,local_50,&DAT_01f7d074,6,1);
        FUN_016ed0a0(param_1,(char)*local_30 + (char)local_58 + '\x01',uVar8,
                     CONCAT71((uint7)(uint3)((uint)local_58 >> 8),1),(char)*local_30 + '\x01');
        local_58 = local_58 + 1;
        uVar4 = uVar4 - 1;
      } while (uVar4 != 0);
    }
    if (!bVar1) {
      FUN_016e9f40(param_1,FUN_01650390);
    }
    FUN_016e9f50(param_1,FUN_0164bf30);
    FUN_016e9ff0(param_1,FUN_0164c040);
    FUN_016ea040(param_1,FUN_0164c240);
  }
  FUN_00414560(&local_50,3);
  return;
}

