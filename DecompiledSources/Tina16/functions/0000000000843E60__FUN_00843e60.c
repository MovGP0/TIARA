/* Ghidra address: 00843e60 */
/* Ghidra symbol: FUN_00843e60 */


int FUN_00843e60(undefined8 param_1,int *param_2,int param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  iVar2 = 0;
  if (param_3 < param_2[6]) {
    iVar3 = 0;
    iVar2 = 0;
  }
  else {
    iVar3 = param_2[7];
    if (iVar3 <= param_3) {
      iVar2 = param_2[1];
    }
  }
  if (iVar3 <= param_3 + -1) {
    iVar4 = ((param_3 + -1) - iVar3) + 1;
    do {
      iVar1 = (**(code **)(param_2 + 10))(*(undefined8 *)(param_2 + 0xc),iVar3);
      iVar2 = iVar2 + iVar1 + *param_2;
      if (param_2[3] < iVar2) {
        return 0;
      }
      iVar3 = iVar3 + 1;
      iVar4 = iVar4 + -1;
    } while (iVar4 != 0);
  }
  return iVar2;
}

