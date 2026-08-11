/* Ghidra address: 00f58fe0 */
/* Ghidra symbol: FUN_00f58fe0 */


double FUN_00f58fe0(longlong param_1,undefined8 param_2,int param_3)

{
  double dVar1;
  undefined4 uVar2;
  int iVar3;
  
  if (param_3 == -1) {
    uVar2 = FUN_01b0fa20(param_1,0);
    iVar3 = FUN_01b0fa40(param_1,0,uVar2);
  }
  else {
    iVar3 = FUN_01b0fa40(param_1,0);
  }
  if (iVar3 == 0) {
    dVar1 = *(double *)(param_1 + 0x60);
  }
  else {
    dVar1 = *(double *)(param_1 + 0x68);
  }
  return 1.0 / dVar1;
}

