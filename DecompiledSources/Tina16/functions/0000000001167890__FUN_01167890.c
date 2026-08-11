/* Ghidra address: 01167890 */
/* Ghidra symbol: FUN_01167890 */


void FUN_01167890(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int *piVar5;
  undefined8 local_168;
  undefined8 local_160;
  undefined1 local_158 [256];
  undefined8 local_58;
  undefined8 local_50;
  undefined1 local_43 [19];
  
  local_160 = 0;
  local_168 = 0;
  local_58 = 0;
  local_50 = 0;
  iVar1 = FUN_004170c0(&DAT_01167a94,DAT_0203add0,1);
  if (0 < param_1) {
    piVar5 = &DAT_0203ade0;
    do {
      iVar2 = 0;
      if (DAT_0203add0 != 0) {
        iVar2 = *(int *)(DAT_0203add0 + -4);
      }
      iVar4 = iVar1 + 1;
      FUN_00416dc0(&local_50,DAT_0203add0,iVar4,iVar2 - iVar1);
      iVar2 = FUN_004170c0(&LAB_01167aa4,local_50,1);
      FUN_00416dc0(&local_58,DAT_0203add0,iVar4,iVar2 + -1);
      FUN_00416910(local_158,local_58,0xff);
      FUN_00415020(local_43,local_158,10);
      FUN_004154b0(&local_160,local_43,0);
      FUN_00416880(&local_168,local_160);
      iVar3 = FUN_0040e860(local_168,&DAT_0203ae80);
      *piVar5 = iVar3;
      if (DAT_0203ae80 != 0) {
        *piVar5 = *(ushort *)(DAT_0203add0 + -2 + (longlong)iVar4 * 2) - 0x37;
      }
      iVar1 = iVar1 + iVar2;
      piVar5 = piVar5 + 1;
      param_1 = param_1 + -1;
    } while (param_1 != 0);
  }
  DAT_0203ae90 = DAT_0203ae90 + 1;
  DAT_0203ae95 = 0;
  FUN_00414480(&local_168);
  FUN_004144d0(&local_160);
  FUN_00414560(&local_58,2);
  return;
}

