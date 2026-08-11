/* Ghidra address: 00746a40 */
/* Ghidra symbol: FUN_00746a40 */


void FUN_00746a40(longlong param_1,longlong param_2)

{
  longlong lVar1;
  undefined8 uVar2;
  int iVar3;
  int iVar4;
  undefined1 auStack_78 [32];
  undefined8 local_58;
  undefined1 *local_50;
  longlong local_48;
  longlong local_40;
  longlong local_38;
  longlong local_30;
  int local_20;
  int local_1c;
  
  local_50 = auStack_78;
  local_58 = 0;
  FUN_00747590(param_2,*(undefined8 *)(param_1 + 0x38));
  *(undefined4 *)(param_2 + 0x24) = 0xffffffff;
  *(undefined4 *)(param_2 + 0x20) = 0xffffffff;
  if ((*(int *)(param_1 + 0x48) == -1) && (-1 < *(int *)(param_1 + 0x40))) {
    lVar1 = FUN_00747100(*(undefined8 *)(param_1 + 0x30));
    local_30 = *(longlong *)(lVar1 + 0x4b0);
    iVar3 = *(int *)(*(longlong *)(local_30 + 0x10) + 0x10);
    local_1c = 0;
    if (-1 < iVar3 + -1) {
      do {
        lVar1 = FUN_00746ff0(*(undefined8 *)(param_1 + 0x30),*(undefined4 *)(param_1 + 0x40),
                             local_1c);
        if (lVar1 == 0) {
          FUN_00747750(param_2,local_1c);
          FUN_00747640(param_2,*(undefined4 *)(param_1 + 0x40));
          goto LAB_00746ea1;
        }
        local_1c = local_1c + 1;
        iVar3 = iVar3 + -1;
      } while (iVar3 != 0);
    }
    *(undefined4 *)(param_1 + 0x40) = 0xffffffff;
  }
  if ((*(int *)(param_1 + 0x40) == -1) && (-1 < *(int *)(param_1 + 0x48))) {
    lVar1 = FUN_00747100(*(undefined8 *)(param_1 + 0x30));
    local_38 = *(longlong *)(lVar1 + 0x4b8);
    iVar3 = *(int *)(*(longlong *)(local_38 + 0x10) + 0x10);
    local_1c = 0;
    if (-1 < iVar3 + -1) {
      do {
        lVar1 = FUN_00746ff0(*(undefined8 *)(param_1 + 0x30),local_1c,
                             *(undefined4 *)(param_1 + 0x48));
        if (lVar1 == 0) {
          FUN_00747640(param_2,local_1c);
          FUN_00747750(param_2,*(undefined4 *)(param_1 + 0x48));
          goto LAB_00746ea1;
        }
        local_1c = local_1c + 1;
        iVar3 = iVar3 + -1;
      } while (iVar3 != 0);
    }
    *(undefined4 *)(param_1 + 0x48) = 0xffffffff;
  }
  if ((-1 < *(int *)(param_1 + 0x40)) && (-1 < *(int *)(param_1 + 0x48))) {
    lVar1 = FUN_00746ff0(*(undefined8 *)(param_1 + 0x30),*(undefined4 *)(param_1 + 0x40),
                         *(undefined4 *)(param_1 + 0x48));
    if (lVar1 == 0) {
      FUN_00747640(param_2,*(undefined4 *)(param_1 + 0x40));
      FUN_00747750(param_2,*(undefined4 *)(param_1 + 0x48));
      goto LAB_00746ea1;
    }
    *(undefined4 *)(param_1 + 0x40) = 0xffffffff;
    *(undefined4 *)(param_1 + 0x48) = 0xffffffff;
  }
  if ((*(int *)(param_1 + 0x48) == -1) && (*(int *)(param_1 + 0x40) == -1)) {
    lVar1 = FUN_00747100(*(undefined8 *)(param_1 + 0x30));
    local_40 = *(longlong *)(lVar1 + 0x4b0);
    iVar3 = *(int *)(*(longlong *)(local_40 + 0x10) + 0x10);
    local_20 = 0;
    if (-1 < iVar3 + -1) {
      do {
        lVar1 = FUN_00747100(*(undefined8 *)(param_1 + 0x30));
        local_48 = *(longlong *)(lVar1 + 0x4b8);
        iVar4 = *(int *)(*(longlong *)(local_48 + 0x10) + 0x10);
        local_1c = 0;
        if (-1 < iVar4 + -1) {
          do {
            lVar1 = FUN_00746ff0(*(undefined8 *)(param_1 + 0x30),local_1c,local_20);
            if (lVar1 == 0) {
              FUN_00747750(param_2,local_20);
              FUN_00747640(param_2,local_1c);
              goto LAB_00746ea1;
            }
            local_1c = local_1c + 1;
            iVar4 = iVar4 + -1;
          } while (iVar4 != 0);
        }
        local_20 = local_20 + 1;
        iVar3 = iVar3 + -1;
      } while (iVar3 != 0);
    }
  }
  if ((*(int *)(param_2 + 0x24) == -1) || (*(int *)(param_2 + 0x20) == -1)) {
    lVar1 = FUN_00747100(*(undefined8 *)(param_1 + 0x30));
    if ((lVar1 == 0) ||
       (lVar1 = FUN_00747100(*(undefined8 *)(param_1 + 0x30)), *(char *)(lVar1 + 0x4c9) == '\x02'))
    {
      FUN_0041ddd0(&local_58,PTR_PTR_02004998);
      uVar2 = FUN_0044d490(&PTR_FUN_00737098,1,local_58);
      FUN_004134c0(uVar2);
    }
    else {
      lVar1 = FUN_00747100(*(undefined8 *)(param_1 + 0x30));
      if (*(char *)(lVar1 + 0x4c9) == '\0') {
        uVar2 = FUN_00747100(*(undefined8 *)(param_1 + 0x30));
        FUN_00744d90(uVar2);
      }
      else {
        uVar2 = FUN_00747100(*(undefined8 *)(param_1 + 0x30));
        FUN_00744bf0(uVar2);
      }
      FUN_00746a40(param_1,param_2);
    }
  }
LAB_00746ea1:
  FUN_00414480(&local_58);
  return;
}

