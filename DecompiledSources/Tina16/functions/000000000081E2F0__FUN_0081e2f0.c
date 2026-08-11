/* Ghidra address: 0081e2f0 */
/* Ghidra symbol: FUN_0081e2f0 */


void FUN_0081e2f0(undefined8 param_1,int *param_2)

{
  undefined8 uVar1;
  
  FUN_00813880(param_1,param_2);
  if ((*param_2 - 0x114U < 2) && ((short)param_2[2] == 8)) {
    uVar1 = FUN_00786090(param_1);
    thunk_FUN_041cc6e2(uVar1,0,0,0,0,0,0x37);
  }
  return;
}

