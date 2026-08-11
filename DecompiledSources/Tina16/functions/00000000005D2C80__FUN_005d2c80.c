/* Ghidra address: 005d2c80 */
/* Ghidra symbol: FUN_005d2c80 */


uint FUN_005d2c80(longlong param_1)

{
  char cVar1;
  int iVar2;
  uint uVar3;
  short *psVar4;
  
  uVar3 = 0;
  iVar2 = 0;
  if (param_1 != 0) {
    iVar2 = *(int *)(param_1 + -4);
  }
  if (2 < iVar2) {
    psVar4 = (short *)FUN_00416740(param_1);
    if ((*psVar4 == DAT_02011f42) && (psVar4[1] == DAT_02011f42)) {
      if (psVar4[2] == 0x3f) {
        cVar1 = FUN_005d2be0(param_1);
        uVar3 = (uint)(cVar1 == '\x02');
      }
      else {
        uVar3 = FUN_005d2d20(psVar4[2]);
      }
    }
  }
  return uVar3;
}

