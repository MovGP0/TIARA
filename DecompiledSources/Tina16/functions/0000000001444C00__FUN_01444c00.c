/* Ghidra address: 01444c00 */
/* Ghidra symbol: FUN_01444c00 */


void FUN_01444c00(longlong param_1,undefined8 *param_2,undefined8 *param_3,double param_4,
                 undefined8 param_5)

{
  short sVar1;
  int iVar2;
  int iVar3;
  undefined8 uVar4;
  bool bVar5;
  undefined8 local_38;
  undefined8 local_30;
  
  iVar3 = 1;
  local_30 = 0;
  local_38 = 0;
  while (((double)iVar3 <= *(double *)(param_1 + 0x138) &&
         (*(double *)(param_1 + 0x138 + (longlong)iVar3 * 8) != param_4))) {
    iVar3 = iVar3 + 1;
  }
  if (iVar3 < 0x15) {
    if (*(double *)(param_1 + 0x138) <= (double)iVar3 &&
        (double)iVar3 != *(double *)(param_1 + 0x138)) {
      *(double *)(param_1 + 0x138) = (double)iVar3;
      *(double *)(param_1 + 0x138 + (longlong)iVar3 * 8) = param_4;
    }
    iVar2 = FUN_019b5d30(&DAT_01444f3c,*param_3,param_5);
    if (0 < iVar2) {
      iVar2 = FUN_019b5d30(&DAT_01444f3c,*param_3,param_5);
      FUN_019b6010(&local_38,*param_3,0,iVar2 + 1,param_5);
      FUN_019b6f10(&local_30,local_38,param_5);
      iVar2 = FUN_019b5d30(&DAT_01444f3c,*param_3,param_5);
      FUN_019b5f00(param_3,0,iVar2 + 1,param_5);
    }
    while ((1 < iVar3 && (iVar2 = FUN_019b5d30(&DAT_01444f4c,*param_3,param_5), 0 < iVar2))) {
      iVar2 = FUN_019b5d30(&DAT_01444f4c,*param_3,param_5);
      FUN_019b6010(&local_38,*param_3,0,iVar2 + 1,param_5);
      FUN_019b6f10(&local_30,local_38,param_5);
      iVar2 = FUN_019b5d30(&DAT_01444f4c,*param_3,param_5);
      FUN_019b5f00(param_3,0,iVar2 + 1,param_5);
      iVar3 = iVar3 + -1;
    }
    if (iVar3 == 1) {
      FUN_019b6f10(&local_30,*param_2,param_5);
      uVar4 = 0;
      sVar1 = FUN_019b60b0(*param_3,1,param_5);
      if ((ushort)(sVar1 - 0x28U) < 8) {
        bVar5 = ((int)CONCAT71((int7)((ulonglong)uVar4 >> 8),1) << ((byte)(sVar1 - 0x28U) & 0x1f) &
                0x28U) != 0;
      }
      else {
        bVar5 = false;
      }
      if ((!bVar5) && (iVar3 = FUN_019b5ce0(*param_3,param_5), 0 < iVar3)) {
        FUN_019b6e50(&local_30,&LAB_01444f60,param_5);
      }
      FUN_019b6f10(&local_30,*param_3,param_5);
      FUN_019b6320(param_3);
      *param_3 = local_30;
      if (*(double *)(param_1 + 0x138) == 0.0) {
        *(undefined8 *)(param_1 + 0x138) = 0x3ff0000000000000;
      }
    }
    else {
      FUN_019b6f10(&local_30,*param_3,param_5);
      FUN_019b6e50(&local_30,&DAT_01444f4c,param_5);
      FUN_019b6f10(&local_30,*param_2,param_5);
      FUN_019b6320(param_3);
      *param_3 = local_30;
      *(double *)(param_1 + 0x138) = *(double *)(param_1 + 0x138) + 1.0;
    }
    FUN_019b6320(&local_38);
  }
  else {
    FUN_00ef4260(6,param_5);
  }
  return;
}

