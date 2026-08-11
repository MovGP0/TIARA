/* Ghidra address: 012be5d0 */
/* Ghidra symbol: FUN_012be5d0 */


void FUN_012be5d0(longlong param_1,longlong param_2,longlong *param_3)

{
  longlong *plVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined8 uVar6;
  longlong lVar7;
  bool bVar8;
  longlong local_res10 [3];
  int local_3c;
  undefined1 local_30 [8];
  
  local_res10[0] = param_2;
  iVar2 = FUN_01d31a40(param_2);
  if (iVar2 == 0) {
    FUN_01d311c0(local_res10[0],param_1 + 8,2);
    FUN_01d31740(local_res10[0],*(undefined4 *)(param_1 + 0xc));
    if (*(byte *)(local_res10[0] + 0x78) < 8) {
      bVar8 = ((int)CONCAT71((int7)((ulonglong)local_res10[0] >> 8),1) <<
               (*(byte *)(local_res10[0] + 0x78) & 0x1f) & 0x39U) != 0;
    }
    else {
      bVar8 = false;
    }
    if (bVar8) {
      FUN_01d325e0(local_res10[0],*(undefined8 *)(param_1 + 0x10));
    }
    else {
      FUN_01d320f0(local_res10[0],*(undefined8 *)(param_1 + 0x10));
    }
    FUN_01d31740(local_res10[0],*(undefined4 *)(*(longlong *)(param_1 + 0x18) + 0x10));
    iVar2 = *(int *)(*(longlong *)(param_1 + 0x18) + 0x10);
    local_3c = 0;
    if (-1 < iVar2 + -1) {
      do {
        uVar6 = FUN_004aeac0(*(undefined8 *)(param_1 + 0x18),local_3c);
        FUN_012be030(uVar6,local_res10[0]);
        local_3c = local_3c + 1;
        iVar2 = iVar2 + -1;
      } while (iVar2 != 0);
    }
    FUN_01d31740(local_res10[0],*(undefined4 *)(*(longlong *)(param_1 + 0x20) + 0x10));
    iVar2 = *(int *)(*(longlong *)(param_1 + 0x20) + 0x10);
    local_3c = 0;
    if (-1 < iVar2 + -1) {
      do {
        lVar7 = FUN_004aeac0(*(undefined8 *)(param_1 + 0x20),local_3c);
        uVar3 = (**(code **)(*param_3 + 0x18))(param_3,*(undefined8 *)(lVar7 + 0x10));
        FUN_01d31740(local_res10[0],uVar3);
        lVar7 = FUN_004aeac0(*(undefined8 *)(param_1 + 0x20),local_3c);
        plVar1 = *(longlong **)(lVar7 + 0x18);
        uVar3 = (**(code **)(*plVar1 + 0x20))(plVar1);
        uVar4 = (**(code **)(*plVar1 + 0x28))(plVar1,local_res10[0]);
        uVar5 = (**(code **)(*plVar1 + 0x30))(plVar1,local_res10[0]);
        FUN_01d310e0(local_res10[0],local_30,uVar3,uVar4,uVar5);
        FUN_01d311c0(local_res10[0],local_30,8);
        (**(code **)(*plVar1 + 0x38))(plVar1,local_res10);
        local_3c = local_3c + 1;
        iVar2 = iVar2 + -1;
      } while (iVar2 != 0);
    }
  }
  return;
}

