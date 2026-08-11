/* Ghidra address: 006e4ad0 */
/* Ghidra symbol: FUN_006e4ad0 */


void FUN_006e4ad0(longlong param_1,longlong param_2)

{
  undefined8 *puVar1;
  longlong lVar2;
  bool bVar3;
  undefined4 uVar4;
  int iVar5;
  ulonglong uVar6;
  longlong lVar7;
  undefined8 uVar8;
  uint uVar9;
  undefined8 local_48;
  undefined8 local_40;
  undefined8 local_30;
  
  local_48 = 0;
  puVar1 = *(undefined8 **)(param_2 + 0x10);
  if (*(int *)(puVar1 + 2) == -0x212) {
    thunk_FUN_03cc0d62(&local_30);
    uVar6 = FUN_0064d3a0(param_1,&local_30);
    local_30._4_4_ = (undefined4)(uVar6 >> 0x20);
    uVar4 = local_30._4_4_;
    local_30 = uVar6;
    lVar7 = FUN_006e21e0(param_1,uVar6 & 0xffffffff,uVar4);
    if (((lVar7 != 0) && (*(longlong *)(lVar7 + 0x10) != 0)) &&
       ((*(uint *)(*(longlong *)(param_2 + 0x10) + 200) & 1) != 0)) {
      iVar5 = FUN_006d3e90();
      if (iVar5 < 0x40047) {
        bVar3 = false;
      }
      else {
        iVar5 = 0;
        if (*(longlong *)(lVar7 + 0x10) != 0) {
          iVar5 = *(int *)(*(longlong *)(lVar7 + 0x10) + -4);
        }
        bVar3 = iVar5 < 0x50;
      }
      if ((bVar3) && (*(longlong *)(param_1 + 0x6b8) == 0)) {
        FUN_00658210(param_1,param_2);
      }
      else {
        FUN_00414b50(&local_48,*(undefined8 *)(lVar7 + 0x10));
        if (*(longlong *)(param_1 + 0x6b8) != 0) {
          (**(code **)(param_1 + 0x6b8))(*(undefined8 *)(param_1 + 0x6c0),param_1,lVar7,&local_48);
        }
        FUN_004168e0(param_1 + 0x558,local_48);
        uVar9 = 0;
        if (*(longlong *)(param_1 + 0x558) != 0) {
          uVar9 = *(uint *)(*(longlong *)(param_1 + 0x558) + -4) >> 1;
        }
        if (0x4f < uVar9) {
          FUN_00416660(param_1 + 0x558,0x4f);
        }
        uVar8 = FUN_00415f70(*(undefined8 *)(param_1 + 0x558));
        lVar2 = *(longlong *)(param_2 + 0x10);
        *(undefined8 *)(lVar2 + 0x18) = uVar8;
        FUN_0040d200(lVar2 + 0x20,0xa0,0);
        lVar2 = *(longlong *)(param_1 + 0x558);
        uVar9 = 0;
        if (lVar2 != 0) {
          uVar9 = *(uint *)(lVar2 + -4) >> 1;
        }
        FUN_00409a70(lVar2,*(longlong *)(param_2 + 0x10) + 0x20,(longlong)(int)(uVar9 * 2));
        *(undefined8 *)(*(longlong *)(param_2 + 0x10) + 0xc0) = 0;
        FUN_006ddff0(lVar7,&local_40,1);
        if ((int)local_40 < 0) {
          local_40 = local_40 & 0xffffffff00000000;
        }
        local_40 = FUN_0064d1f0(param_1,&local_40);
        thunk_FUN_041b2403(*puVar1,0x41f,1,&local_40);
        thunk_FUN_041cc6e2(*puVar1,0,local_40 & 0xffffffff,local_40._4_4_,0,0,0x211);
        *(undefined8 *)(param_2 + 0x18) = 1;
      }
    }
  }
  else {
    FUN_00658210(param_1,param_2);
  }
  FUN_00414480(&local_48);
  return;
}

