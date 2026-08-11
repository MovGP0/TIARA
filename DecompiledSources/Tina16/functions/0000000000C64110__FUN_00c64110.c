/* Ghidra address: 00c64110 */
/* Ghidra symbol: FUN_00c64110 */


void FUN_00c64110(int *param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = thunk_FUN_0410f747(0);
  iVar3 = thunk_FUN_0410f747(1);
  iVar1 = param_1[2];
  if (iVar2 < iVar1) {
    param_1[2] = iVar2;
    *param_1 = iVar2 - (iVar1 - *param_1);
  }
  iVar1 = *param_1;
  if (iVar1 < 0) {
    *param_1 = 0;
    param_1[2] = param_1[2] - iVar1;
  }
  iVar1 = param_1[3];
  if (iVar3 < iVar1) {
    param_1[3] = iVar3;
    param_1[1] = iVar3 - (iVar1 - param_1[1]);
  }
  iVar1 = param_1[1];
  if (iVar1 < 0) {
    param_1[1] = 0;
    param_1[3] = param_1[3] - iVar1;
  }
  return;
}

