/* Ghidra address: 00a17740 */
/* Ghidra symbol: FUN_00a17740 */


void FUN_00a17740(longlong param_1,undefined8 param_2,undefined8 param_3,ulonglong param_4,
                 undefined8 param_5,int *param_6)

{
  uint *puVar1;
  longlong lVar2;
  uint uVar3;
  undefined8 uVar4;
  int iVar5;
  uint uVar6;
  undefined8 local_48;
  
  lVar2 = *(longlong *)(param_1 + 0x238);
  puVar1 = (uint *)(lVar2 + 0x28);
  uVar6 = *(uint *)(lVar2 + 0x28);
  if (uVar6 == 0) {
    uVar4 = (**(code **)(*(longlong *)(param_1 + 8) + 0x38))
                      (param_1,*(undefined8 *)(lVar2 + 0x10),*(undefined4 *)(lVar2 + 0x24),
                       *(undefined4 *)(lVar2 + 0x20),1);
    param_4 = param_4 & 0xffffffff;
    *(undefined8 *)(lVar2 + 0x18) = uVar4;
    uVar6 = *(uint *)(lVar2 + 0x28);
  }
  else {
    uVar4 = *(undefined8 *)(lVar2 + 0x18);
  }
  local_48 = (longlong *)(lVar2 + 0x18);
  (**(code **)(*(longlong *)(param_1 + 0x260) + 8))
            (param_1,param_2,param_3,param_4,uVar4,puVar1,*(uint *)(lVar2 + 0x20));
  uVar3 = *puVar1;
  iVar5 = uVar3 - uVar6;
  if (uVar6 <= uVar3 && iVar5 != 0) {
    (**(code **)(*(longlong *)(param_1 + 0x270) + 8))
              (param_1,(ulonglong)uVar6 * 8 + *local_48,0,iVar5);
    *param_6 = *param_6 + iVar5;
    uVar3 = *puVar1;
  }
  uVar6 = *(uint *)(lVar2 + 0x20);
  if (uVar6 <= uVar3) {
    *(int *)(lVar2 + 0x24) = *(int *)(lVar2 + 0x24) + uVar6;
    *(undefined4 *)(lVar2 + 0x28) = 0;
  }
  return;
}

