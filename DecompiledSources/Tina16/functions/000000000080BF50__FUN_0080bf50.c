/* Ghidra address: 0080bf50 */
/* Ghidra symbol: FUN_0080bf50 */


void FUN_0080bf50(longlong param_1)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  
  iVar1 = FUN_007f9220(*(undefined8 *)(param_1 + 0x2d0));
  if (iVar1 != 0) {
    return;
  }
  FUN_0080abe0(param_1);
  if (*(char *)(param_1 + 0x193) == '\0') {
    thunk_FUN_04161dbd(*(undefined8 *)(param_1 + 0x2d0));
  }
  *(undefined1 *)(param_1 + 0x78) = 1;
  FUN_0080aef0(param_1,0);
  if (*(char *)(param_1 + 0x193) == '\0') {
    FUN_0080e580(param_1,*(undefined8 *)(param_1 + 0x2d0));
    if ((*(longlong *)(param_1 + 0xa8) != 0) &&
       ((*(char *)(param_1 + 0xd3) != '\0' ||
        (*(char *)(*(longlong *)(param_1 + 0xa8) + 0xa9) != '\0')))) {
      uVar4 = FUN_0065b870(*(undefined8 *)(param_1 + 0xa8));
      iVar1 = thunk_FUN_03986dbd(uVar4);
      if (iVar1 != 0) {
        uVar4 = FUN_0065b870(*(undefined8 *)(param_1 + 0xa8));
        uVar2 = FUN_007fd7d0(*(undefined8 *)(param_1 + 0xa8));
        uVar3 = FUN_007fd800(*(undefined8 *)(param_1 + 0xa8));
        thunk_FUN_041cc6e2(*(undefined8 *)(param_1 + 0x2d0),uVar4,uVar2,uVar3,
                           *(undefined4 *)(*(longlong *)(param_1 + 0xa8) + 0x98),0,0x40);
        thunk_FUN_03e425c0(*(undefined8 *)(param_1 + 0x2d0),0x112,0xf020,0);
        goto LAB_0080c0be;
      }
    }
    FUN_008099d0(*(undefined8 *)(param_1 + 0x2d0),6);
  }
  else if (*(longlong *)(param_1 + 0xa8) == 0) {
    *(undefined1 *)(param_1 + 0x1a8) = 1;
  }
  else {
    uVar4 = FUN_0065b870(*(longlong *)(param_1 + 0xa8));
    FUN_0080e580(param_1,uVar4);
    FUN_00800700(*(undefined8 *)(param_1 + 0xa8),1);
  }
LAB_0080c0be:
  if (*(longlong *)(param_1 + 0x280) != 0) {
    (**(code **)(param_1 + 0x280))(*(undefined8 *)(param_1 + 0x288),param_1);
  }
  return;
}

