/* Ghidra address: 01636680 */
/* Ghidra symbol: FUN_01636680 */


undefined8 FUN_01636680(longlong param_1,undefined8 param_2,longlong param_3,undefined8 param_4)

{
  char cVar1;
  undefined8 uVar2;
  undefined8 local_50 [4];
  undefined8 local_30;
  undefined8 local_28;
  undefined8 local_20 [2];
  
  local_50[0] = 0;
  local_20[0] = 0;
  local_28 = 0;
  local_30 = 0;
  uVar2 = FUN_0162ab40(param_2,param_1);
  cVar1 = FUN_0162f1d0(uVar2);
  if (cVar1 == '\0') {
    FUN_01613110(L"THDLProcess.AddSpiceComp");
  }
  else {
    FUN_016362e0(param_1,local_20,uVar2,param_2,param_4);
    FUN_00414ad0(param_3 + 0x28,local_20[0]);
    (**(code **)(**(longlong **)(param_1 + 0x68) + 0x80))
              (*(longlong **)(param_1 + 0x68),local_20[0],param_3);
    FUN_00416ba0(local_50,L"SpiceComp created: ",local_20[0]);
    FUN_0163cf20(param_4,local_50[0]);
  }
  FUN_00414480(local_50);
  FUN_00414560(&local_30,3);
  return uVar2;
}

