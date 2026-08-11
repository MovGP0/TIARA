/* Ghidra address: 006fd890 */
/* Ghidra symbol: FUN_006fd890 */


void FUN_006fd890(undefined8 param_1)

{
  undefined8 uVar1;
  int iVar2;
  int iVar3;
  
  FUN_006fd640(param_1);
  iVar2 = FUN_00654c00();
  iVar3 = 0;
  if (-1 < iVar2 + -1) {
    do {
      uVar1 = FUN_00654bc0(param_1,iVar3);
      FUN_0064cfb0(uVar1,param_1);
      iVar3 = iVar3 + 1;
      iVar2 = iVar2 + -1;
    } while (iVar2 != 0);
  }
  FUN_00651da0(param_1);
  FUN_006fd920(param_1);
  FUN_006fb920(param_1,0);
  return;
}

