/* Ghidra address: 0111d6e0 */
/* Ghidra symbol: FUN_0111d6e0 */


undefined8 FUN_0111d6e0(longlong param_1)

{
  int *piVar1;
  ushort uVar2;
  char cVar3;
  ulonglong uVar4;
  undefined8 uVar5;
  bool bVar6;
  
  uVar2 = *(ushort *)(param_1 + 0x2e);
  if (uVar2 < 0x100) {
    bVar6 = ((byte)(&DAT_0111d7c0)[(longlong)(ulonglong)uVar2 >> 3] >> ((ulonglong)uVar2 & 7) & 1)
            != 0;
    uVar4 = (ulonglong)CONCAT11((char)(uVar2 >> 8),bVar6);
  }
  else {
    uVar4 = 0;
    bVar6 = false;
  }
  if (bVar6) {
    uVar5 = CONCAT71((int7)(uVar4 >> 8),1);
  }
  else {
    uVar2 = *(ushort *)(param_1 + 0x2e);
    if (uVar2 < 0x100) {
      bVar6 = ((byte)(&DAT_0111d7e0)[(longlong)(ulonglong)uVar2 >> 3] >> ((ulonglong)uVar2 & 7) & 1)
              != 0;
    }
    else {
      bVar6 = false;
    }
    if (bVar6) {
      uVar5 = FUN_0111d570(param_1);
    }
    else {
      uVar2 = *(ushort *)(param_1 + 0x2e);
      if (uVar2 < 0x100) {
        bVar6 = ((byte)(&DAT_0111d800)[(longlong)(ulonglong)uVar2 >> 3] >> ((ulonglong)uVar2 & 7) &
                1) != 0;
      }
      else {
        bVar6 = false;
      }
      if (bVar6) {
        piVar1 = (int *)(*(longlong *)(param_1 + 0x40) + 0x150);
        *piVar1 = *piVar1 + 1;
        *(undefined1 *)(*(longlong *)(param_1 + 0x40) + 0x163) = 0xd;
        uVar5 = 0;
      }
      else if (*(short *)(param_1 + 0x2e) == 0x2e) {
        uVar5 = FUN_0111d670(param_1);
      }
      else {
        cVar3 = (**(code **)(**(longlong **)(param_1 + 0x40) + 400))
                          (*(longlong **)(param_1 + 0x40),*(undefined2 *)(param_1 + 0x2e));
        if (cVar3 == '\0') {
          uVar5 = 0;
        }
        else {
          uVar5 = FUN_0111d4e0(param_1);
        }
      }
    }
  }
  return uVar5;
}

