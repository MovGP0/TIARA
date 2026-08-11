/* Ghidra address: 0144b710 */
/* Ghidra symbol: FUN_0144b710 */


void FUN_0144b710(double *param_1,undefined8 param_2,longlong param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  double dVar4;
  double local_78;
  double local_70;
  undefined8 local_68;
  undefined8 local_60;
  undefined8 local_58;
  undefined8 local_50;
  double local_48;
  double local_40;
  
  local_48 = *param_1;
  local_40 = param_1[1];
  if (*(char *)(param_3 + 0x92) == '\0') {
    iVar1 = FUN_0040c770(*(undefined8 *)(param_3 + 0x368));
    iVar2 = FUN_0040c770(*(undefined8 *)(param_3 + 0xd8));
    local_58 = 0x3ff0000000000000;
    local_50 = 0;
    local_68 = 0x3ff0000000000000;
    local_60 = 0;
    iVar3 = 1;
    if (0 < iVar1) {
      do {
        FUN_019b7940(param_3);
        local_78 = *(double *)(param_3 + 0x368 + (longlong)iVar3 * 8);
        local_70 = *(double *)(param_3 + 0x4b0 + (longlong)iVar3 * 8);
        FUN_00c44500(&local_48,&local_78,&local_78);
        FUN_01449560(&local_58,&local_78,&local_58,param_3);
        iVar3 = iVar3 + 1;
        iVar1 = iVar1 + -1;
      } while (iVar1 != 0);
    }
    local_78 = *(double *)(param_3 + 0xa0);
    local_70 = 0.0;
    FUN_01449560(&local_58,&local_78,&local_58,param_3);
    iVar1 = 1;
    if (0 < iVar2) {
      do {
        FUN_019b7940(param_3);
        local_78 = *(double *)(param_3 + 0xd8 + (longlong)iVar1 * 8);
        local_70 = *(double *)(param_3 + 0x220 + (longlong)iVar1 * 8);
        dVar4 = (double)FUN_0040c850(local_78 - local_48);
        if ((1e-100 < dVar4) || (dVar4 = (double)FUN_0040c850(local_70 - local_40), 1e-100 < dVar4))
        {
          FUN_00c44500(&local_48,&local_78,&local_78);
          FUN_01449560(&local_68,&local_78,&local_68,param_3);
        }
        iVar1 = iVar1 + 1;
        iVar2 = iVar2 + -1;
      } while (iVar2 != 0);
    }
    FUN_01449560(&local_48,&local_48,&local_78,param_3);
    FUN_01449560(&local_68,&local_78,&local_68,param_3);
    FUN_01449410(&local_58,&local_68,param_2,param_3);
  }
  return;
}

