/* Ghidra address: 016b9f90 */
/* Ghidra symbol: FUN_016b9f90 */


void FUN_016b9f90(longlong param_1,char param_2)

{
  char cVar1;
  byte bVar2;
  ulonglong uVar3;
  bool bVar4;
  undefined2 local_28 [4];
  undefined2 local_20;
  
  if (param_2 != '\0') {
    cVar1 = *(char *)(param_1 + 0x9a0);
    if (cVar1 != param_2) {
      if (cVar1 == '\0') {
        local_20 = CONCAT11(param_2,1);
        local_28[0] = local_20;
        FUN_016a4020(*(undefined8 *)(param_1 + 0x10),0x22,local_28,0xffffffff);
      }
      else {
        local_20 = CONCAT11(cVar1,1);
        local_28[0] = local_20;
        FUN_016a4020(*(undefined8 *)(param_1 + 0x10),0,local_28,0xffffffff);
      }
    }
    bVar2 = param_2 - 0x28;
    if (bVar2 < 0x58) {
      bVar4 = ((byte)(&DAT_016ba0c8)[(longlong)((ulonglong)bVar2 & 0x7f) >> 3] >>
               ((ulonglong)bVar2 & 7) & 1) != 0;
    }
    else {
      bVar4 = false;
    }
    if (bVar4) {
      FUN_0040f800(param_1 + 0x20,&DAT_016ba0d3,0x20);
    }
    if ((byte)(param_2 - 0x28U) < 0x58) {
      uVar3 = ((ulonglong)(byte)(param_2 - 0x28U) & 0x7f) + 0x18;
      bVar4 = ((byte)(&DAT_016ba0f0)[(longlong)uVar3 >> 3] >> (uVar3 & 7) & 1) != 0;
    }
    else {
      bVar4 = false;
    }
    if (bVar4) {
      FUN_0040f7c0(param_1 + 0x20,&DAT_016ba0d3,0x20);
    }
    FUN_016b9d20(param_1);
    FUN_016b9d80(param_1);
  }
  return;
}

