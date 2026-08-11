/* Ghidra address: 00704b00 */
/* Ghidra symbol: FUN_00704b00 */


void FUN_00704b00(longlong *param_1,int *param_2)

{
  undefined1 *puVar1;
  int iVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  longlong lVar5;
  undefined1 auStack_d8 [32];
  undefined4 local_b8;
  undefined1 local_b0;
  undefined1 local_a0 [16];
  undefined1 *local_90;
  int local_88;
  undefined4 local_84;
  undefined1 local_80 [4];
  int local_7c;
  undefined8 local_70;
  undefined1 local_68 [72];
  longlong local_20;
  
  local_90 = auStack_d8;
  puVar1 = auStack_d8;
  if ((*param_2 == 0x20a) &&
     ((**(code **)(*param_1 + 0x150))(param_1,param_2), puVar1 = local_90,
     *(longlong *)(param_2 + 6) == 1)) {
    return;
  }
  local_90 = puVar1;
  if ((char)param_1[0xb0] == '\0') {
    if (*param_2 == 0xf) {
      local_70 = FUN_005fe0d0(&PTR_FUN_005f54e0,1);
      local_20 = *(longlong *)(param_2 + 2);
      if (local_20 == 0) {
        uVar4 = thunk_FUN_041804fe(param_1[0xa9],local_68);
        FUN_005ffb10(local_70,uVar4);
      }
      else {
        FUN_005ffb10(local_70,local_20);
      }
      (**(code **)(*param_1 + 0xe0))(param_1,local_80);
      if ((param_1[0xad] != 0) && (iVar2 = (**(code **)(*param_1 + 0x260))(param_1), iVar2 != -1)) {
        local_84 = 5;
        iVar2 = FUN_004230c0(local_80);
        local_88 = (local_7c + iVar2 / 2) - *(int *)(param_1[0xad] + 0x90) / 2;
        if (local_88 < local_7c) {
          local_88 = local_7c;
        }
        uVar3 = (**(code **)(*param_1 + 0x260))
                          (param_1,(longlong)*(int *)(param_1[0xad] + 0x90) % 2 & 0xffffffff);
        lVar5 = FUN_006a35d0(param_1[0xb1],uVar3);
        if (-1 < *(int *)(lVar5 + 0x30)) {
          uVar3 = (**(code **)(*param_1 + 0x260))(param_1);
          lVar5 = FUN_006a35d0(param_1[0xb1],uVar3);
          iVar2 = (**(code **)(*(longlong *)param_1[0xad] + 0x90))((longlong *)param_1[0xad]);
          if (*(int *)(lVar5 + 0x30) < iVar2) {
            uVar3 = (**(code **)(*param_1 + 0x260))(param_1);
            lVar5 = FUN_006a35d0(param_1[0xb1],uVar3);
            local_b0 = (**(code **)(*param_1 + 0xf0))(param_1);
            local_b8 = *(undefined4 *)(lVar5 + 0x30);
            FUN_007d6c70(param_1[0xad],local_70,local_84,local_88);
          }
        }
      }
      uVar4 = FUN_005ffa40(local_70);
      *(undefined8 *)(param_2 + 2) = uVar4;
      (**(code **)(*param_1 + 0x2b8))(param_1,param_2,param_1[0xa9],param_1[0xaa]);
      if (local_20 == 0) {
        thunk_FUN_0416269d(param_1[0xa9],local_68);
      }
      FUN_005ffb10(local_70,0);
      FUN_00410f20(local_70);
    }
    else if (*param_2 == 0x14) {
      (**(code **)(*param_1 + 0xe0))(param_1,local_a0);
      uVar4 = FUN_005fdb10(param_1[0x66]);
      thunk_FUN_03984819(*(undefined8 *)(param_2 + 2),local_a0,uVar4);
      param_2[6] = 1;
      param_2[7] = 0;
    }
    else {
      (**(code **)(*param_1 + 0x2b8))(param_1,param_2,param_1[0xa9],param_1[0xaa]);
    }
  }
  else {
    (**(code **)(*param_1 + 0x2b8))(param_1,param_2,param_1[0xa9],param_1[0xaa]);
  }
  return;
}

