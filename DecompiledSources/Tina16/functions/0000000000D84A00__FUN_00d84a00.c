/* Ghidra address: 00d84a00 */
/* Ghidra symbol: FUN_00d84a00 */


undefined1 FUN_00d84a00(longlong param_1,byte param_2,byte param_3,undefined8 param_4)

{
  int iVar1;
  undefined1 uVar2;
  longlong lVar3;
  
  uVar2 = 0;
  lVar3 = 0;
  iVar1 = FUN_00416db0(param_4,L"default");
  if (iVar1 != 0) {
    lVar3 = FUN_00d74650(*(undefined8 *)(param_1 + 0x48),param_4);
  }
  if (lVar3 != 0) goto LAB_00d84ad4;
  if (param_2 < 3) {
    if (param_2 == 2) {
      lVar3 = *(longlong *)(*(longlong *)(param_1 + 0x58) + 0x10);
      goto LAB_00d84ad4;
    }
    if (param_2 == 0) {
      lVar3 = *(longlong *)(*(longlong *)(param_1 + 0x58) + 0x10);
      goto LAB_00d84ad4;
    }
    if (param_2 == 1) {
      lVar3 = *(longlong *)(*(longlong *)(param_1 + 0x58) + 0x10);
      goto LAB_00d84ad4;
    }
  }
  else {
    if (param_2 == 4) {
      lVar3 = *(longlong *)(*(longlong *)(param_1 + 0x58) + 0x10);
      goto LAB_00d84ad4;
    }
    if (param_2 == 6) {
      lVar3 = *(longlong *)(*(longlong *)(param_1 + 0x58) + 0x100);
      goto LAB_00d84ad4;
    }
  }
  lVar3 = 0;
LAB_00d84ad4:
  if (lVar3 != 0) {
    if (param_3 < 6) {
      if (param_3 == 5) {
        lVar3 = FUN_00d774e0(lVar3,4);
      }
      else if (param_3 < 3) {
        if (param_3 == 2) {
          lVar3 = FUN_00d774e0(lVar3,2);
        }
        else if (param_3 == 0) {
          lVar3 = FUN_00d774e0(lVar3,9);
        }
        else if (param_3 == 1) {
          lVar3 = FUN_00d774e0(lVar3,1);
        }
      }
      else if (param_3 == 3) {
        lVar3 = FUN_00d774e0(lVar3,3);
      }
      else if (param_3 == 4) {
        lVar3 = FUN_00d774e0(lVar3,5);
      }
    }
    else if (param_3 == 6) {
      lVar3 = FUN_00d774e0(lVar3,5);
    }
    else if (param_3 == 7) {
      lVar3 = FUN_00d774e0(lVar3,6);
    }
    else if (param_3 == 8) {
      lVar3 = FUN_00d774e0(lVar3,7);
    }
    else if (param_3 == 9) {
      lVar3 = FUN_00d774e0(lVar3,8);
    }
    if (lVar3 != 0) {
      uVar2 = *(undefined1 *)(lVar3 + 0xfb);
    }
  }
  return uVar2;
}

