/* Ghidra address: 01804240 */
/* Ghidra symbol: FUN_01804240 */


void FUN_01804240(longlong param_1,undefined8 param_2)

{
  int iVar1;
  int iVar2;
  undefined8 local_38;
  undefined8 local_30;
  undefined8 local_28;
  undefined8 local_20 [2];
  
  local_20[0] = 0;
  local_30 = 0;
  local_38 = 0;
  local_28 = 0;
  FUN_0043e5a0(&local_28,param_2);
  FUN_00416cd0(local_20,3,&DAT_01804358,local_28,&LAB_01804368);
  FUN_0043e5a0(&local_38,*(undefined8 *)(param_1 + 0x30));
  FUN_00416ba0(&local_30,&DAT_01804358,local_38);
  iVar1 = FUN_004170c0(local_20[0],local_30,1);
  if (0 < iVar1) {
    FUN_01803ed0(param_1,param_2,0);
    iVar2 = FUN_00414cb0(param_2);
    FUN_00416e20(param_1 + 0x30,iVar1,iVar2 + 4);
  }
  FUN_00414560(&local_38,4);
  return;
}

