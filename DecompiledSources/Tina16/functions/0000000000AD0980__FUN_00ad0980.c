/* Ghidra address: 00ad0980 */
/* Ghidra symbol: FUN_00ad0980 */


undefined1 FUN_00ad0980(longlong param_1,longlong *param_2)

{
  undefined1 uVar1;
  short sVar2;
  short sVar3;
  int iVar4;
  longlong lVar5;
  undefined8 uVar6;
  int iVar7;
  undefined1 local_41;
  longlong local_40 [2];
  
  local_40[0] = 0;
  local_41 = 0;
  sVar2 = *(short *)(*(longlong *)(*(longlong *)(*(longlong *)(param_1 + 0x40) + 0xb0) + 0x50) +
                    0x20);
  if ((sVar2 == 0x22) || (sVar2 == 0x27)) {
    local_41 = 1;
    uVar1 = *(undefined1 *)
             (*(longlong *)(*(longlong *)(*(longlong *)(param_1 + 0x40) + 0xb0) + 0x50) + 0x44);
    FUN_00ad1170(*(undefined8 *)(*(longlong *)(*(longlong *)(param_1 + 0x40) + 0xb0) + 0x50));
    while ((sVar3 = *(short *)(*(longlong *)
                                (*(longlong *)(*(longlong *)(param_1 + 0x40) + 0xb0) + 0x50) + 0x20)
           , sVar3 != sVar2 && (sVar3 != 0))) {
      if (sVar3 == 0x26) {
        lVar5 = *(longlong *)
                 (*(longlong *)(*(longlong *)(*(longlong *)(param_1 + 0x40) + 0xb0) + 0x50) + 0xe8);
        lVar5 = FUN_004aeac0(lVar5,*(int *)(lVar5 + 0x10) + -1);
        FUN_00ae7160(*(undefined8 *)(*(longlong *)(*(longlong *)(param_1 + 0x40) + 0xb0) + 0x50),
                     local_40,*(undefined4 *)(lVar5 + 0x70));
        lVar5 = local_40[0];
        iVar4 = 0;
        if (local_40[0] != 0) {
          iVar4 = *(int *)(local_40[0] + -4);
        }
        if (0 < iVar4) {
          iVar7 = 0;
          if (*param_2 != 0) {
            iVar7 = *(int *)(*param_2 + -4);
          }
          FUN_004169f0(param_2,iVar7 + iVar4);
          uVar6 = FUN_00416740(lVar5);
          lVar5 = FUN_00414de0(param_2);
          FUN_00409a70(uVar6,lVar5 + -2 + (longlong)(iVar7 + 1) * 2,(longlong)(iVar4 * 2));
        }
      }
      else {
        if (sVar3 == 0xd) {
          iVar4 = 0;
          if (*param_2 != 0) {
            iVar4 = *(int *)(*param_2 + -4);
          }
          FUN_004169f0(param_2,iVar4 + 1);
          lVar5 = FUN_00414de0(param_2);
          iVar4 = 0;
          if (*param_2 != 0) {
            iVar4 = *(int *)(*param_2 + -4);
          }
          *(undefined2 *)(lVar5 + -2 + (longlong)iVar4 * 2) = 0x20;
        }
        else {
          iVar4 = 0;
          if (*param_2 != 0) {
            iVar4 = *(int *)(*param_2 + -4);
          }
          FUN_004169f0(param_2,iVar4 + 1);
          lVar5 = FUN_00414de0(param_2);
          iVar4 = 0;
          if (*param_2 != 0) {
            iVar4 = *(int *)(*param_2 + -4);
          }
          *(short *)(lVar5 + -2 + (longlong)iVar4 * 2) = sVar3;
        }
        FUN_00ad1170(*(undefined8 *)(*(longlong *)(*(longlong *)(param_1 + 0x40) + 0xb0) + 0x50));
      }
    }
    if (*(short *)(*(longlong *)(*(longlong *)(*(longlong *)(param_1 + 0x40) + 0xb0) + 0x50) + 0x20)
        == sVar2) {
      FUN_00ad1170(*(undefined8 *)(*(longlong *)(*(longlong *)(param_1 + 0x40) + 0xb0) + 0x50));
    }
    *(undefined1 *)
     (*(longlong *)(*(longlong *)(*(longlong *)(param_1 + 0x40) + 0xb0) + 0x50) + 0x44) = uVar1;
  }
  FUN_00414480(local_40);
  return local_41;
}

