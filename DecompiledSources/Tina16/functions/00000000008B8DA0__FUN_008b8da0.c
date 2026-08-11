/* Ghidra address: 008b8da0 */
/* Ghidra symbol: FUN_008b8da0 */


void FUN_008b8da0(longlong param_1,longlong *param_2,longlong param_3)

{
  undefined4 uVar1;
  int iVar2;
  longlong lVar3;
  undefined8 uVar4;
  longlong *local_88 [2];
  longlong *local_78 [2];
  longlong local_68;
  longlong local_30;
  
  lVar3 = (**(code **)(*param_2 + 0x90))(param_2);
  if (lVar3 != 0) {
    uVar4 = (**(code **)(*param_2 + 0x90))(param_2);
    FUN_008b8ea0(uVar4,param_2);
  }
  if (param_3 == 0) {
    local_88[0] = param_2;
    iVar2 = FUN_00597e50(*(longlong *)(param_1 + 0x18) + 8,local_88);
    if (0 < iVar2) {
      lVar3 = *(longlong *)(param_1 + 0x18);
      if (*(uint *)(lVar3 + 0x10) <= iVar2 - 1U) {
        FUN_00594f90();
      }
      lVar3 = *(longlong *)(*(longlong *)(lVar3 + 8) + (longlong)(int)(iVar2 - 1U) * 8);
      param_2[6] = lVar3;
      *(longlong **)(lVar3 + 0x20) = param_2;
    }
  }
  else {
    local_68 = *(longlong *)(param_1 + 0x18) + 8;
    local_30 = param_3;
    uVar1 = FUN_00596a10(local_68,&local_30);
    local_78[0] = param_2;
    FUN_00599f70(*(longlong *)(param_1 + 0x18) + 8,uVar1,local_78);
    param_2[4] = param_3;
    param_2[6] = *(longlong *)(param_3 + 0x30);
    *(longlong **)(param_3 + 0x30) = param_2;
    if (param_2[6] != 0) {
      *(longlong **)(param_2[6] + 0x20) = param_2;
    }
  }
  param_2[5] = param_1;
  return;
}

