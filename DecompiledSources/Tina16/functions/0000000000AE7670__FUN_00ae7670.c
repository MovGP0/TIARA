/* Ghidra address: 00ae7670 */
/* Ghidra symbol: FUN_00ae7670 */


longlong * FUN_00ae7670(longlong param_1,longlong *param_2)

{
  short sVar1;
  undefined2 uVar2;
  char cVar3;
  int iVar4;
  longlong lVar5;
  undefined8 uVar6;
  int iVar7;
  undefined1 auStack_68 [40];
  longlong local_40;
  int local_34;
  longlong local_30 [2];
  
  local_30[0] = 0;
  local_40 = 0;
  FUN_00414480(local_30);
  FUN_00ae7600(auStack_68);
  if (*(short *)(param_1 + 0x3e) == 0x23) {
    FUN_00ae7600(auStack_68);
    iVar7 = 0;
    local_34 = 0;
    if ((*(short *)(param_1 + 0x3e) == 0x58) || (*(short *)(param_1 + 0x3e) == 0x78)) {
      FUN_00ae7600(auStack_68);
      do {
        sVar1 = *(short *)(param_1 + 0x3e);
        if ((ushort)(sVar1 - 0x30U) < 10) {
          local_34 = local_34 * 0x10 + (uint)*(ushort *)(param_1 + 0x3e) + -0x30;
        }
        else if ((ushort)(sVar1 - 0x41U) < 0x1a) {
          local_34 = local_34 * 0x10 + (uint)*(ushort *)(param_1 + 0x3e) + -0x37;
        }
        else {
          if (0x19 < (ushort)(sVar1 - 0x61U)) goto LAB_00ae77ac;
          local_34 = local_34 * 0x10 + (uint)*(ushort *)(param_1 + 0x3e) + -0x57;
        }
        iVar7 = iVar7 + 1;
        FUN_00ae7600(auStack_68);
      } while( true );
    }
    while ((ushort)(*(short *)(param_1 + 0x3e) - 0x30U) < 10) {
      local_34 = local_34 * 10 + (uint)*(ushort *)(param_1 + 0x3e) + -0x30;
      iVar7 = iVar7 + 1;
      FUN_00ae7600(auStack_68);
    }
LAB_00ae77ac:
    if (iVar7 < 1) {
      FUN_00414ad0(param_2,local_30[0]);
    }
    else {
      FUN_00ae7510(auStack_68,local_34,0);
      if (*(short *)(param_1 + 0x3e) == 0x3b) {
        FUN_00ae74e0(param_1);
      }
    }
  }
  else {
    FUN_00414480(&local_40);
    iVar7 = 0;
    do {
      sVar1 = *(short *)(param_1 + 0x3e);
      if (((9 < (ushort)(sVar1 - 0x30U)) && (0x19 < (ushort)(sVar1 - 0x41U))) &&
         (0x19 < (ushort)(sVar1 - 0x61U))) break;
      uVar2 = *(undefined2 *)(param_1 + 0x3e);
      iVar4 = 0;
      if (local_40 != 0) {
        iVar4 = *(int *)(local_40 + -4);
      }
      FUN_004169f0(&local_40,iVar4 + 1);
      lVar5 = FUN_00414de0(&local_40);
      iVar4 = 0;
      if (local_40 != 0) {
        iVar4 = *(int *)(local_40 + -4);
      }
      *(undefined2 *)(lVar5 + -2 + (longlong)iVar4 * 2) = uVar2;
      iVar7 = iVar7 + 1;
      FUN_00ae7600(auStack_68);
    } while (iVar7 < 0xb);
    cVar3 = (**(code **)(**(longlong **)PTR_DAT_020041e0 + 0x140))
                      (*(longlong **)PTR_DAT_020041e0,local_40,&local_34);
    if (cVar3 == '\0') {
      cVar3 = FUN_00ae6f00(local_40,&local_34,local_30);
      if (cVar3 == '\0') {
        FUN_00414ad0(param_2,local_30[0]);
      }
      else {
        FUN_00ae7510(auStack_68,local_34,1);
        iVar7 = 0;
        if (local_30[0] != 0) {
          iVar7 = *(int *)(local_30[0] + -4);
        }
        if (0 < iVar7) {
          iVar4 = 0;
          if (*param_2 != 0) {
            iVar4 = *(int *)(*param_2 + -4);
          }
          FUN_004169f0(param_2,iVar4 + iVar7);
          uVar6 = FUN_00416740(local_30[0]);
          lVar5 = FUN_00414de0(param_2);
          FUN_00409a70(uVar6,lVar5 + -2 + (longlong)(iVar4 + 1) * 2,(longlong)(iVar7 * 2));
        }
      }
    }
    else {
      lVar5 = (**(code **)(**(longlong **)PTR_DAT_020041e0 + 0x30))
                        (*(longlong **)PTR_DAT_020041e0,local_34);
      local_34 = *(int *)(lVar5 + 8);
      if (*(short *)(param_1 + 0x3e) == 0x3b) {
        FUN_00ae7510(auStack_68,local_34,1);
        FUN_00ae7600(auStack_68);
      }
      else if (local_34 < 0x100) {
        FUN_00ae7510(auStack_68,local_34,1);
      }
      else {
        FUN_00414ad0(param_2,local_30[0]);
      }
    }
  }
  FUN_00414480(&local_40);
  FUN_00414480(local_30);
  return param_2;
}

