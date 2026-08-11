/* Ghidra address: 0184db50 */
/* Ghidra symbol: FUN_0184db50 */


void FUN_0184db50(undefined8 param_1,undefined8 *param_2)

{
  char cVar1;
  int iVar2;
  longlong lVar3;
  undefined8 uVar4;
  code *pcVar5;
  int iVar6;
  undefined8 local_38;
  undefined8 local_30 [2];
  
  local_38 = 0;
  local_30[0] = 0;
  FUN_00410ae0(*param_2,local_30);
  lVar3 = FUN_0184eb50(param_1,local_30[0]);
  if (lVar3 == 0) {
    cVar1 = FUN_00411580(*param_2,&PTR_FUN_007f0370);
    if (cVar1 == '\0') {
      cVar1 = FUN_00411580(*param_2,&PTR_FUN_00488b20);
      if (cVar1 == '\0') {
        cVar1 = FUN_00411580(*param_2,&PTR_FUN_007ec678);
        if (cVar1 == '\0') goto LAB_0184dce7;
        uVar4 = FUN_00410ad0(param_2);
        pcVar5 = (code *)FUN_00411550(param_1,0xffef);
        (*pcVar5)(param_1,uVar4,L"TFrame");
      }
      else {
        uVar4 = FUN_00410ad0(param_2);
        pcVar5 = (code *)FUN_00411550(param_1,0xffef);
        (*pcVar5)(param_1,uVar4,L"TDataModule");
      }
    }
    else {
      uVar4 = FUN_00410ad0(param_2);
      pcVar5 = (code *)FUN_00411550(param_1,0xffef);
      (*pcVar5)(param_1,uVar4,L"TForm");
    }
    FUN_00410ae0(*param_2,&local_38);
    lVar3 = FUN_0184eb50(param_1,local_38);
  }
  iVar2 = FUN_004d3e30();
  iVar6 = 0;
  if (-1 < iVar2 + -1) {
    do {
      uVar4 = FUN_004d3de0(param_2,iVar6);
      FUN_0184aea0(lVar3,uVar4);
      iVar6 = iVar6 + 1;
      iVar2 = iVar2 + -1;
    } while (iVar2 != 0);
  }
  pcVar5 = (code *)FUN_00411550(param_1,0xffe7);
  (*pcVar5)(param_1,param_2[2],param_2);
LAB_0184dce7:
  FUN_00414560(&local_38,2);
  return;
}

