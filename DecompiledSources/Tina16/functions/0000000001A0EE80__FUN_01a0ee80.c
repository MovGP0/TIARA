/* Ghidra address: 01a0ee80 */
/* Ghidra symbol: FUN_01a0ee80 */


char FUN_01a0ee80(undefined8 param_1,undefined8 param_2)

{
  int iVar1;
  undefined8 local_res10 [3];
  undefined1 auStack_98 [40];
  undefined1 *local_70;
  int local_5c;
  longlong *local_58;
  undefined8 local_50;
  short *local_48;
  undefined8 local_40;
  longlong *local_38;
  char local_29;
  longlong *local_28;
  undefined8 local_20 [2];
  
  local_70 = auStack_98;
  local_40 = 0;
  local_48 = (short *)0x0;
  local_50 = 0;
  local_20[0] = 0;
  local_res10[0] = param_2;
  FUN_00414610(param_2);
  iVar1 = FUN_004170c0(L"DIGIFPWR",local_res10[0],1);
  local_29 = 0 < iVar1;
  if (!(bool)local_29) {
    local_38 = (longlong *)FUN_004b6930(&PTR_FUN_00478280,1);
    (**(code **)(*local_38 + 0x60))(local_38,local_res10[0]);
    local_28 = (longlong *)FUN_004b2790(&DAT_00476598,1,local_38);
    do {
      local_58 = local_28;
      *(int *)(local_28 + 1) = (int)local_28[1] + 1;
      iVar1 = (**(code **)(*(longlong *)local_28[2] + 0x28))((longlong *)local_28[2]);
      if (iVar1 <= (int)local_58[1]) break;
      FUN_004b2850(local_28,&local_40);
      FUN_00414480(local_20);
      FUN_004577b0(&local_40,local_20,*(undefined4 *)PTR_DAT_02005bd0);
      FUN_00414b50(&local_50,local_20[0]);
      FUN_004579e0(&local_50,&local_48);
      FUN_00414480(local_20);
      local_5c = 0;
      if (local_48 != (short *)0x0) {
        local_5c = *(int *)(local_48 + -2);
      }
      if ((local_5c < 1) || (*local_48 != 0x55)) {
        local_29 = '\0';
      }
      else {
        local_29 = '\x01';
      }
    } while (local_29 == '\0');
    if (local_28 != (longlong *)0x0) {
      (**(code **)(*local_28 + -0x20))(local_28,1);
    }
    FUN_00410f20(local_38);
  }
  FUN_00414560(&local_50,3);
  FUN_00414480(local_20);
  FUN_00414480(local_res10);
  return local_29;
}

