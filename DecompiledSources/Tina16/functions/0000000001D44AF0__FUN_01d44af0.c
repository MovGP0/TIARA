/* Ghidra address: 01d44af0 */
/* Ghidra symbol: FUN_01d44af0 */


undefined8 FUN_01d44af0(undefined8 param_1,undefined8 param_2,undefined4 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 local_res8;
  undefined8 local_res10;
  undefined8 local_20;
  
  local_res8 = param_1;
  local_res10 = param_2;
  FUN_00414610(param_1);
  FUN_00414610(local_res10);
  uVar1 = FUN_00416740(local_res8);
  uVar2 = FUN_00416740(local_res10);
  uVar3 = FUN_00416740(*(undefined8 *)PTR_DAT_020049a0);
  thunk_FUN_0419adcc(*(undefined8 *)(*(longlong *)PTR_DAT_02004030 + 0x2d0),L"open",uVar1,uVar2,
                     uVar3,param_3);
  FUN_00414560(&local_res8,2);
  return local_20;
}

