/* Ghidra address: 016a92e0 */
/* Ghidra symbol: FUN_016a92e0 */


longlong FUN_016a92e0(longlong param_1,undefined4 param_2)

{
  bool bVar1;
  int iVar2;
  undefined4 uVar3;
  longlong lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  int iVar7;
  longlong lVar8;
  
  if ((((char)param_2 == '\0') || (param_1 == 0)) || (*(char *)(param_1 + 0x50) == '\0')) {
    bVar1 = false;
  }
  else {
    bVar1 = true;
  }
  if ((param_1 != 0) == bVar1) {
    if (((char)param_2 != '\0') && (param_1 != 0)) {
      param_1 = *(longlong *)(param_1 + 0x18);
    }
  }
  else {
    lVar4 = FUN_004095c0(0xd0);
    FUN_00409a70(param_1,lVar4,0xd0);
    if (*(longlong *)(param_1 + 0x40) != 0) {
      iVar2 = FUN_00414ce0(*(longlong *)(param_1 + 0x40));
      uVar5 = FUN_00409570(iVar2 + 1);
      *(undefined8 *)(lVar4 + 0x40) = uVar5;
      uVar6 = *(undefined8 *)(param_1 + 0x40);
      uVar3 = FUN_00414ce0(uVar6);
      FUN_00442450(uVar5,uVar6,uVar3);
    }
    *(longlong *)(param_1 + 0x18) = lVar4;
    if ((*(int *)(param_1 + 0x4c) == 0x32) && (*(longlong *)(param_1 + 0x60) != 0)) {
      uVar6 = FUN_00409570((longlong)(*(int *)(param_1 + 0x58) << 4));
      *(undefined8 *)(lVar4 + 0x60) = uVar6;
      FUN_00409a70(*(undefined8 *)(param_1 + 0x60),uVar6,(longlong)(*(int *)(param_1 + 0x58) << 4));
      iVar2 = *(int *)(param_1 + 0x54);
      iVar7 = 0;
      if (-1 < iVar2 + -1) {
        do {
          lVar8 = (longlong)iVar7;
          uVar6 = FUN_016a92e0(*(undefined8 *)(*(longlong *)(param_1 + 0x60) + lVar8 * 0x10),0);
          *(undefined8 *)(*(longlong *)(lVar4 + 0x60) + lVar8 * 0x10) = uVar6;
          uVar6 = FUN_016a92e0(*(undefined8 *)(*(longlong *)(param_1 + 0x60) + 8 + lVar8 * 0x10));
          *(undefined8 *)(*(longlong *)(lVar4 + 0x60) + 8 + lVar8 * 0x10) = uVar6;
          iVar7 = iVar7 + 1;
          iVar2 = iVar2 + -1;
        } while (iVar2 != 0);
      }
    }
    *(undefined8 *)(lVar4 + 0x68) = 0;
    uVar6 = FUN_016a92e0(*(undefined8 *)(param_1 + 8),param_2);
    *(undefined8 *)(lVar4 + 8) = uVar6;
    uVar6 = FUN_016a92e0(*(undefined8 *)(param_1 + 0x10),param_2);
    *(undefined8 *)(lVar4 + 0x10) = uVar6;
    param_1 = lVar4;
  }
  return param_1;
}

