/* Ghidra address: 007ddfc0 */
/* Ghidra symbol: FUN_007ddfc0 */


void FUN_007ddfc0(undefined8 param_1,int param_2,byte param_3)

{
  longlong lVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = FUN_007e2ef0();
  iVar3 = 0;
  if (-1 < iVar2 + -1) {
    do {
      if (iVar3 < param_2) {
        lVar1 = FUN_007e2f10(param_1,iVar3);
        if (param_3 < *(byte *)(lVar1 + 0x87)) {
          FUN_007dc5c0(PTR_PTR_02001ef0);
        }
      }
      else {
        lVar1 = FUN_007e2f10(param_1,iVar3);
        if (*(byte *)(lVar1 + 0x87) < param_3) {
          lVar1 = FUN_007e2f10(param_1,iVar3);
          *(byte *)(lVar1 + 0x87) = param_3;
        }
      }
      iVar3 = iVar3 + 1;
      iVar2 = iVar2 + -1;
    } while (iVar2 != 0);
  }
  return;
}

