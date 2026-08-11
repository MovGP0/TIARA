/* Ghidra address: 00806770 */
/* Ghidra symbol: FUN_00806770 */


void FUN_00806770(longlong param_1)

{
  char cVar1;
  uint uVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  
  if (((*(ushort *)(param_1 + 0x34) & 0x10) == 0) && (DAT_01e13fb0 != (code *)0x0)) {
    cVar1 = FUN_0065be20(param_1);
    if (cVar1 != '\0') {
      uVar4 = FUN_0065b870(param_1);
      uVar2 = thunk_FUN_04118143(uVar4,0xffffffec);
      if ((*(char *)(param_1 + 0x630) == '\0') && (*(char *)(param_1 + 0x678) == '\0')) {
        uVar4 = FUN_0065b870(param_1);
        thunk_FUN_03c9d277(uVar4,0xffffffec,(longlong)(int)(uVar2 & 0xfff7ffff));
        uVar4 = FUN_0065b870(param_1);
        thunk_FUN_041543e0(uVar4,0,0,0x485);
      }
      else {
        if ((uVar2 & 0x80000) == 0) {
          uVar4 = FUN_0065b870(param_1);
          thunk_FUN_03c9d277(uVar4,0xffffffec,(longlong)(int)(uVar2 | 0x80000));
        }
        uVar4 = FUN_0065b870(param_1);
        uVar3 = FUN_005fbf20(*(undefined4 *)(param_1 + 0x67c));
        (*DAT_01e13fb0)(uVar4,uVar3,*(undefined1 *)(param_1 + 0x631),
                        *(uint *)(&DAT_01e14f10 + (ulonglong)*(byte *)(param_1 + 0x630) * 4) |
                        *(uint *)(&DAT_01e14f18 + (ulonglong)*(byte *)(param_1 + 0x678) * 4));
      }
    }
  }
  return;
}

