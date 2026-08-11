/* Ghidra address: 00c476e0 */
/* Ghidra symbol: FUN_00c476e0 */


void FUN_00c476e0(longlong param_1)

{
  int iVar1;
  undefined1 auStack_78 [48];
  undefined8 local_48;
  undefined8 local_40;
  undefined8 local_38;
  undefined1 *local_30;
  code *local_28;
  undefined8 local_20;
  
  local_30 = auStack_78;
  local_40 = 0;
  local_48 = 0;
  local_38 = 0;
  while (((*(char *)(param_1 + 0x1a) == '\0' && (*(longlong *)(param_1 + 0x48) != 0)) &&
         (*(char *)(*(longlong *)PTR_DAT_02004030 + 0x148) == '\0'))) {
    iVar1 = thunk_FUN_0418d6df(*(undefined8 *)(*(longlong *)(param_1 + 0x48) + 0x58),0x14);
    if (iVar1 == 0) {
      FUN_00416ba0(&local_38,L"Event signaled from ",
                   *(undefined8 *)(*(longlong *)(param_1 + 0x48) + 8));
      FUN_00c4c420(local_38);
      local_20 = *(undefined8 *)(param_1 + 0x48);
      local_28 = FUN_00c48630;
      FUN_004d1a50(param_1,&local_28);
    }
  }
  *(undefined8 *)(*(longlong *)(param_1 + 0x48) + 0x68) = 0;
  FUN_00414560(&local_48,3);
  return;
}

