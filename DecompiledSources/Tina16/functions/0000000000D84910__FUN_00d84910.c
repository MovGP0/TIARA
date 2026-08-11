/* Ghidra address: 00d84910 */
/* Ghidra symbol: FUN_00d84910 */


undefined8 FUN_00d84910(longlong param_1,byte param_2,undefined8 param_3,undefined8 param_4)

{
  int iVar1;
  undefined8 uVar2;
  longlong lVar3;
  
  lVar3 = 0;
  iVar1 = FUN_00416db0(param_4,L"default");
  if (iVar1 != 0) {
    lVar3 = FUN_00d74650(*(undefined8 *)(param_1 + 0x48),param_4);
  }
  if (lVar3 != 0) goto LAB_00d849ba;
  if (param_2 < 3) {
    if (param_2 == 2) {
      lVar3 = **(longlong **)(param_1 + 0x58);
      goto LAB_00d849ba;
    }
    if (param_2 == 0) {
      lVar3 = **(longlong **)(param_1 + 0x58);
      goto LAB_00d849ba;
    }
    if (param_2 == 1) {
      lVar3 = **(longlong **)(param_1 + 0x58);
      goto LAB_00d849ba;
    }
  }
  else {
    if (param_2 == 4) {
      lVar3 = **(longlong **)(param_1 + 0x58);
      goto LAB_00d849ba;
    }
    if (param_2 == 6) {
      lVar3 = *(longlong *)(*(longlong *)(param_1 + 0x58) + 0xf0);
      goto LAB_00d849ba;
    }
  }
  lVar3 = 0;
LAB_00d849ba:
  if (lVar3 == 0) {
    uVar2 = 0;
  }
  else {
    FUN_00d77b90(lVar3,param_3);
    uVar2 = FUN_00d77220(lVar3);
  }
  return uVar2;
}

