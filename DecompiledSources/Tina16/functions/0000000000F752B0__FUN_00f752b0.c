/* Ghidra address: 00f752b0 */
/* Ghidra symbol: FUN_00f752b0 */


undefined8 FUN_00f752b0(longlong param_1,undefined4 param_2,int *param_3)

{
  char cVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  int iVar4;
  int iVar5;
  
  uVar3 = 0;
  *param_3 = 0;
  iVar5 = *(int *)(param_1 + 0x10);
  iVar4 = 0;
  if (-1 < iVar5 + -1) {
    do {
      uVar2 = FUN_004aeac0(param_1,iVar4);
      cVar1 = FUN_00f6f8f0(uVar2);
      if ((cVar1 != '\0') && (cVar1 = FUN_00f6f9b0(uVar2,param_2), cVar1 != '\0')) {
        *param_3 = *param_3 + 1;
        uVar3 = uVar2;
      }
      iVar4 = iVar4 + 1;
      iVar5 = iVar5 + -1;
    } while (iVar5 != 0);
  }
  return uVar3;
}

