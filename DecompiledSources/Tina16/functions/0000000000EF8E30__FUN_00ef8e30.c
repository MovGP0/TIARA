/* Ghidra address: 00ef8e30 */
/* Ghidra symbol: FUN_00ef8e30 */


void FUN_00ef8e30(undefined8 *param_1,undefined8 *param_2,char param_3,undefined8 param_4)

{
  char cVar1;
  short sVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  char local_49;
  undefined8 local_40 [2];
  
  local_40[0] = 0;
  iVar6 = 0;
  iVar3 = FUN_00ef7f30(*param_1,param_4);
  iVar4 = FUN_00ef7f30(*param_2,param_4);
  if (0 < iVar3) {
    do {
      iVar7 = 0;
      sVar2 = FUN_00ef8190(*param_1,iVar6);
      if ((sVar2 == 5) || (sVar2 == 6)) {
        if (sVar2 == 5) {
          local_49 = '\x01';
        }
        else {
          local_49 = -1;
        }
        iVar6 = iVar6 + 1;
      }
      else {
        local_49 = '\x01';
      }
      sVar2 = FUN_00ef8190(*param_2,0);
      if ((sVar2 == 5) || (sVar2 == 6)) {
        if (sVar2 == 5) {
          cVar1 = '\x01';
        }
        else {
          cVar1 = -1;
        }
        iVar7 = 1;
      }
      else {
        cVar1 = '\x01';
      }
      if ((int)local_49 * (int)cVar1 * (int)param_3 == 1) {
        FUN_00ef7f80(local_40,5,param_4);
      }
      else {
        FUN_00ef7f80(local_40,6,param_4);
      }
      for (; iVar7 < iVar4; iVar7 = iVar7 + 1) {
        uVar5 = FUN_00ef8190(*param_2,iVar7);
        while ((((short)uVar5 != 5 && ((short)uVar5 != 6)) && (iVar7 < iVar4))) {
          FUN_00ef7f80(local_40,uVar5,param_4);
          iVar7 = iVar7 + 1;
          uVar5 = FUN_00ef8190(*param_2,iVar7);
        }
        FUN_00ef7f80(local_40,7,param_4);
        iVar8 = 0;
        uVar5 = FUN_00ef8190(*param_1,iVar6);
        while ((((short)uVar5 != 5 && ((short)uVar5 != 6)) && (iVar8 + iVar6 < iVar3))) {
          FUN_00ef7f80(local_40,uVar5,param_4);
          iVar8 = iVar8 + 1;
          uVar5 = FUN_00ef8190(*param_1,iVar6 + iVar8);
        }
        if (iVar7 < iVar4) {
          sVar2 = FUN_00ef8190(*param_2,iVar7);
          if (sVar2 == 5) {
            cVar1 = '\x01';
          }
          else {
            cVar1 = -1;
          }
          if ((int)local_49 * (int)cVar1 * (int)param_3 == 1) {
            FUN_00ef7f80(local_40,5,param_4);
          }
          else {
            FUN_00ef7f80(local_40,6,param_4);
          }
        }
      }
      for (; ((sVar2 = FUN_00ef8190(*param_1,iVar6), sVar2 != 5 &&
              (sVar2 = FUN_00ef8190(*param_1,iVar6), sVar2 != 6)) && (iVar6 < iVar3));
          iVar6 = iVar6 + 1) {
      }
    } while (iVar6 < iVar3);
  }
  FUN_00ef81f0(param_1);
  FUN_00ef81f0(param_2);
  *param_1 = local_40[0];
  return;
}

