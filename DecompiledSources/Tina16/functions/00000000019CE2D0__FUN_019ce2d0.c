/* Ghidra address: 019ce2d0 */
/* Ghidra symbol: FUN_019ce2d0 */


undefined4 FUN_019ce2d0(undefined8 param_1,undefined4 param_2,undefined8 param_3)

{
  undefined4 uVar1;
  undefined8 uVar2;
  undefined8 local_res18 [2];
  longlong local_10;
  
  local_10 = 0;
  local_res18[0] = param_3;
  FUN_00414610(param_3);
  FUN_019cd9a0(param_1,&local_10,param_2,local_res18[0]);
  if (local_10 == 0) {
    uVar2 = FUN_0044d490(&PTR_FUN_004334c0,1,L"TAIAutoTest.GetKeyI");
    FUN_004134c0(uVar2);
  }
  uVar1 = FUN_0043fc00(local_10);
  FUN_00414480(&local_10);
  FUN_00414480(local_res18);
  return uVar1;
}

