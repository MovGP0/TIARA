/* Ghidra address: 01cfc340 */
/* Ghidra symbol: FUN_01cfc340 */


void FUN_01cfc340(longlong param_1,longlong param_2,char param_3,char param_4)

{
  byte bVar1;
  undefined1 uVar2;
  longlong lVar3;
  ushort uVar4;
  ushort uVar5;
  
  if (param_2 == 0) {
    return;
  }
  lVar3 = FUN_01d06e20(param_1);
  if (lVar3 != 0) {
    uVar4 = 0;
    if (*(char *)(param_1 + 0xb) == '\0') {
      if (*(char *)(param_1 + 9) != '\0') {
        uVar4 = 4;
      }
    }
    else {
      uVar4 = 2;
    }
    uVar5 = uVar4;
    if ((*(char *)(param_1 + 10) != '\0') && (uVar5 = uVar4 | 1, *(char *)(param_1 + 0xaa) != '\0'))
    {
      uVar5 = uVar4 | 9;
    }
    if (*(char *)(param_2 + 299) == '\0') {
      uVar5 = uVar5 | 0x80;
    }
    if ((param_4 == '\0') || (bVar1 = FUN_01d07330(param_1), 0x7f < bVar1)) {
      uVar2 = 0;
    }
    else {
      uVar2 = 1;
    }
    FUN_00c3f5a0(lVar3,param_2,*(undefined2 *)(param_1 + 0xc),*(undefined2 *)(param_1 + 0x10),uVar5,
                 param_3 == '\0',uVar2,*(undefined1 *)(param_1 + 0xd1),
                 *(undefined1 *)(param_1 + 0xd3));
    return;
  }
  return;
}

