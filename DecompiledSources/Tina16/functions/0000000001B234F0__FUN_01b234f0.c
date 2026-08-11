/* Ghidra address: 01b234f0 */
/* Ghidra symbol: FUN_01b234f0 */


bool FUN_01b234f0(longlong param_1,longlong param_2)

{
  int iVar1;
  bool bVar2;
  longlong local_res8;
  longlong local_res10 [3];
  undefined8 local_18;
  undefined8 local_10;
  
  local_18 = 0;
  local_10 = 0;
  local_res8 = param_1;
  local_res10[0] = param_2;
  FUN_00414610(param_1);
  FUN_00414610(local_res10[0]);
  FUN_00ea8a10(&local_10,local_res8,&DAT_01b2361c,&LAB_01b23630);
  FUN_00414b50(&local_res8,local_10);
  FUN_00ea8a10(&local_18,local_res10[0],&DAT_01b2361c,&LAB_01b23630);
  FUN_00414b50(local_res10,local_18);
  if (local_res8 == local_res10[0]) {
    bVar2 = true;
  }
  else if ((local_res8 == 0) || (local_res10[0] == 0)) {
    bVar2 = false;
  }
  else {
    iVar1 = FUN_0043e420(local_res8,local_res10[0]);
    bVar2 = iVar1 == 0;
  }
  FUN_00414560(&local_18,2);
  FUN_00414560(&local_res8,2);
  return bVar2;
}

