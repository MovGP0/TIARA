/* Ghidra address: 00c67db0 */
/* Ghidra symbol: FUN_00c67db0 */


void FUN_00c67db0(longlong param_1)

{
  int iVar1;
  undefined8 uVar2;
  undefined8 local_50;
  undefined8 local_48;
  undefined8 local_40;
  undefined8 local_38;
  longlong local_30 [2];
  undefined8 local_20;
  
  local_48 = 0;
  local_50 = 0;
  local_40 = 0;
  local_38 = 0;
  local_30[0] = 0;
  FUN_0064dd90(*(undefined8 *)(param_1 + 0x6f0),local_30);
  if (local_30[0] == 0) {
    FUN_008483e0(*(undefined8 *)(param_1 + 0x700),0);
    FUN_008483e0(*(undefined8 *)(param_1 + 0x710),0);
    (**(code **)(**(longlong **)(param_1 + 0x700) + 0x188))(*(longlong **)(param_1 + 0x700));
    (**(code **)(**(longlong **)(param_1 + 0x710) + 0x188))(*(longlong **)(param_1 + 0x710));
  }
  else {
    local_20 = 0;
    FUN_0064dd90(*(undefined8 *)(param_1 + 0x6f0),&local_38);
    uVar2 = FUN_00416740(local_38);
    iVar1 = thunk_FUN_0415b283(uVar2,0xffffffff,&local_20,&local_20,0);
    if (iVar1 < 1) {
      FUN_0064dd90(*(undefined8 *)(param_1 + 0x6f0),&local_50);
      FUN_00416ba0(&local_48,L"No icons were found in file ",local_50);
      uVar2 = FUN_00416740(local_48);
      FUN_0080d2f0(*(undefined8 *)PTR_DAT_02004030,uVar2,L"PlacesBar Item Icon",0x10);
      FUN_008483e0(*(undefined8 *)(param_1 + 0x700),0);
      FUN_008483e0(*(undefined8 *)(param_1 + 0x710),0);
      (**(code **)(**(longlong **)(param_1 + 0x700) + 0x188))(*(longlong **)(param_1 + 0x700));
      (**(code **)(**(longlong **)(param_1 + 0x710) + 0x188))(*(longlong **)(param_1 + 0x710));
    }
    else {
      FUN_0064dd90(*(undefined8 *)(param_1 + 0x6f0),&local_40);
      FUN_00414ad0(param_1 + 0x768,local_40);
      FUN_008483e0(*(undefined8 *)(param_1 + 0x700),iVar1);
      (**(code **)(**(longlong **)(param_1 + 0x700) + 0x188))(*(longlong **)(param_1 + 0x700));
      FUN_008483e0(*(undefined8 *)(param_1 + 0x710),iVar1);
      (**(code **)(**(longlong **)(param_1 + 0x710) + 0x188))(*(longlong **)(param_1 + 0x710));
    }
  }
  FUN_00414480(&local_50);
  FUN_00414480(&local_48);
  FUN_00414560(&local_40,3);
  return;
}

