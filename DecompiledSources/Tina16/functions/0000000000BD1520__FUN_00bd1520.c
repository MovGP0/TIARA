/* Ghidra address: 00bd1520 */
/* Ghidra symbol: FUN_00bd1520 */


short * FUN_00bd1520(short *param_1)

{
  char cVar1;
  short sVar2;
  int iVar3;
  undefined8 uVar4;
  short *local_38;
  short *local_30;
  ushort *local_28;
  undefined8 local_20 [2];
  
  local_20[0] = 0;
  local_28 = (ushort *)0x0;
  if (DAT_02019b08 == '\0') {
    local_38 = param_1;
    local_30 = param_1;
    if ((short)((ulonglong)param_1 >> 0x10) == 0) {
      cVar1 = FUN_00bd1e70((ulonglong)param_1 & 0xffffffff);
      if (cVar1 != '\0') {
        FUN_00415400(local_20,(ulonglong)param_1 & 0xffffffff,0);
        uVar4 = FUN_00415ab0(local_20[0]);
        thunk_FUN_04196f1e(uVar4);
        FUN_00416880(&local_28,local_20[0]);
        iVar3 = 0;
        if (local_28 != (ushort *)0x0) {
          iVar3 = *(int *)(local_28 + -2);
        }
        if (iVar3 == 1) {
          local_30 = (short *)(ulonglong)*local_28;
        }
      }
    }
    else {
      for (; *local_38 != 0; local_38 = local_38 + 1) {
        sVar2 = FUN_00bd1520(*local_38);
        *local_38 = sVar2;
      }
    }
  }
  else {
    local_30 = (short *)thunk_FUN_041d6a30(param_1);
  }
  FUN_00414480(&local_28);
  FUN_004144d0(local_20);
  return local_30;
}

