/* Ghidra address: 007899d0 */
/* Ghidra symbol: FUN_007899d0 */


void FUN_007899d0(longlong *param_1,int *param_2)

{
  int iVar1;
  char cVar2;
  undefined4 uVar3;
  longlong lVar4;
  undefined8 uVar5;
  undefined1 auStack_a8 [32];
  undefined4 local_88;
  undefined4 local_80;
  undefined4 local_78;
  longlong local_68 [2];
  longlong local_58;
  undefined1 *local_50;
  longlong local_40;
  undefined8 local_30;
  undefined8 local_28;
  longlong *local_20;
  
  local_50 = auStack_a8;
  iVar1 = *param_2;
  if (0x210 < iVar1) {
    if (iVar1 - 0x645U < 7) {
      uVar3 = FUN_00788c20(param_1);
      uVar3 = FUN_005fbf20(uVar3);
      thunk_FUN_0412a071(*(undefined8 *)(param_2 + 2),uVar3);
      local_40 = param_1[7];
      uVar3 = FUN_005fbf20(*(undefined4 *)(*(longlong *)(local_40 + 0x18) + 0x28));
      thunk_FUN_03e3a7dc(*(undefined8 *)(param_2 + 2),uVar3);
      uVar5 = FUN_005fdb10(param_1[7]);
      *(undefined8 *)(param_2 + 6) = uVar5;
      return;
    }
    if (iVar1 - 0x67bU < 2) {
      param_2[6] = 0x77;
      param_2[7] = 0;
      return;
    }
    if (iVar1 == 0x67d) {
      param_2[6] = 0;
      param_2[7] = 0;
      local_50 = auStack_a8;
      lVar4 = FUN_007810c0();
      if (lVar4 == 0) {
        return;
      }
      FUN_007810c0();
      uVar5 = FUN_00794c80(DAT_02012548);
      local_20 = (longlong *)FUN_00794dd0(uVar5);
      while (cVar2 = thunk_FUN_00794f43(local_20), cVar2 != '\0') {
        local_30 = FUN_00794e20(local_20);
        cVar2 = FUN_00788100(local_30);
        if (cVar2 == '\0') {
          FUN_00793c90(DAT_02012548,local_68,local_30);
          if ((local_68[0] == param_1[1]) &&
             (cVar2 = FUN_00792690(DAT_02012540,local_30), cVar2 == '\0')) {
            FUN_00793c90(DAT_02012548,local_68,local_30);
            uVar5 = (**(code **)(local_58 + 0x58))(local_58,1,local_30);
            FUN_007922a0(DAT_02012540,local_30,uVar5);
            thunk_FUN_041543e0(local_30,0,0,0x407);
            local_88 = 0;
            local_80 = 0;
            local_78 = 0x27;
            thunk_FUN_041cc6e2(local_30,0,0,0);
            param_2[6] = 1;
            param_2[7] = 0;
          }
        }
      }
      if (local_20 == (longlong *)0x0) {
        return;
      }
      (**(code **)(*local_20 + -0x20))(local_20,1);
      return;
    }
    local_50 = auStack_a8;
    if (iVar1 == 0x67e) {
      *(undefined1 *)(param_1 + 0xb) = 1;
      return;
    }
    goto LAB_00789e0d;
  }
  if (iVar1 != 0x210) {
    if (iVar1 == 0xb) {
      local_50 = auStack_a8;
      uVar5 = FUN_00788400(param_1,param_2);
      *(undefined8 *)(param_2 + 6) = uVar5;
      (**(code **)(*param_1 + -0x40))(param_1,param_2);
      return;
    }
    if (iVar1 == 0x14) {
      local_50 = auStack_a8;
      if ((((0 < *(longlong *)(param_2 + 4)) &&
           (local_50 = auStack_a8, *(longlong *)(param_2 + 2) == 0)) &&
          (((char)param_1[5] != '\0' ||
           ((*(char *)((longlong)param_1 + 0x29) != '\0' ||
            (local_50 = auStack_a8, *(char *)((longlong)param_1 + 0x2d) != '\0')))))) &&
         (local_50 = auStack_a8, **(int **)(param_2 + 4) == 0x93)) {
        **(int **)(param_2 + 4) = 0x11;
        return;
      }
      goto LAB_00789e0d;
    }
    if (iVar1 != 0x127) {
      local_50 = auStack_a8;
      if (iVar1 - 0x132U < 7) {
        local_50 = auStack_a8;
        cVar2 = FUN_00788df0(param_1);
        if (cVar2 == '\0') {
          uVar5 = FUN_00788400(param_1,param_2);
          *(undefined8 *)(param_2 + 6) = uVar5;
          return;
        }
        local_28 = thunk_FUN_041b2403(param_1[1],*param_2 + 0x513,*(undefined8 *)(param_2 + 2),
                                      *(undefined8 *)(param_2 + 4));
        uVar5 = thunk_FUN_041b2403(*(undefined8 *)(param_2 + 4),*param_2 + 0x513,
                                   *(undefined8 *)(param_2 + 2),*(undefined8 *)(param_2 + 4));
        *(undefined8 *)(param_2 + 6) = uVar5;
        if (*(longlong *)(param_2 + 6) != 0) {
          return;
        }
        *(undefined8 *)(param_2 + 6) = local_28;
        return;
      }
      goto LAB_00789e0d;
    }
  }
  local_50 = auStack_a8;
  thunk_FUN_041b2403(param_1[1],0x67d,0,0);
LAB_00789e0d:
  (**(code **)(*param_1 + -0x40))(param_1,param_2);
  if ((char)param_1[8] == '\0') {
    uVar5 = FUN_00788400(param_1,param_2);
    *(undefined8 *)(param_2 + 6) = uVar5;
  }
  else {
    *(undefined1 *)(param_1 + 8) = 0;
  }
  return;
}

