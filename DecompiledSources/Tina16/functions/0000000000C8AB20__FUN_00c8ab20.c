/* Ghidra address: 00c8ab20 */
/* Ghidra symbol: FUN_00c8ab20 */


void FUN_00c8ab20(longlong param_1,int *param_2,int param_3)

{
  undefined8 uVar1;
  undefined8 local_40;
  undefined8 local_38;
  undefined1 local_30;
  int local_28;
  undefined1 local_20;
  undefined4 local_18;
  undefined1 local_10;
  
  local_40 = 0;
  if (*param_2 == -1) {
    *param_2 = *(int *)(param_1 + 0x30) + param_3;
  }
  else if (*(int *)(param_1 + 0x30) + param_3 < *param_2) {
    FUN_0041ddd0(&local_40,PTR_PTR_02001f80);
    local_38 = local_40;
    local_30 = 0x11;
    local_28 = *param_2;
    local_20 = 0;
    local_18 = *(undefined4 *)(param_1 + 0x30);
    local_10 = 0;
    uVar1 = FUN_0044d530(&PTR_FUN_00c896f8,1,L"%s (%d/%d)",&local_38,2);
    FUN_004134c0(uVar1);
  }
  FUN_00414480(&local_40);
  return;
}

