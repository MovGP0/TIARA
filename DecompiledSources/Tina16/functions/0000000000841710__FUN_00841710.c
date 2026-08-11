/* Ghidra address: 00841710 */
/* Ghidra symbol: FUN_00841710 */


int FUN_00841710(undefined8 param_1,int *param_2,int param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  iVar3 = param_2[1];
  if (param_3 < iVar3) {
    iVar2 = 0;
    iVar4 = param_2[6];
    iVar3 = 0;
  }
  else {
    iVar2 = param_2[7];
    iVar4 = param_2[8];
  }
  if (iVar2 <= iVar4 + -1) {
    iVar4 = ((iVar4 + -1) - iVar2) + 1;
    do {
      iVar1 = (**(code **)(param_2 + 10))(*(undefined8 *)(param_2 + 0xc),iVar2);
      iVar3 = iVar3 + iVar1 + *param_2;
      if (param_3 < iVar3) {
        return iVar2;
      }
      iVar2 = iVar2 + 1;
      iVar4 = iVar4 + -1;
    } while (iVar4 != 0);
  }
  return -1;
}

