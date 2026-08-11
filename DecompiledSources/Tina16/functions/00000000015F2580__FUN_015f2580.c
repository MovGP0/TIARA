/* Ghidra address: 015f2580 */
/* Ghidra symbol: FUN_015f2580 */


longlong * FUN_015f2580(longlong param_1)

{
  longlong *plVar1;
  int iVar2;
  longlong local_res8 [4];
  undefined8 local_28;
  int local_1c;
  
  local_28 = 0;
  local_res8[0] = param_1;
  FUN_00414610(param_1);
  plVar1 = (longlong *)FUN_004b6930(&PTR_FUN_00478280,1);
  local_1c = 1;
  iVar2 = 0;
  if (local_res8[0] != 0) {
    iVar2 = *(int *)(local_res8[0] + -4);
  }
  if (0 < iVar2) {
    do {
      FUN_015f02d0(&local_28,local_res8[0],&local_1c);
      (**(code **)(*plVar1 + 0x78))(plVar1,local_28);
    } while (local_1c <= iVar2);
  }
  FUN_00414480(&local_28);
  FUN_00414480(local_res8);
  return plVar1;
}

