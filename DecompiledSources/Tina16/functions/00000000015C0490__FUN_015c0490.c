/* Ghidra address: 015c0490 */
/* Ghidra symbol: FUN_015c0490 */


void FUN_015c0490(longlong *param_1)

{
  int iVar1;
  longlong lVar2;
  undefined8 local_48;
  undefined8 local_40 [3];
  undefined8 local_28;
  int local_20;
  int local_1c;
  
  local_40[0] = 0;
  local_48 = 0;
  local_28 = 0;
  if (*(char *)((longlong)param_1 + 0x89) == '\0') {
    if (param_1[0x10] == 0) {
      lVar2 = FUN_015bfc50(&PTR_FUN_015b98a8,1,0x100);
      param_1[0x10] = lVar2;
    }
    else {
      FUN_015bfb90(param_1[0x10]);
    }
    iVar1 = (**(code **)(*param_1 + 0x28))();
    local_1c = 0;
    if (-1 < iVar1 + -1) {
      do {
        (**(code **)(*param_1 + 0x18))(param_1,&local_28,local_1c);
        local_20 = FUN_004170c0(&LAB_015c0658,local_28,1);
        if (local_20 != 0) {
          if (*(char *)((longlong)param_1 + 0x4a) == '\0') {
            FUN_00416dc0(&local_48,local_28,1,local_20 + -1);
            FUN_015bf270(local_40,local_48);
            FUN_00414b50(&local_28,local_40[0]);
          }
          else {
            FUN_00416dc0(&local_28,local_28,1,local_20 + -1);
          }
          FUN_015bfad0(param_1[0x10],local_28,local_1c);
        }
        local_1c = local_1c + 1;
        iVar1 = iVar1 + -1;
      } while (iVar1 != 0);
    }
    *(undefined1 *)((longlong)param_1 + 0x89) = 1;
  }
  FUN_00414560(&local_48,2);
  FUN_00414480(&local_28);
  return;
}

