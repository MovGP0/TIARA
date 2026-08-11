/* Ghidra address: 00ef94a0 */
/* Ghidra symbol: FUN_00ef94a0 */


void FUN_00ef94a0(longlong *param_1,double param_2,longlong param_3)

{
  char cVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  double dVar6;
  double local_70;
  double local_68;
  longlong local_60;
  undefined8 local_58;
  undefined8 local_50 [5];
  
  if ((*param_1 != 0) && (*(char *)(param_3 + 0x92) == '\0')) {
    local_60 = 0;
    local_50[0] = 0;
    local_58 = 0;
    iVar2 = FUN_00ef7f30(*param_1,param_3);
    iVar5 = 0;
    iVar4 = iVar2;
    if (-1 < iVar2 + -1) {
      do {
        FUN_00ef8190(*param_1,iVar5);
        iVar5 = iVar5 + 1;
        iVar4 = iVar4 + -1;
      } while (iVar4 != 0);
    }
    dVar6 = *(double *)(param_3 + 0xb28) + param_2;
    while ((*param_1 != 0 && (*(char *)(param_3 + 0x92) == '\0'))) {
      FUN_00ef9350(*param_1,1,local_50,&local_68,param_3);
      iVar4 = FUN_00ef7f30(local_50[0],param_3);
      uVar3 = FUN_00ef8190(*param_1,iVar4 + 1);
      iVar4 = FUN_00ef7f30(local_50[0],param_3);
      FUN_00ef9410(param_1,0,iVar4 + 2,param_3);
      iVar5 = 0;
      iVar4 = FUN_00ef7f30(*param_1,param_3);
      FUN_019b9a90(dVar6 - (param_2 * (double)iVar4) / (double)iVar2,param_3,1);
      while (iVar4 = FUN_00ef7f30(*param_1,param_3), iVar5 < iVar4) {
        FUN_00ef9350(*param_1,iVar5 + 1,&local_58,&local_70,param_3);
        if ((*(ushort **)(param_3 + 0x28) != (ushort *)0x0) &&
           ((ushort)uVar3 < **(ushort **)(param_3 + 0x28))) {
          iVar4 = FUN_00ef7f30(local_58,param_3);
          uVar3 = FUN_00ef8190(*param_1,iVar5 + iVar4 + 1);
        }
        cVar1 = FUN_00ef8300(local_50[0],local_58,param_3);
        if (cVar1 == '\0') {
          iVar4 = FUN_00ef7f30(local_58,param_3);
          iVar5 = iVar5 + iVar4 + 2;
        }
        else {
          local_68 = local_68 + local_70;
          iVar4 = FUN_00ef7f30(local_58,param_3);
          FUN_00ef9410(param_1,iVar5,iVar4 + 2,param_3);
        }
        FUN_00ef81f0(&local_58);
        FUN_00ef7d60();
      }
      if (local_68 != 0.0) {
        FUN_00ef7f80(&local_60,5,param_3);
        FUN_00ef8230(&local_60,local_50,param_3);
        FUN_00ef7f80(&local_60,uVar3,param_3);
        FUN_019b7640(uVar3,local_68,param_3);
      }
      FUN_00ef81f0(local_50);
      FUN_00ef7d60();
    }
    FUN_00ef81f0(param_1);
    *param_1 = local_60;
    FUN_019b9a90(dVar6 - *(double *)(param_3 + 0xb28),param_3,0);
  }
  return;
}

