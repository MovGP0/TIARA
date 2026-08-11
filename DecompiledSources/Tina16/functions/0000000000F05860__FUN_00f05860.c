/* Ghidra address: 00f05860 */
/* Ghidra symbol: FUN_00f05860 */


undefined8 * FUN_00f05860(undefined8 *param_1,double param_2,undefined4 param_3,int param_4)

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
  iVar1 = FUN_00f06000(local_130);
  dVar2 = (double)FUN_00c43d20((double)((iVar1 / 3) * 3),(longlong)iVar1 % 3 & 0xffffffff);
  FUN_0040fb60(local_128,local_130 / dVar2,1,param_3);
  FUN_004169a0(local_20,local_128);
  FUN_00414ad0(param_1,local_20[0]);
  if (iVar1 < -0xc) {
    FUN_0040e780(local_128,iVar1,1);
    FUN_004169a0(local_20,local_128);
    FUN_00416cd0(param_1,3,*param_1,&DAT_00f05af8,local_20[0]);
  }
  else if (iVar1 == -0xc) {
    FUN_00416ad0(param_1,&DAT_00f05b08);
  }
  else if (iVar1 == -9) {
    FUN_00416ad0(param_1,&DAT_00f05b18);
  }
  else if (iVar1 == -6) {
    FUN_00416ad0(param_1,&DAT_00f05b28);
  }
  else if (iVar1 == -3) {
    FUN_00416ad0(param_1,&DAT_00f05b38);
  }
  else if (iVar1 == 0) {
    FUN_00416ad0(param_1,0);
  }
  else if (iVar1 == 3) {
    FUN_00416ad0(param_1,&DAT_00f05b48);
  }
  else if (iVar1 == 6) {
    FUN_00416ad0(param_1,&DAT_00f05b58);
  }
  else if (iVar1 == 9) {
    FUN_00416ad0(param_1,&DAT_00f05b68);
  }
  else if (iVar1 == 0xc) {
    FUN_00416ad0(param_1,&LAB_00f05b78);
  }
  else if (0xc < iVar1) {
    FUN_0040e780(local_128,iVar1,1);
    FUN_004169a0(local_20,local_128);
    FUN_00416cd0(param_1,3,*param_1,&DAT_00f05af8,local_20[0]);
  }
  FUN_00414480(local_20);
  return param_1;
}

