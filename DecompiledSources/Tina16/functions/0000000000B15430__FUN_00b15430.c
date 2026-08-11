/* Ghidra address: 00b15430 */
/* Ghidra symbol: FUN_00b15430 */


undefined8 *
FUN_00b15430(undefined8 *param_1,undefined8 param_2,longlong param_3,undefined8 param_4)

{
  uint uVar1;
  int iVar2;
  undefined8 local_40 [2];
  undefined8 local_30;
  longlong local_28;
  undefined8 local_20 [2];
  
  local_40[0] = 0;
  local_20[0] = 0;
  local_28 = 0;
  local_30 = 0;
  FUN_00414be0(local_20,param_2);
  FUN_00414be0(&local_28,param_3);
  FUN_00414be0(&local_30,param_2);
  FUN_00414520(param_1);
  do {
    iVar2 = FUN_00416420(local_20[0],0);
    if (iVar2 == 0) {
code_r0x00b15572:
      FUN_00414520(local_40);
      FUN_004145c0(&local_30,3);
      return param_1;
    }
    iVar2 = FUN_00417170(local_28,local_20[0],1);
    if (iVar2 == 0) {
      FUN_00415f90(param_1,local_30);
      goto code_r0x00b15572;
    }
    FUN_00416430(local_40,local_30,1,iVar2 + -1);
    FUN_00416310(param_1,3,*param_1,local_40[0],param_4);
    uVar1 = 0;
    if (param_3 != 0) {
      uVar1 = *(uint *)(param_3 + -4) >> 1;
    }
    FUN_00416430(&local_30,local_30,iVar2 + uVar1,0x7fffffff);
    uVar1 = 0;
    if (local_28 != 0) {
      uVar1 = *(uint *)(local_28 + -4) >> 1;
    }
    FUN_00416430(local_20,local_20[0],iVar2 + uVar1,0x7fffffff);
  } while( true );
}

