/* Ghidra address: 00ce6d70 */
/* Ghidra symbol: FUN_00ce6d70 */


undefined8 FUN_00ce6d70(undefined8 param_1,longlong param_2)

{
  char cVar1;
  int iVar2;
  undefined8 uVar3;
  
  cVar1 = FUN_00879070(param_1,param_2);
  if (cVar1 == '\0') {
    cVar1 = FUN_00879090(param_1,param_2);
    if (cVar1 == '\0') {
      uVar3 = 0;
    }
    else {
      cVar1 = FUN_00879100(param_2,&DAT_00ce6de8);
      if (cVar1 == '\0') {
        iVar2 = 0;
        if (param_2 != 0) {
          iVar2 = *(int *)(param_2 + -4);
        }
        uVar3 = FUN_00879280(param_1,iVar2 + 1,0x2f);
      }
      else {
        uVar3 = 1;
      }
    }
  }
  else {
    uVar3 = 1;
  }
  return uVar3;
}

