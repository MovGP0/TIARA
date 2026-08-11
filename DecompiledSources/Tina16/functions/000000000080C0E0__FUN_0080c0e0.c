/* Ghidra address: 0080c0e0 */
/* Ghidra symbol: FUN_0080c0e0 */


void FUN_0080c0e0(longlong param_1)

{
  longlong lVar1;
  int iVar2;
  int iVar3;
  undefined8 uVar4;
  
  iVar2 = FUN_007f9220(*(undefined8 *)(param_1 + 0x2d0));
  if (iVar2 == 0) {
    return;
  }
  *(undefined1 *)(param_1 + 0x78) = 0;
  thunk_FUN_04161dbd(*(undefined8 *)(param_1 + 0x2d0));
  if (*(longlong *)(param_1 + 0xa8) == 0) goto LAB_0080c22d;
  if (*(char *)(param_1 + 0x193) != '\0') {
    uVar4 = FUN_0065b870(*(longlong *)(param_1 + 0xa8));
    thunk_FUN_03ab0e43(uVar4,9);
    uVar4 = FUN_0065b870(*(undefined8 *)(param_1 + 0xa8));
    FUN_0080ad20(param_1,uVar4,0);
    goto LAB_0080c22d;
  }
  if ((*(char *)(param_1 + 0xd3) == '\0') &&
     (*(char *)(*(longlong *)(param_1 + 0xa8) + 0xa9) == '\0')) {
LAB_0080c1a7:
    FUN_008099d0(*(undefined8 *)(param_1 + 0x2d0),9);
  }
  else {
    uVar4 = FUN_0065b870(*(undefined8 *)(param_1 + 0xa8));
    iVar2 = thunk_FUN_03986dbd(uVar4);
    if (iVar2 == 0) goto LAB_0080c1a7;
    thunk_FUN_03e425c0(*(undefined8 *)(param_1 + 0x2d0),0x112,0xf120,0);
  }
  iVar2 = thunk_FUN_0410f747(0);
  iVar3 = thunk_FUN_0410f747(1);
  thunk_FUN_041cc6e2(*(undefined8 *)(param_1 + 0x2d0),0,(longlong)iVar2 / 2 & 0xffffffff,
                     (longlong)iVar3 / 2 & 0xffffffff,0,0,0x40);
  FUN_0080ad20(param_1,*(undefined8 *)(param_1 + 0x2d0),1);
LAB_0080c22d:
  lVar1 = *(longlong *)(param_1 + 0xa8);
  if (((lVar1 != 0) && (*(char *)(lVar1 + 0x4d2) == '\x01')) && (*(char *)(lVar1 + 0xa9) == '\0')) {
    FUN_00800700(lVar1,0);
    FUN_008059a0(*(undefined8 *)(param_1 + 0xa8));
  }
  FUN_0080ac80(param_1);
  FUN_0080aef0(param_1,1);
  if (*(longlong *)(DAT_02012670 + 200) != 0) {
    uVar4 = FUN_0065b870(*(longlong *)(DAT_02012670 + 200));
    thunk_FUN_03c244fb(uVar4);
  }
  if (*(longlong *)(param_1 + 0x290) != 0) {
    (**(code **)(param_1 + 0x290))(*(undefined8 *)(param_1 + 0x298),param_1);
  }
  return;
}

