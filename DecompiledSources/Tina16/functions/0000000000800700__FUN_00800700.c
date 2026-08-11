/* Ghidra address: 00800700 */
/* Ghidra symbol: FUN_00800700 */


void FUN_00800700(longlong param_1,byte param_2)

{
  char cVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  ulonglong uVar4;
  
  if ((*(byte *)(param_1 + 0x4d2) != param_2) &&
     (*(byte *)(param_1 + 0x4d2) = param_2, (*(ushort *)(param_1 + 0x34) & 0x10) == 0)) {
    if (*(char *)(param_1 + 0x391) == '\0') {
      cVar1 = FUN_0065be20(param_1);
      if ((cVar1 != '\0') && (*(char *)(param_1 + 0x4d2) == '\x02')) {
        uVar2 = FUN_0065b870(param_1);
        uVar3 = FUN_0065b870(param_1);
        uVar4 = thunk_FUN_04118143(uVar3,0xfffffff0);
        thunk_FUN_03c9d277(uVar2,0xfffffff0,uVar4 | 0x1000000);
      }
    }
    else {
      uVar2 = FUN_0065b870(param_1);
      thunk_FUN_03ab0e43(uVar2,*(undefined4 *)(&DAT_01e14a88 + (ulonglong)param_2 * 4));
    }
  }
  return;
}

