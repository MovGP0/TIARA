/* Ghidra address: 007fddc0 */
/* Ghidra symbol: FUN_007fddc0 */


void FUN_007fddc0(undefined8 param_1,undefined8 param_2,int param_3)

{
  undefined8 uVar1;
  code *pcVar2;
  char cVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  
  cVar3 = FUN_004113d0(param_2,&PTR_FUN_0063d930);
  if (cVar3 == '\0') {
    iVar4 = FUN_00654c00(param_1);
    iVar7 = -1;
    iVar5 = FUN_004d3e30();
    iVar6 = 0;
    if (-1 < iVar5 + -1) {
      do {
        uVar1 = FUN_004d3de0(param_1,iVar6);
        pcVar2 = (code *)FUN_00411550(uVar1,0xfff0);
        cVar3 = (*pcVar2)(uVar1);
        if ((cVar3 == '\0') && (iVar7 = iVar7 + 1, iVar7 == param_3 - iVar4)) {
          FUN_004d3e50(param_2,iVar6);
          return;
        }
        iVar6 = iVar6 + 1;
        iVar5 = iVar5 + -1;
      } while (iVar5 != 0);
    }
  }
  else {
    FUN_0065c310(param_1,param_2,param_3);
  }
  return;
}

