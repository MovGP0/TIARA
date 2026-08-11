/* Ghidra address: 00688300 */
/* Ghidra symbol: FUN_00688300 */


void FUN_00688300(longlong param_1,ulonglong param_2)

{
  char cVar1;
  int iVar2;
  uint uVar3;
  undefined8 uVar4;
  uint uVar5;
  
  cVar1 = FUN_0065be20(param_1);
  if (cVar1 != '\0') {
    iVar2 = FUN_0044f080();
    if (iVar2 < 6) {
      uVar5 = *(uint *)(&DAT_01df9be0 + (param_2 & 0xff) * 4);
    }
    else if (*(char *)(param_1 + 0x4fc) == '\x01') {
      uVar5 = *(uint *)(&DAT_01df9be8 + (param_2 & 0xff) * 4);
    }
    else if (*(char *)(param_1 + 0x4fc) == '\x02') {
      uVar5 = *(uint *)(&DAT_01df9bf0 + (param_2 & 0xff) * 4);
    }
    else {
      uVar5 = *(uint *)(&DAT_01df9be0 + (param_2 & 0xff) * 4);
    }
    uVar4 = FUN_0065b870(param_1);
    uVar3 = thunk_FUN_04118143(uVar4,0xfffffff0);
    if ((uVar3 & 0xf) != uVar5) {
      uVar4 = FUN_0065b870(param_1);
      thunk_FUN_041b2403(uVar4,0xf4,(longlong)(int)uVar5,1);
    }
  }
  return;
}

