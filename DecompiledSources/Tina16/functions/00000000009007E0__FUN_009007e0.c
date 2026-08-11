/* Ghidra address: 009007e0 */
/* Ghidra symbol: FUN_009007e0 */


ulonglong FUN_009007e0(undefined2 *param_1)

{
  char cVar1;
  uint uVar2;
  undefined8 unaff_RSI;
  ulonglong uVar3;
  int iVar4;
  int iVar5;
  
  uVar3 = CONCAT71((int7)((ulonglong)unaff_RSI >> 8),1);
  uVar2 = 0;
  if (param_1 != (undefined2 *)0x0) {
    uVar2 = *(uint *)(param_1 + -2) >> 1;
  }
  if (uVar2 == 0) {
    uVar3 = 0;
  }
  else {
    cVar1 = FUN_009007b0(*param_1);
    if (cVar1 == '\0') {
      uVar3 = 0;
    }
    else {
      uVar2 = 0;
      if (param_1 != (undefined2 *)0x0) {
        uVar2 = *(uint *)(param_1 + -2) >> 1;
      }
      iVar4 = 2;
      if (1 < uVar2) {
        iVar5 = uVar2 - 1;
        do {
          cVar1 = FUN_00900780(param_1[(longlong)iVar4 + -1]);
          if (cVar1 == '\0') {
            uVar3 = 0;
            break;
          }
          iVar4 = iVar4 + 1;
          iVar5 = iVar5 + -1;
        } while (iVar5 != 0);
      }
    }
  }
  return uVar3 & 0xffffffff;
}

