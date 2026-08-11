/* Ghidra address: 017739d0 */
/* Ghidra symbol: FUN_017739d0 */


void FUN_017739d0(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  longlong lVar1;
  undefined8 local_res10;
  undefined8 local_res18;
  undefined8 local_28;
  undefined8 local_20 [2];
  
  local_20[0] = 0;
  local_28 = 0;
  local_res10 = param_2;
  local_res18 = param_3;
  FUN_00414610(param_2);
  FUN_00414610(local_res18);
  FUN_017737a0(param_1,local_20);
  lVar1 = *(longlong *)(param_1 + 0x110);
  if (*(int *)(*(longlong *)(lVar1 + 0x18) + 0x10) == 2) {
    FUN_010b29c0(lVar1,&local_28,1);
  }
  else {
    FUN_00414b50(&local_28,local_20[0]);
  }
  FUN_010afec0(lVar1);
  *(uint *)(lVar1 + 0x2a) = *(uint *)(lVar1 + 0x2a) | 0x1000;
  FUN_010b2d80(lVar1,local_res10,local_res18);
  FUN_010b2d80(lVar1,local_28,L"flags");
  FUN_00414560(&local_28,2);
  FUN_00414560(&local_res10,2);
  return;
}

