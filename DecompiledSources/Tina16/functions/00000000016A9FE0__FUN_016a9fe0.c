/* Ghidra address: 016a9fe0 */
/* Ghidra symbol: FUN_016a9fe0 */


void FUN_016a9fe0(undefined8 param_1,double param_2,double param_3,double param_4,double param_5,
                 double param_6,int param_7,undefined8 *param_8,double *param_9)

{
  double dVar1;
  double dVar2;
  double local_68;
  double local_60;
  double local_58;
  undefined8 local_50 [9];
  
  if (param_7 < 0) {
    dVar1 = 0.0;
    dVar2 = 0.0;
  }
  else {
    dVar1 = param_3;
    if (param_3 - param_2 <= param_3) {
      dVar1 = param_3 - param_2;
    }
    dVar1 = DAT_01f90cf0 * dVar1 + 3e-07;
    dVar2 = param_2;
    if (param_3 - param_2 <= param_2) {
      dVar2 = param_3 - param_2;
    }
    dVar2 = DAT_01f90cf0 * dVar2 + 3e-07;
  }
  FUN_00dab100(param_1,0,param_3,param_2,0,0,dVar1,dVar2,0x3ff0000000000000,0,local_50,&local_58,
               &local_60,&local_68,0,1);
  *param_8 = local_50[0];
  *param_9 = local_58 * param_4 + local_60 * param_5 + local_68 * param_6;
  return;
}

