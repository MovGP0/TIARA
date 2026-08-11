/* Ghidra address: 00441820 */
/* Ghidra symbol: FUN_00441820 */


undefined8 FUN_00441820(undefined8 param_1,short *param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar1 = 0;
  if (param_2 != (short *)0x0) {
    iVar1 = *(int *)(param_2 + -2);
  }
  if ((iVar1 < 2) || (param_2[1] != 0x3a)) {
    iVar1 = 0;
    if (param_2 != (short *)0x0) {
      iVar1 = *(int *)(param_2 + -2);
    }
    if (((iVar1 < 2) || (*param_2 != 0x5c)) || (param_2[1] != 0x5c)) {
      FUN_00414480(param_1);
    }
    else {
      iVar2 = 0;
      iVar1 = 3;
      while( true ) {
        iVar3 = 0;
        if (param_2 != (short *)0x0) {
          iVar3 = *(int *)(param_2 + -2);
        }
        if ((iVar3 <= iVar1) || (1 < iVar2)) break;
        if (param_2[iVar1 + -1] == 0x5c) {
          iVar2 = iVar2 + 1;
        }
        if (iVar2 < 2) {
          iVar1 = iVar1 + 1;
        }
      }
      if (param_2[iVar1 + -1] == 0x5c) {
        iVar1 = iVar1 + -1;
      }
      FUN_00416dc0(param_1,param_2,1,iVar1);
    }
  }
  else {
    FUN_00416dc0(param_1,param_2,1,2);
  }
  return param_1;
}

