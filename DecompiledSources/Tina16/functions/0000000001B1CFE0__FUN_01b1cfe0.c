/* Ghidra address: 01b1cfe0 */
/* Ghidra symbol: FUN_01b1cfe0 */


void FUN_01b1cfe0(longlong *param_1,int param_2,undefined4 param_3)

{
  char cVar1;
  int iVar2;
  undefined8 uVar3;
  int iVar4;
  
  if (((longlong)param_2 & param_1[3]) != 0) {
    (**(code **)(*param_1 + 0x128))(param_1,param_3);
  }
  cVar1 = FUN_004113d0(param_1,&PTR_FUN_00640c18);
  if (cVar1 != '\0') {
    iVar2 = FUN_00654c00();
    iVar4 = 0;
    if (-1 < iVar2 + -1) {
      do {
        uVar3 = FUN_00654bc0(param_1,iVar4);
        FUN_01b1cfe0(uVar3,param_2,param_3);
        iVar4 = iVar4 + 1;
        iVar2 = iVar2 + -1;
      } while (iVar2 != 0);
    }
  }
  return;
}

