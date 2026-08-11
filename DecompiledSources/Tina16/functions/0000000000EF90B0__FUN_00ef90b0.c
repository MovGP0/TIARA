/* Ghidra address: 00ef90b0 */
/* Ghidra symbol: FUN_00ef90b0 */


void FUN_00ef90b0(longlong *param_1,longlong param_2)

{
  short sVar1;
  int iVar2;
  undefined4 uVar3;
  ulonglong unaff_RSI;
  undefined7 uVar4;
  int iVar5;
  int iVar6;
  longlong local_50;
  undefined8 local_48;
  undefined8 local_40 [2];
  
  if ((*param_1 != 0) && (*(char *)(param_2 + 0x92) == '\0')) {
    local_50 = 0;
    local_40[0] = 0;
    local_48 = 0;
    iVar6 = 0;
    iVar2 = FUN_00ef7f30(*param_1,param_2);
    while (((iVar6 < iVar2 && (iVar6 < iVar2)) && (*(char *)(param_2 + 0x92) == '\0'))) {
      while (sVar1 = FUN_00ef8190(*param_1,iVar6), sVar1 != 3) {
        iVar6 = iVar6 + 1;
      }
      sVar1 = FUN_00ef8190(*param_1,iVar6 + -1);
      uVar4 = (undefined7)(unaff_RSI >> 8);
      if ((sVar1 == 6) && (0 < iVar6)) {
        unaff_RSI = CONCAT71(uVar4,0xff);
      }
      else {
        unaff_RSI = CONCAT71(uVar4,1);
      }
      iVar5 = iVar6 + 1;
      uVar3 = FUN_00ef8190(*param_1,iVar5);
      sVar1 = (short)uVar3;
      while (sVar1 != 4) {
        FUN_00ef7f80(local_40,uVar3,param_2);
        iVar5 = iVar5 + 1;
        uVar3 = FUN_00ef8190(*param_1,iVar5);
        FUN_00ef7d60();
        sVar1 = (short)uVar3;
      }
      while( true ) {
        iVar6 = iVar5 + 1;
        sVar1 = FUN_00ef8190(*param_1,iVar6);
        if (((sVar1 != 7) || (iVar2 <= iVar6)) || (*(char *)(param_2 + 0x92) != '\0')) break;
        iVar5 = iVar5 + 3;
        while (sVar1 = FUN_00ef8190(*param_1,iVar5), sVar1 != 4) {
          uVar3 = FUN_00ef8190(*param_1,iVar5);
          FUN_00ef7f80(&local_48,uVar3,param_2);
          iVar5 = iVar5 + 1;
          FUN_00ef7d60();
        }
        FUN_00ef8e30(local_40,&local_48,unaff_RSI & 0xffffffff,param_2);
        unaff_RSI = CONCAT71((int7)(unaff_RSI >> 8),1);
      }
      FUN_00ef8230(&local_50,local_40,param_2);
      FUN_00ef81f0(local_40);
    }
    FUN_00ef81f0(param_1);
    *param_1 = local_50;
  }
  return;
}

