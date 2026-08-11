/* Ghidra address: 01976ff0 */
/* Ghidra symbol: FUN_01976ff0 */


void FUN_01976ff0(longlong param_1)

{
  char cVar1;
  int iVar2;
  undefined8 local_28;
  undefined8 local_20;
  undefined8 local_18;
  undefined8 local_10;
  
  local_18 = 0;
  local_20 = 0;
  local_28 = 0;
  local_10 = 0;
  if (*(longlong *)(param_1 + 0x200) != 0) {
    iVar2 = FUN_00414cb0(*(undefined8 *)(param_1 + 0x1f8));
    if ((((2 < iVar2) && (*(short *)(*(longlong *)(param_1 + 0x1f8) + 2) != 0x3a)) &&
        (**(short **)(param_1 + 0x1f8) != 0x5c)) &&
       (*(short *)(*(longlong *)(param_1 + 0x1f8) + 2) != 0x5c)) {
      FUN_01972f10(param_1,&local_10);
      FUN_00416ad0(&local_10,*(undefined8 *)(param_1 + 0x1f8));
      cVar1 = FUN_00440a20(local_10,1);
      if (((cVar1 == '\0') && (*(longlong *)(param_1 + 0x1c0) != 0)) &&
         (*(longlong *)(param_1 + 0x388) == 0)) {
        FUN_00441640(&local_20,*(undefined8 *)(param_1 + 0x1c0));
        FUN_018d0d60(&local_28,*(undefined8 *)(*(longlong *)(param_1 + 0x200) + 0x1c0));
        FUN_00441d00(&local_18,local_20,local_28);
        FUN_00414ad0(param_1 + 0x1f8,local_18);
      }
    }
  }
  FUN_00414560(&local_28,4);
  return;
}

