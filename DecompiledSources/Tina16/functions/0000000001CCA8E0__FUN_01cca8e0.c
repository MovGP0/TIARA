/* Ghidra address: 01cca8e0 */
/* Ghidra symbol: FUN_01cca8e0 */


undefined4 FUN_01cca8e0(longlong param_1,undefined8 param_2,double *param_3)

{
  undefined4 uVar1;
  double dVar2;
  
  uVar1 = FUN_01cc7e10(param_1,param_2,param_3,0);
  if (*param_3 <= 0.0) {
    dVar2 = (double)FUN_00c44470(0xc059000000000000,0xc059000000000000);
    *param_3 = dVar2;
  }
  else {
    dVar2 = (double)FUN_00c44470(*(double *)(*(longlong *)(param_1 + 8) + 0x30) / *param_3,
                                 0x4059000000000000);
    *param_3 = dVar2;
  }
  return uVar1;
}

