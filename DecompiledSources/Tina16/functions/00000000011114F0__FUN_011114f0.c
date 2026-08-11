/* Ghidra address: 011114f0 */
/* Ghidra symbol: FUN_011114f0 */


void FUN_011114f0(longlong *param_1,undefined8 param_2)

{
  byte bVar1;
  int iVar2;
  int iVar3;
  bool bVar4;
  
  *(short *)(param_1 + 0xb7) = (short)param_2;
  bVar1 = 0;
  do {
    if (bVar1 < 0x10) {
      bVar4 = ((ushort)((int)CONCAT62((int6)((ulonglong)param_2 >> 0x10),1) << (bVar1 & 0x1f)) &
              *(ushort *)(param_1 + 0xb7)) != 0;
    }
    else {
      bVar4 = false;
    }
    param_2 = 0;
    *(bool *)(param_1 + (ulonglong)bVar1 * 4 + 0x93) = bVar4;
    bVar1 = bVar1 + 1;
  } while (bVar1 != 9);
  if ((*(ushort *)((longlong)param_1 + 0x34) & 0x40) == 0) {
    FUN_011115d0(param_1);
  }
  else {
    iVar2 = FUN_011115a0(param_1);
    iVar3 = (int)param_1[0x13] + -1;
    *(int *)((longlong)param_1 + 0x5d4) = iVar3 / iVar2 + 1;
    (**(code **)(*param_1 + 0x180))(param_1,(longlong)iVar3 % (longlong)iVar2 & 0xffffffff);
  }
  return;
}

