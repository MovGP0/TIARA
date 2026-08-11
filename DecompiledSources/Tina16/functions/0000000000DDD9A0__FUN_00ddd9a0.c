/* Ghidra address: 00ddd9a0 */
/* Ghidra symbol: FUN_00ddd9a0 */


void FUN_00ddd9a0(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  uint uVar2;
  char cVar3;
  undefined4 uVar4;
  undefined8 uVar5;
  undefined1 auStack_78 [32];
  uint local_58;
  uint local_54;
  undefined1 *local_50;
  undefined4 local_44;
  undefined8 local_40;
  int local_34;
  longlong local_30;
  undefined4 *local_28;
  undefined4 *local_20 [2];
  
  local_50 = auStack_78;
  local_40 = 0;
  uVar4 = (**(code **)(*param_2 + 0x18))(param_2,&local_30);
  FUN_006245b0(uVar4);
  cVar3 = FUN_0043e030(local_30,&LAB_00dddd88);
  if (cVar3 == '\0') {
    if (((*(int *)(local_30 + 0x2c) == 3) || ((*(ushort *)(local_30 + 0x3a) & 0x40) != 0)) &&
       ((*(ushort *)(local_30 + 0x3a) & 0x80) != 0)) {
      uVar4 = (**(code **)(*param_2 + 0x40))(param_2,0,&local_44);
      FUN_006245b0(uVar4);
      uVar5 = FUN_0041b800(&local_40);
      uVar4 = (**(code **)(*param_2 + 0x70))(param_2,local_44,uVar5);
      FUN_006245b0(uVar4);
      FUN_00ddd9a0(param_1,local_40);
    }
    local_58 = *(ushort *)(local_30 + 0x32) - 1;
    local_34 = 0;
    uVar2 = (uint)*(ushort *)(local_30 + 0x32);
    if (-1 < (int)local_58) {
      do {
        local_58 = uVar2;
        uVar4 = (**(code **)(*param_2 + 0x30))(param_2,local_34,local_20);
        FUN_006245b0(uVar4);
        FUN_00ddd840(param_1,local_20[0] + 6,param_2,*local_20[0]);
        (**(code **)(*param_2 + 0xa8))(param_2,local_20[0]);
        local_34 = local_34 + 1;
        local_58 = local_58 - 1;
        uVar2 = local_58;
      } while (local_58 != 0);
    }
    local_54 = *(ushort *)(local_30 + 0x30) - 1;
    local_34 = 0;
    uVar2 = (uint)*(ushort *)(local_30 + 0x30);
    if (-1 < (int)local_54) {
      do {
        local_54 = uVar2;
        uVar4 = (**(code **)(*param_2 + 0x28))(param_2,local_34,&local_28);
        FUN_006245b0(uVar4);
        cVar3 = FUN_00ddd7e0(param_1,*local_28);
        if (cVar3 == '\0') {
          iVar1 = local_28[7];
          if (iVar1 == 2) {
            FUN_00ddd840(param_1,local_28 + 0xc,param_2,*local_28);
          }
          else if (iVar1 == 4) {
            FUN_00ddd840(param_1,*(longlong *)(local_28 + 4) +
                                 (longlong)(*(short *)(local_28 + 9) + -1) * 0x20,param_2,*local_28)
            ;
          }
          else if ((iVar1 == 8) &&
                  (*(short *)(*(longlong *)(local_28 + 4) + 8 +
                             (longlong)(*(short *)(local_28 + 9) + -1) * 0x20) == 0x1a)) {
            FUN_00ddd840(param_1,*(undefined8 *)
                                  (*(longlong *)(local_28 + 4) +
                                  (longlong)(*(short *)(local_28 + 9) + -1) * 0x20),param_2,
                         *local_28);
          }
        }
        (**(code **)(*param_2 + 0xa0))(param_2,local_28);
        local_34 = local_34 + 1;
        local_54 = local_54 - 1;
        uVar2 = local_54;
      } while (local_54 != 0);
    }
    (**(code **)(*param_2 + 0x98))(param_2,local_30);
  }
  else {
    FUN_00dddd40(0,local_50);
  }
  FUN_0041b800(&local_40);
  return;
}

