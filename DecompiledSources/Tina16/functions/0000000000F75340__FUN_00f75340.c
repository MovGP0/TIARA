/* Ghidra address: 00f75340 */
/* Ghidra symbol: FUN_00f75340 */


undefined8 FUN_00f75340(longlong param_1,undefined8 *param_2,undefined8 param_3)

{
  char cVar1;
  undefined8 uVar2;
  int iVar3;
  int iVar4;
  undefined8 local_40 [2];
  
  local_40[0] = *param_2;
  iVar4 = *(int *)(param_1 + 0x10);
  iVar3 = 0;
  if (-1 < iVar4 + -1) {
    do {
      uVar2 = FUN_004aeac0(param_1,iVar3);
      cVar1 = FUN_00f6f8f0(uVar2);
      if ((cVar1 != '\0') && (cVar1 = FUN_00f6f790(uVar2,local_40,param_3), cVar1 != '\0')) {
        return uVar2;
      }
      iVar3 = iVar3 + 1;
      iVar4 = iVar4 + -1;
    } while (iVar4 != 0);
  }
  return 0;
}

