/* Ghidra address: 00418760 */
/* Ghidra symbol: FUN_00418760 */


longlong FUN_00418760(longlong param_1,ulonglong param_2,int param_3,char param_4)

{
  undefined1 auVar1 [16];
  int iVar2;
  int iVar3;
  short asStack_58 [32];
  
  iVar3 = 0;
  do {
    iVar2 = iVar3;
    auVar1._8_8_ = 0;
    auVar1._0_8_ = param_2;
    asStack_58[iVar2] = SUB162(auVar1 % ZEXT816(10),0) + 0x30;
    iVar3 = iVar2 + 1;
    param_2 = param_2 / 10;
  } while (param_2 != 0);
  if (param_4 != '\0') {
    asStack_58[iVar3] = 0x2d;
    iVar3 = iVar2 + 2;
  }
  if (0xff < param_3) {
    param_3 = 0xff;
  }
  iVar2 = 1;
  if (0 < param_3 - iVar3) {
    do {
      *(undefined1 *)(param_1 + iVar2) = 0x20;
      iVar2 = iVar2 + 1;
    } while (iVar2 <= param_3 - iVar3);
  }
  while (0 < iVar3) {
    iVar3 = iVar3 + -1;
    *(char *)(param_1 + iVar2) = (char)asStack_58[iVar3];
    iVar2 = iVar2 + 1;
  }
  FUN_004153c0(param_1,iVar2 + -1);
  return param_1;
}

