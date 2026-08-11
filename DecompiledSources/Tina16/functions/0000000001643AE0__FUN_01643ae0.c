/* Ghidra address: 01643ae0 */
/* Ghidra symbol: FUN_01643ae0 */


int FUN_01643ae0(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  int iVar1;
  int iVar2;
  longlong *plVar3;
  undefined8 local_res10;
  undefined8 local_res18;
  undefined8 local_res20;
  int local_2c;
  char local_19;
  
  local_res10 = param_2;
  local_res18 = param_3;
  local_res20 = param_4;
  FUN_00414610(param_2);
  FUN_00414610(local_res18);
  FUN_00414610(local_res20);
  iVar1 = FUN_0043fc00(local_res20);
  iVar2 = FUN_00416db0(local_res10,L"TRUE");
  if (iVar2 == 0) {
    plVar3 = (longlong *)FUN_0163e2d0(*(undefined8 *)(param_1 + 0x78),local_res18,&local_19);
    if (local_19 == '\0') {
      if (iVar1 == 0) {
        plVar3 = *(longlong **)(*(longlong *)(param_1 + 0x78) + 0x18);
        local_2c = (**(code **)(*plVar3 + 0x210))(plVar3,0);
      }
      else {
        FUN_01613110(L"GetNodeFromPinInfo, trace.txt == ALL?");
      }
    }
    else {
      (**(code **)(*plVar3 + 0xf8))(plVar3);
      local_2c = (**(code **)(*plVar3 + 0x210))(plVar3,iVar1);
    }
  }
  else {
    plVar3 = *(longlong **)(*(longlong *)(param_1 + 0x78) + 0x18);
    local_2c = (**(code **)(*plVar3 + 0x210))(plVar3,iVar1);
  }
  if (local_2c < 0) {
    FUN_01613110(L"GetNodeFromPinInfo");
  }
  FUN_00414560(&local_res10,3);
  return local_2c;
}

