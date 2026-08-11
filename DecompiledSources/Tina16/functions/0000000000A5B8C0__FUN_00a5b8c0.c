/* Ghidra address: 00a5b8c0 */
/* Ghidra symbol: FUN_00a5b8c0 */


undefined8 FUN_00a5b8c0(undefined8 param_1,undefined8 param_2)

{
  int iVar1;
  longlong *plVar2;
  bool bVar3;
  undefined8 local_res10 [3];
  undefined1 auStack_68 [32];
  undefined8 local_48;
  undefined8 local_40;
  undefined8 local_38;
  undefined8 local_30 [2];
  longlong local_20 [2];
  
  local_40 = 0;
  local_38 = 0;
  local_30[0] = 0;
  local_20[0] = 0;
  local_res10[0] = param_2;
  local_48 = param_1;
  FUN_00414610(param_2);
  bVar3 = false;
  FUN_00a5b630(auStack_68,local_30);
  FUN_00414b50(local_20,local_30[0]);
  while ((local_20[0] != 0 && (!bVar3))) {
    plVar2 = (longlong *)FUN_008094d0(*(undefined8 *)PTR_DAT_02005950);
    FUN_009ec440(&local_38,local_20[0]);
    iVar1 = (**(code **)(*plVar2 + 0xb0))(plVar2,local_38);
    bVar3 = -1 < iVar1;
    if (bVar3) {
      FUN_00414ad0(local_48,local_20[0]);
    }
    else {
      FUN_00a5b630(auStack_68,&local_40);
      FUN_00414b50(local_20,local_40);
    }
  }
  FUN_00414560(&local_40,3);
  FUN_00414480(local_20);
  FUN_00414480(local_res10);
  return local_48;
}

