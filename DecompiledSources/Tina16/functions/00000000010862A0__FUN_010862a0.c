/* Ghidra address: 010862a0 */
/* Ghidra symbol: FUN_010862a0 */


longlong * FUN_010862a0(undefined8 param_1,short *param_2)

{
  int iVar1;
  longlong *plVar2;
  short *local_38;
  longlong local_20 [2];
  
  local_20[0] = 0;
  plVar2 = (longlong *)FUN_004b6930(&PTR_FUN_00478280,1);
  local_38 = param_2;
  if (param_2 != (short *)0x0) {
    while (*local_38 != 0) {
      FUN_004167d0(local_20,local_38);
      iVar1 = 0;
      if (local_20[0] != 0) {
        iVar1 = *(int *)(local_20[0] + -4);
      }
      local_38 = local_38 + (longlong)iVar1 + 1;
      (**(code **)(*plVar2 + 0x78))(plVar2,local_20[0]);
    }
  }
  FUN_00414480(local_20);
  return plVar2;
}

