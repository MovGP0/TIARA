/* Ghidra address: 00c03500 */
/* Ghidra symbol: FUN_00c03500 */


void FUN_00c03500(longlong param_1)

{
  char cVar1;
  code *pcVar2;
  undefined8 uVar3;
  undefined4 uVar4;
  uint uVar5;
  
  if (*(char *)(param_1 + 0x4e2) == '\0') {
    cVar1 = *(char *)(param_1 + 0x5c8);
  }
  else {
    cVar1 = *(char *)(param_1 + 0x5c9);
  }
  if (cVar1 == '\x01') {
    uVar4 = *(undefined4 *)(param_1 + 0x4d4);
    uVar5 = 2;
    *(ulonglong *)(param_1 + 0x5cc) = (ulonglong)(*(int *)(param_1 + 0x52c) - 2) << 0x20;
  }
  else if (cVar1 == '\x02') {
    uVar4 = *(undefined4 *)(param_1 + 0x4d4);
    uVar5 = (*(int *)(param_1 + 0x52c) + -2) / 2;
    *(ulonglong *)(param_1 + 0x5cc) = (ulonglong)uVar5 << 0x20;
  }
  else if (cVar1 == '\x03') {
    uVar4 = *(undefined4 *)(param_1 + 0x4d4);
    uVar5 = *(int *)(param_1 + 0x52c) - 2;
    *(undefined8 *)(param_1 + 0x5cc) = 0;
  }
  else if (cVar1 == '\x04') {
    uVar4 = 2;
    uVar5 = *(int *)(param_1 + 0x52c) + 1;
    *(undefined8 *)(param_1 + 0x5cc) = 0;
  }
  else {
    uVar4 = 2;
    uVar5 = *(int *)(param_1 + 0x52c) - 2;
    *(undefined8 *)(param_1 + 0x5cc) = 0xffffffff;
  }
  *(ushort *)(param_1 + 0x638) = *(ushort *)(param_1 + 0x638) & 0xffef;
  pcVar2 = (code *)FUN_00411550(param_1,0xffb0);
  cVar1 = (*pcVar2)(param_1);
  if ((cVar1 != '\0') || (*(char *)(param_1 + 0x4b0) != '\0')) {
    uVar3 = FUN_0065b870(param_1);
    thunk_FUN_0416d265(uVar3,0,uVar4,uVar5);
    FUN_00bfd020(param_1);
  }
  return;
}

