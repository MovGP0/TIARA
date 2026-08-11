/* Ghidra address: 0111dda0 */
/* Ghidra symbol: FUN_0111dda0 */


ulonglong FUN_0111dda0(longlong param_1)

{
  int *piVar1;
  ushort uVar2;
  char cVar3;
  uint uVar4;
  undefined8 unaff_RSI;
  ulonglong uVar5;
  bool bVar6;
  
  uVar2 = *(ushort *)(param_1 + 0x2e);
  if (uVar2 < 0x100) {
    bVar6 = ((byte)(&DAT_0111de60)[(longlong)(ulonglong)uVar2 >> 3] >> ((ulonglong)uVar2 & 7) & 1)
            != 0;
  }
  else {
    bVar6 = false;
  }
  if (bVar6) {
    uVar5 = CONCAT71((int7)((ulonglong)unaff_RSI >> 8),1);
  }
  else {
    uVar2 = *(ushort *)(param_1 + 0x2e);
    if (uVar2 < 0x100) {
      bVar6 = ((byte)(&DAT_0111de80)[(longlong)(ulonglong)uVar2 >> 3] >> ((ulonglong)uVar2 & 7) & 1)
              != 0;
    }
    else {
      bVar6 = false;
    }
    if (bVar6) {
      piVar1 = (int *)(*(longlong *)(param_1 + 0x40) + 0x150);
      *piVar1 = *piVar1 + 1;
      uVar5 = 0;
    }
    else if (*(short *)(param_1 + 0x2e) == 0x2e) {
      uVar5 = 0;
      cVar3 = FUN_0111d670(param_1);
      if (cVar3 != '\0') {
        FUN_0111d4e0(param_1);
      }
    }
    else {
      cVar3 = (**(code **)(**(longlong **)(param_1 + 0x40) + 400))
                        (*(longlong **)(param_1 + 0x40),*(undefined2 *)(param_1 + 0x2e));
      if (cVar3 == '\0') {
        uVar5 = 0;
      }
      else {
        uVar4 = FUN_0111d4e0(param_1);
        uVar5 = (ulonglong)uVar4;
      }
    }
  }
  return uVar5 & 0xffffffff;
}

