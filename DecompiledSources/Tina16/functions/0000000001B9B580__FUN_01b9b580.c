/* Ghidra address: 01b9b580 */
/* Ghidra symbol: FUN_01b9b580 */


void FUN_01b9b580(longlong *param_1,byte *param_2,undefined8 param_3)

{
  int iVar1;
  undefined8 uVar2;
  longlong lVar3;
  char unaff_BL;
  int iVar4;
  byte *pbVar5;
  int iVar6;
  byte local_138 [264];
  
  lVar3 = (ulonglong)*param_2 + 1;
  pbVar5 = local_138;
  for (; lVar3 != 0; lVar3 = lVar3 + -1) {
    *pbVar5 = *param_2;
    param_2 = param_2 + 1;
    pbVar5 = pbVar5 + 1;
  }
  uVar2 = FUN_01b9b460(&DAT_01b9b178,1,local_138,param_3);
  if ((int)param_1[2] == 0) {
    (**(code **)(*param_1 + 0x50))(param_1,uVar2);
  }
  else if ((int)param_1[2] == 1) {
    lVar3 = FUN_01d347d0(param_1,0);
    if (local_138[1] < *(byte *)(lVar3 + 9)) {
      FUN_01d348b0(param_1,0,uVar2);
    }
    else {
      (**(code **)(*param_1 + 0x50))(param_1,uVar2);
    }
  }
  else {
    iVar4 = 0;
    iVar6 = (int)param_1[2];
    iVar1 = 0;
    if (-1 < iVar6 + -1) {
      do {
        iVar4 = iVar1;
        unaff_BL = '\0';
        lVar3 = FUN_01d347d0(param_1,iVar4);
        if (local_138[1] < *(byte *)(lVar3 + 9)) {
          unaff_BL = '\x01';
          break;
        }
        iVar6 = iVar6 + -1;
        iVar1 = iVar4 + 1;
      } while (iVar6 != 0);
    }
    if (unaff_BL == '\0') {
      (**(code **)(*param_1 + 0x50))(param_1,uVar2);
    }
    else {
      FUN_01d348b0(param_1,iVar4,uVar2);
    }
  }
  return;
}

