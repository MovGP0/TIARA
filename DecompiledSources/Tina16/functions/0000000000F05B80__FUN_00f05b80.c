/* Ghidra address: 00f05b80 */
/* Ghidra symbol: FUN_00f05b80 */


undefined8 * FUN_00f05b80(undefined8 *param_1,double param_2,undefined4 param_3,int param_4)

{
  int iVar1;
  double dVar2;
  double local_130;
  undefined1 local_128 [264];
  undefined8 local_20 [2];
  
  local_20[0] = 0;
  dVar2 = (double)FUN_00c43d20((double)param_4);
  dVar2 = (double)FUN_0040c850(param_2 / dVar2);
  local_130 = param_2;
  if (dVar2 < 0.01) {
    local_130 = 0.0;
  }
  if (local_130 == 0.0) {
    FUN_0040fb60(local_128,0,1,param_3);
    FUN_004169a0(local_20,local_128);
    FUN_00414ad0(param_1,local_20[0]);
  }
  else {
    FUN_0040c850(local_130);
    FUN_00c43d10();
    FUN_00f05380();
    iVar1 = FUN_0040c770();
    dVar2 = (double)FUN_00c43d20((double)iVar1);
    FUN_0040fb60(local_128,local_130 / dVar2,1,param_3);
    FUN_004169a0(local_20,local_128);
    FUN_00414ad0(param_1,local_20[0]);
    if (iVar1 != 0) {
      FUN_0040e780(local_128,iVar1,1);
      FUN_004169a0(local_20,local_128);
      FUN_00416cd0(param_1,3,*param_1,&LAB_00f05d48,local_20[0]);
    }
  }
  FUN_00414480(local_20);
  return param_1;
}

