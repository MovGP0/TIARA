/* Ghidra address: 006fd3d0 */
/* Ghidra symbol: FUN_006fd3d0 */


void FUN_006fd3d0(longlong param_1,longlong param_2)

{
  undefined1 *puVar1;
  int iVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined1 auStack_58 [36];
  int local_34;
  undefined1 *local_30;
  int local_24;
  longlong *local_20;
  
  local_30 = auStack_58;
  if (*(longlong *)(param_1 + 0x628) != param_2) {
    puVar1 = auStack_58;
    if ((*(uint *)(param_1 + 0xa0) & 1) != 0) {
      *(undefined4 *)(param_1 + 0xa0) = 0x2100aa;
      FUN_00655b90(param_1);
      puVar1 = local_30;
    }
    local_30 = puVar1;
    FUN_006fc970(param_1,1);
    if (*(longlong *)(param_1 + 0x628) != 0) {
      local_24 = FUN_006fca40(param_1);
      local_24 = local_24 + -1;
      if (-1 < local_24) {
        do {
          uVar3 = FUN_006fca20(param_1,local_24);
          FUN_00410f20(uVar3);
          local_24 = local_24 + -1;
        } while (local_24 != -1);
      }
    }
    if (*(longlong *)(param_1 + 0x628) != 0) {
      FUN_004d2d90(*(longlong *)(param_1 + 0x628),param_1);
    }
    *(longlong *)(param_1 + 0x628) = param_2;
    if (param_2 != 0) {
      FUN_004d26c0(param_2,param_1);
      iVar2 = FUN_006fca40(param_1);
      local_34 = FUN_007e2ef0(*(undefined8 *)(*(longlong *)(param_1 + 0x628) + 0x80));
      local_34 = local_34 + -1;
      local_24 = iVar2;
      if (iVar2 <= local_34) {
        local_34 = (local_34 - iVar2) + 1;
        do {
          local_20 = (longlong *)FUN_006f9550(&PTR_FUN_006cb0d0,1,param_1);
          (**(code **)(*local_20 + 0x118))(local_20,1);
          FUN_006fa460(local_20,1);
          (**(code **)(*local_20 + 0x130))(local_20,param_1);
          uVar3 = FUN_006fca20(param_1,local_24);
          uVar4 = FUN_007e2f10(*(undefined8 *)(*(longlong *)(param_1 + 0x628) + 0x80),local_24);
          FUN_006fa5f0(uVar3,uVar4);
          local_24 = local_24 + 1;
          local_34 = local_34 + -1;
        } while (local_34 != 0);
      }
      iVar2 = FUN_007e2ef0();
      local_24 = 0;
      if (-1 < iVar2 + -1) {
        do {
          uVar3 = FUN_006fca20(param_1,local_24);
          uVar4 = FUN_007e2f10(*(undefined8 *)(*(longlong *)(param_1 + 0x628) + 0x80),local_24);
          FUN_006fa5f0(uVar3,uVar4);
          local_24 = local_24 + 1;
          iVar2 = iVar2 + -1;
        } while (iVar2 != 0);
      }
    }
  }
  return;
}

