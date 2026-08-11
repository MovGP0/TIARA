/* Ghidra address: 0080f890 */
/* Ghidra symbol: FUN_0080f890 */


void FUN_0080f890(longlong param_1,char param_2)

{
  char cVar1;
  undefined8 uVar2;
  longlong lVar3;
  longlong lVar4;
  ulonglong uVar5;
  undefined8 uVar6;
  
  if (param_2 != *(char *)(param_1 + 0x193)) {
    *(char *)(param_1 + 0x193) = param_2;
    if (*(longlong *)(param_1 + 0xa8) != 0) {
      cVar1 = FUN_0065be20(*(longlong *)(param_1 + 0xa8));
      if (((cVar1 != '\0') && ((*(ushort *)(*(longlong *)(param_1 + 0xa8) + 0x34) & 0x10) == 0)) &&
         ((*(ushort *)(*(longlong *)(param_1 + 0xa8) + 0x34) & 2) == 0)) {
        if (param_2 == '\0') {
          lVar3 = thunk_FUN_040c88fd();
          lVar4 = FUN_0065b870(*(undefined8 *)(param_1 + 0xa8));
          uVar2 = FUN_0065b870(*(undefined8 *)(param_1 + 0xa8));
          FUN_007f9310(uVar2,0,*(undefined1 *)(*(longlong *)(param_1 + 0xa8) + 0xa9));
          FUN_007f9310(*(undefined8 *)(param_1 + 0x2d0),1,1);
          if (lVar3 == lVar4) {
            uVar2 = FUN_0065b870(*(undefined8 *)(param_1 + 0xa8));
            thunk_FUN_039c4287(uVar2);
          }
        }
        else {
          FUN_007f9310(*(undefined8 *)(param_1 + 0x2d0),0,0);
          uVar2 = FUN_0065b870(*(undefined8 *)(param_1 + 0xa8));
          FUN_007f9310(uVar2,1,*(undefined1 *)(*(longlong *)(param_1 + 0xa8) + 0xa9));
        }
        FUN_0064fca0(*(undefined8 *)(param_1 + 0xa8),0xb033,0,0);
      }
    }
    if (param_2 == '\0') {
      uVar2 = *(undefined8 *)(param_1 + 0x2d0);
      uVar5 = thunk_FUN_04118143(uVar2,0xffffffec);
      thunk_FUN_03c9d277(uVar2,0xffffffec,uVar5 & 0xffffffffffffff7f);
      uVar2 = *(undefined8 *)(param_1 + 0x2d0);
      uVar6 = FUN_00416740(*(undefined8 *)(param_1 + 0x118));
      thunk_FUN_0418144e(uVar2,uVar6);
    }
    else {
      uVar2 = *(undefined8 *)(param_1 + 0x2d0);
      uVar5 = thunk_FUN_04118143(uVar2,0xffffffec);
      thunk_FUN_03c9d277(uVar2,0xffffffec,uVar5 | 0x80);
      thunk_FUN_0418144e(*(undefined8 *)(param_1 + 0x2d0),0);
    }
  }
  return;
}

