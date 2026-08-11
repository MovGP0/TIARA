/* Ghidra address: 01ccb790 */
/* Ghidra symbol: FUN_01ccb790 */


undefined4 FUN_01ccb790(longlong param_1,undefined8 param_2,double *param_3)

{
  undefined4 uVar1;
  double dVar2;
  
  uVar1 = FUN_01ccb6d0(param_1,param_2,param_3,0);
  dVar2 = (double)FUN_00c44470(*param_3 / *(double *)(*(longlong *)(param_1 + 8) + 0x60),
                               0xc059000000000000);
  *param_3 = dVar2;
  return uVar1;
}

