/* Ghidra address: 0065ad90 */
/* Ghidra symbol: FUN_0065ad90 */


void FUN_0065ad90(undefined8 param_1,undefined4 param_2,undefined4 param_3)

{
  undefined8 uVar1;
  code *pcVar2;
  int iVar3;
  int iVar4;
  
  iVar3 = FUN_00654c00();
  iVar4 = 0;
  if (-1 < iVar3 + -1) {
    do {
      uVar1 = FUN_00654bc0(param_1,iVar4);
      pcVar2 = (code *)FUN_00411550(uVar1,0xffec);
      (*pcVar2)(uVar1,param_2,param_3);
      iVar4 = iVar4 + 1;
      iVar3 = iVar3 + -1;
    } while (iVar3 != 0);
  }
  return;
}

