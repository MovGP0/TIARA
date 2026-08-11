/* Ghidra address: 00ccc450 */
/* Ghidra symbol: FUN_00ccc450 */


bool FUN_00ccc450(undefined8 param_1,int param_2,undefined8 param_3,int param_4)

{
  int iVar1;
  undefined8 uVar2;
  bool bVar3;
  undefined8 local_38;
  undefined8 local_30 [2];
  longlong local_20 [2];
  
  local_38 = 0;
  local_30[0] = 0;
  local_20[0] = 0;
  bVar3 = false;
  if (param_2 == 1) {
    if (param_4 == 1) {
      FUN_004167d0(local_20,param_3);
      iVar1 = FUN_00ccc880(param_1,local_20[0],1);
      bVar3 = iVar1 != 0;
    }
    else if (param_4 == 3) {
      uVar2 = (**(code **)PTR_DAT_02004588)();
      FUN_004167a0(local_30,uVar2);
      FUN_00452e30(local_20,local_30[0]);
      if (local_20[0] == 0) {
        uVar2 = (**(code **)PTR_DAT_02005268)();
        FUN_004167a0(&local_38,uVar2);
        iVar1 = FUN_00ccc880(param_1,local_38,1);
      }
      else {
        iVar1 = FUN_00ccc880(param_1,local_20[0],1);
      }
      bVar3 = iVar1 != 0;
      if (!bVar3) {
        FUN_00ca5660(0x65,0x68);
      }
    }
    else {
      FUN_004167d0(local_20,param_3);
      iVar1 = FUN_00ccc5e0(param_1,local_20[0],param_4);
      bVar3 = iVar1 != 0;
    }
  }
  FUN_00414560(&local_38,2);
  FUN_00414480(local_20);
  return bVar3;
}

