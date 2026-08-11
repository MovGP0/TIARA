/* Ghidra address: 00f7d750 */
/* Ghidra symbol: FUN_00f7d750 */


undefined1 FUN_00f7d750(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  longlong lVar2;
  undefined8 local_res10 [3];
  undefined8 local_30;
  undefined8 local_28;
  undefined8 local_20 [2];
  undefined8 local_10;
  
  local_28 = 0;
  local_30 = 0;
  local_20[0] = 0;
  local_10 = 0;
  local_res10[0] = param_2;
  FUN_00414610(param_2);
  FUN_00414b50(&local_10,local_res10[0]);
  FUN_00415dd0(local_20,local_10,0);
  uVar1 = FUN_004425e0(param_1 + 0x854,local_20[0]);
  lVar2 = _Dbg_GetSymbolString(*(undefined8 *)(param_1 + 0x10),uVar1);
  if (lVar2 == 0) {
    FUN_0041ddd0(&local_30,PTR_PTR_02002168);
    FUN_00de8a20(&local_28,L"HDLStrings",L"Msg_ObjectNotAccessible",*(undefined8 *)(param_1 + 0xc58)
                 ,local_30);
    FUN_004168b0(param_3,local_28);
  }
  else {
    FUN_004167a0(&local_10,lVar2);
    FUN_00414ad0(param_3,local_10);
  }
  FUN_00414480(&local_30);
  FUN_00414520(&local_28);
  FUN_004144d0(local_20);
  FUN_00414480(&local_10);
  FUN_00414480(local_res10);
  return 1;
}

