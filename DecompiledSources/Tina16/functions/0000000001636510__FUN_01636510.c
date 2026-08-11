/* Ghidra address: 01636510 */
/* Ghidra symbol: FUN_01636510 */


undefined8 FUN_01636510(longlong param_1,undefined8 param_2,undefined8 param_3,undefined4 *param_4)

{
  char cVar1;
  int iVar2;
  longlong lVar3;
  undefined8 local_50;
  undefined8 local_30;
  undefined8 local_28;
  undefined8 local_20 [2];
  
  local_20[0] = 0;
  local_28 = 0;
  local_30 = 0;
  lVar3 = FUN_0162ab40(param_2,param_1);
  cVar1 = FUN_0162f1d0(lVar3);
  if (cVar1 == '\0') {
    FUN_01613110(L"THDLProcess.FindSpiceComp");
  }
  else {
    if ((*(char *)(lVar3 + 8) == '1') || (*(char *)(lVar3 + 8) == '\x01')) {
      *param_4 = 0x85;
    }
    else {
      *param_4 = 0x84;
    }
    FUN_016362e0(param_1,local_20,lVar3,param_2,param_3);
    iVar2 = (**(code **)(**(longlong **)(param_1 + 0x68) + 0xb0))
                      (*(longlong **)(param_1 + 0x68),local_20[0]);
    if (iVar2 == -1) {
      local_50 = 0;
    }
    else {
      local_50 = (**(code **)(**(longlong **)(param_1 + 0x68) + 0x30))
                           (*(longlong **)(param_1 + 0x68),iVar2);
    }
  }
  FUN_00414560(&local_30,3);
  return local_50;
}

