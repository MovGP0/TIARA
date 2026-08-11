/* Ghidra address: 01aa1210 */
/* Ghidra symbol: FUN_01aa1210 */


void FUN_01aa1210(undefined8 param_1,longlong param_2,int param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined1 local_338 [776];
  
  FUN_01d03160(param_1);
  FUN_01d3da40(local_338,param_1);
  if (param_3 == 1) {
    iVar1 = FUN_01d3e250(local_338,1);
  }
  else {
    iVar1 = FUN_01d3e250(local_338,2);
  }
  iVar4 = 1;
  if (0 < iVar1) {
    do {
      iVar2 = FUN_01d3e360(param_1,iVar4,param_3);
      if (iVar2 != 4) {
        iVar3 = FUN_01d3e170(local_338,iVar4,param_3,2);
        *(char *)(param_2 + -1 + (longlong)iVar3) = (char)iVar2;
      }
      iVar4 = iVar4 + 1;
      iVar1 = iVar1 + -1;
    } while (iVar1 != 0);
  }
  return;
}

