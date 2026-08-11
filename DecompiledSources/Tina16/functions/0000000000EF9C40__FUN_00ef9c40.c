/* Ghidra address: 00ef9c40 */
/* Ghidra symbol: FUN_00ef9c40 */


void FUN_00ef9c40(longlong *param_1,longlong param_2)

{
  char cVar1;
  short sVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  double dVar7;
  double dVar8;
  longlong local_50 [4];
  
  if ((*param_1 != 0) && (*(char *)(param_2 + 0x92) == '\0')) {
    iVar6 = 0;
    local_50[0] = 0;
    while( true ) {
      iVar5 = FUN_00ef7f30(*param_1,param_2);
      if ((iVar5 <= iVar6) || (*(char *)(param_2 + 0x92) != '\0')) break;
      dVar8 = 1.0;
      sVar2 = FUN_00ef8190(*param_1,iVar6);
      if (sVar2 == 5) {
        iVar6 = iVar6 + 1;
      }
      else if (sVar2 == 6) {
        dVar8 = -1.0;
        iVar6 = iVar6 + 1;
      }
      FUN_00ef7f80(local_50,5,param_2);
      iVar5 = FUN_00ef7f30(local_50[0],param_2);
      uVar3 = FUN_00ef8190(*param_1,iVar6);
      while ((sVar2 = (short)uVar3, sVar2 != 5 && (sVar2 != 6))) {
        iVar4 = FUN_00ef7f30(*param_1,param_2);
        if (iVar4 <= iVar6) break;
        if (sVar2 == 1) {
          FUN_00ef7f80(local_50,1,param_2);
        }
        else if ((sVar2 != 2) && (1 < (ushort)(sVar2 - 7U))) {
          cVar1 = FUN_019b6fd0(uVar3,param_2);
          if (cVar1 == '\0') {
            dVar7 = (double)FUN_019b7350(uVar3,param_2);
            dVar8 = dVar8 * dVar7;
          }
          else {
            FUN_00ef7f80(local_50,uVar3,param_2);
          }
        }
        iVar6 = iVar6 + 1;
        uVar3 = FUN_00ef8190(*param_1,iVar6);
        FUN_00ef7d60();
      }
      if (dVar8 == 0.0) {
        iVar4 = FUN_00ef7f30(local_50[0],param_2);
        FUN_00ef9410(local_50,iVar5 + -1,(iVar4 - iVar5) + 1,param_2);
      }
      else {
        iVar4 = FUN_00ef7f30(local_50[0],param_2);
        FUN_00ef9280(local_50,iVar5,iVar4 - iVar5,param_2);
        uVar3 = FUN_019b7220(dVar8,param_2);
        FUN_00ef7f80(local_50,uVar3,param_2);
      }
      FUN_00ef7d60();
    }
    FUN_00ef81f0(param_1);
    *param_1 = local_50[0];
  }
  return;
}

