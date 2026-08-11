/* Ghidra address: 0111d980 */
/* Ghidra symbol: FUN_0111d980 */


undefined8 FUN_0111d980(longlong param_1)

{
  int *piVar1;
  ushort uVar2;
  char cVar3;
  undefined8 uVar4;
  bool bVar5;
  
  uVar2 = *(ushort *)(param_1 + 0x2e);
  if (uVar2 < 0x100) {
    bVar5 = ((byte)(&DAT_0111da50)[(longlong)(ulonglong)uVar2 >> 3] >> ((ulonglong)uVar2 & 7) & 1)
            != 0;
  }
  else {
    bVar5 = false;
  }
  if (bVar5) {
    uVar4 = FUN_0111d570(param_1);
  }
  else {
    uVar2 = *(ushort *)(param_1 + 0x2e);
    if (uVar2 < 0x100) {
      bVar5 = ((byte)(&DAT_0111da70)[(longlong)(ulonglong)uVar2 >> 3] >> ((ulonglong)uVar2 & 7) & 1)
              != 0;
    }
    else {
      bVar5 = false;
    }
    if (bVar5) {
      uVar4 = 1;
    }
    else if (*(short *)(param_1 + 0x2e) == 0x2e) {
      cVar3 = FUN_0111d670(param_1);
      if ((cVar3 == '\0') && (cVar3 = FUN_0111d4e0(param_1), cVar3 == '\0')) {
        return 0;
      }
      uVar4 = 1;
    }
    else {
      uVar2 = *(ushort *)(param_1 + 0x2e);
      if (uVar2 < 0x100) {
        bVar5 = ((byte)(&DAT_0111da90)[(longlong)(ulonglong)uVar2 >> 3] >> ((ulonglong)uVar2 & 7) &
                1) != 0;
      }
      else {
        bVar5 = false;
      }
      if (bVar5) {
        piVar1 = (int *)(*(longlong *)(param_1 + 0x40) + 0x150);
        *piVar1 = *piVar1 + 1;
        uVar4 = 0;
      }
      else {
        uVar4 = FUN_0111d4e0(param_1);
      }
    }
  }
  return uVar4;
}

