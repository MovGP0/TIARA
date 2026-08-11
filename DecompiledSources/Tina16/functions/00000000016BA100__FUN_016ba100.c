/* Ghidra address: 016ba100 */
/* Ghidra symbol: FUN_016ba100 */


undefined8 FUN_016ba100(longlong param_1,char param_2)

{
  byte bVar1;
  ulonglong uVar2;
  undefined8 uVar3;
  bool bVar4;
  
  uVar3 = 0;
  if ((param_2 != '\0') && (*(char *)(param_1 + 0x9a0) == param_2)) {
    bVar1 = param_2 - 0x28;
    if (bVar1 < 0x58) {
      bVar4 = ((byte)(&DAT_016ba1e8)[(longlong)((ulonglong)bVar1 & 0x7f) >> 3] >>
               ((ulonglong)bVar1 & 7) & 1) != 0;
    }
    else {
      bVar4 = false;
    }
    if (bVar4) {
      FUN_0040f800(param_1 + 0x20,&DAT_016ba1f3,0x20);
    }
    if ((byte)(param_2 - 0x28U) < 0x58) {
      uVar2 = ((ulonglong)(byte)(param_2 - 0x28U) & 0x7f) + 0x18;
      bVar4 = ((byte)(&DAT_016ba210)[(longlong)uVar2 >> 3] >> (uVar2 & 7) & 1) != 0;
    }
    else {
      bVar4 = false;
    }
    if (bVar4) {
      FUN_0040f7c0(param_1 + 0x20,&DAT_016ba1f3,0x20);
    }
    FUN_016b9d20(param_1);
    FUN_016b9d80(param_1);
    uVar3 = 1;
  }
  return uVar3;
}

