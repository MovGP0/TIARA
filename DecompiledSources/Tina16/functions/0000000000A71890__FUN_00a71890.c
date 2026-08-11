/* Ghidra address: 00a71890 */
/* Ghidra symbol: FUN_00a71890 */


int FUN_00a71890(undefined8 param_1,undefined8 param_2)

{
  short *psVar1;
  short *psVar2;
  longlong lVar3;
  short *psVar4;
  undefined8 local_res8;
  undefined8 local_res10;
  int local_1c;
  
  local_res8 = param_1;
  local_res10 = param_2;
  FUN_00414610(param_1);
  FUN_00414610(local_res10);
  psVar1 = (short *)FUN_00416740(local_res8);
  if (*psVar1 == 0) {
    psVar1 = (short *)0x0;
  }
  else {
    for (psVar1 = (short *)FUN_00416740(local_res10); *psVar1 != 0; psVar1 = psVar1 + 1) {
      psVar2 = (short *)FUN_00416740(local_res8);
      for (psVar4 = psVar1; (*psVar2 != 0 && (*psVar4 == *psVar2)); psVar4 = psVar4 + 1) {
        psVar2 = psVar2 + 1;
      }
      if (*psVar2 == 0) goto code_r0x00a7190e;
    }
    psVar1 = (short *)0x0;
  }
code_r0x00a7190e:
  if (psVar1 == (short *)0x0) {
    local_1c = 0;
  }
  else {
    lVar3 = FUN_00416740(local_res10);
    local_1c = (int)(((longlong)psVar1 - lVar3) / 2) + 1;
  }
  FUN_00414560(&local_res8,2);
  return local_1c;
}

