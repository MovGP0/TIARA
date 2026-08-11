/* Ghidra address: 0060da90 */
/* Ghidra symbol: FUN_0060da90 */


void FUN_0060da90(longlong param_1)

{
  undefined4 uVar1;
  int iVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  longlong lVar5;
  undefined4 *puVar7;
  undefined8 in_stack_ffffffffffffff68;
  uint uVar9;
  longlong local_70;
  undefined4 local_64;
  undefined4 local_60;
  int local_5c;
  undefined2 local_58;
  undefined2 local_56;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined4 uVar6;
  undefined4 uVar8;
  
  uVar9 = (uint)((ulonglong)in_stack_ffffffffffffff68 >> 0x20);
  local_70 = 0;
  FUN_004b9ec0(*(undefined8 *)(param_1 + 0x58));
  *(undefined1 *)(param_1 + 0x7c) = 1;
  if (*(char *)(*(longlong *)(param_1 + 0x50) + 0x68) == '\x01') {
    local_38 = *(undefined8 *)PTR_DAT_020026f0;
    uStack_30 = *(undefined8 *)(PTR_DAT_020026f0 + 8);
  }
  else {
    local_38 = *(undefined8 *)PTR_DAT_02001170;
    uStack_30 = *(undefined8 *)(PTR_DAT_02001170 + 8);
  }
  FUN_0060bbf0(*(longlong *)(param_1 + 0x50),7);
  uVar1 = (**(code **)(**(longlong **)(param_1 + 0x50) + 0x60))(*(longlong **)(param_1 + 0x50));
  *(undefined4 *)(param_1 + 0x48) = uVar1;
  iVar2 = (**(code **)(**(longlong **)(param_1 + 0x50) + 0x48))(*(longlong **)(param_1 + 0x50));
  *(int *)(param_1 + 0x4c) = iVar2;
  FUN_00419260(&local_70,&DAT_0060da50,1,*(int *)(param_1 + 0x48) * 4 * iVar2);
  FUN_0040d200(&local_64,0x2c,0);
  local_64 = 0x2c;
  local_60 = *(undefined4 *)(param_1 + 0x48);
  local_5c = -*(int *)(param_1 + 0x4c);
  local_58 = 1;
  local_56 = 0x20;
  uVar3 = (**(code **)(**(longlong **)(param_1 + 0x50) + 0xe8))(*(longlong **)(param_1 + 0x50));
  uVar4 = FUN_00609e10(*(undefined8 *)(param_1 + 0x50));
  uVar4 = FUN_005ffa40(uVar4);
  puVar7 = &local_64;
  lVar5 = local_70;
  thunk_FUN_0416e0b3(uVar4,uVar3,0,*(undefined4 *)(param_1 + 0x4c),local_70,puVar7,
                     (ulonglong)uVar9 << 0x20);
  uVar8 = (undefined4)((ulonglong)puVar7 >> 0x20);
  uVar6 = (undefined4)((ulonglong)lVar5 >> 0x20);
  uVar1 = 0;
  if (local_70 != 0) {
    uVar1 = (undefined4)*(undefined8 *)(local_70 + -8);
  }
  iVar2 = *(int *)(param_1 + 0x48);
  uVar3 = FUN_0041b800(param_1 + 0x60);
  (**(code **)(*DAT_02011f90 + 0xa0))
            (DAT_02011f90,iVar2,*(undefined4 *)(param_1 + 0x4c),&local_38,CONCAT44(uVar6,iVar2 * 4),
             CONCAT44(uVar8,uVar1),local_70,uVar3);
  FUN_00419430(&local_70,&DAT_0060da50);
  return;
}

