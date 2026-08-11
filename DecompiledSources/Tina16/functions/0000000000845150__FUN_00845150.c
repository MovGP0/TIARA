/* Ghidra address: 00845150 */
/* Ghidra symbol: FUN_00845150 */


undefined8 FUN_00845150(longlong param_1,int *param_2,int param_3,int param_4,int *param_5)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = param_4;
  iVar3 = param_3;
  if (param_3 < param_4) {
    iVar2 = param_3;
    iVar3 = param_4;
  }
  *param_5 = 0;
  if (iVar2 <= iVar3 + -1) {
    iVar3 = ((iVar3 + -1) - iVar2) + 1;
    do {
      iVar1 = (**(code **)(param_2 + 10))(*(undefined8 *)(param_2 + 0xc),iVar2);
      *param_5 = *param_5 + iVar1 + *param_2;
      if (param_2[2] - param_2[1] < *param_5) {
        (**(code **)(**(longlong **)(param_1 + 0xd0) + 0x180))(*(longlong **)(param_1 + 0xd0));
        return 0;
      }
      iVar2 = iVar2 + 1;
      iVar3 = iVar3 + -1;
    } while (iVar3 != 0);
  }
  if (param_3 < param_4) {
    *param_5 = -*param_5;
  }
  return 1;
}

