/* Ghidra address: 0118a140 */
/* Ghidra symbol: FUN_0118a140 */


int FUN_0118a140(longlong *param_1)

{
  ushort uVar1;
  int iVar2;
  undefined8 uVar3;
  int local_24;
  undefined8 local_20 [3];
  
  local_20[0] = 0;
  uVar3 = FUN_01190310(param_1);
  FUN_0064dd90(*(undefined8 *)(*(longlong *)PTR_DAT_020044a8 + 0x6d8),local_20);
  iVar2 = FUN_0043fc00(local_20[0]);
  *(int *)(*param_1 + 0x1fa0) = iVar2;
  if (500 < iVar2) {
    *(undefined4 *)(*param_1 + 0x1fa0) = 500;
  }
  *(undefined8 *)(*param_1 + 0x48) = 0x3ff0000000000000;
  if (*(short *)(*param_1 + 0x1fa6) != 0x36) {
    iVar2 = FUN_0118b540(param_1);
    if (iVar2 != 0) {
      local_24 = iVar2 * 10 + 1;
      goto LAB_0118a375;
    }
  }
  uVar1 = *(ushort *)(*param_1 + 0x1fa6);
  if (uVar1 < 0x34) {
    if (uVar1 == 0x33) {
      iVar2 = FUN_0118aff0(param_1);
      if (iVar2 != 0) {
        local_24 = iVar2 * 10 + 5;
        goto LAB_0118a375;
      }
    }
    else if (uVar1 == 0x30) {
      iVar2 = FUN_0118bc70(param_1);
      if (iVar2 != 0) {
        local_24 = iVar2 * 10 + 2;
        goto LAB_0118a375;
      }
    }
    else if (uVar1 == 0x31) {
      iVar2 = FUN_01189970(param_1);
      if (iVar2 != 0) {
        local_24 = iVar2 * 10 + 3;
        goto LAB_0118a375;
      }
    }
    else {
      if (uVar1 != 0x32) goto LAB_0118a339;
      iVar2 = FUN_01189a10(param_1);
      if (iVar2 != 0) {
        local_24 = iVar2 * 10 + 4;
        goto LAB_0118a375;
      }
    }
  }
  else if (uVar1 == 0x34) {
    iVar2 = FUN_0118b0e0(param_1);
    if (iVar2 != 0) {
      local_24 = iVar2 * 10 + 6;
      goto LAB_0118a375;
    }
  }
  else if (uVar1 == 0x35) {
    iVar2 = FUN_0118b8f0(param_1,uVar3);
    if (iVar2 != 0) {
      local_24 = iVar2 * 10 + 7;
      goto LAB_0118a375;
    }
  }
  else {
    if (uVar1 != 0x36) {
LAB_0118a339:
      local_24 = 3;
      goto LAB_0118a375;
    }
    iVar2 = FUN_0118bad0(param_1);
    if (iVar2 != 0) {
      local_24 = iVar2 * 10 + 8;
      goto LAB_0118a375;
    }
  }
  if (*(short *)(*param_1 + 0x1fa6) != 0x36) {
    iVar2 = FUN_01190880(param_1);
    if (iVar2 != 0) {
      local_24 = iVar2 * 10 + 9;
      goto LAB_0118a375;
    }
  }
  local_24 = 0;
LAB_0118a375:
  FUN_00414480(local_20);
  return local_24;
}

