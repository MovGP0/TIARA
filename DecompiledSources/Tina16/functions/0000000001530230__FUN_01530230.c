/* Ghidra address: 01530230 */
/* Ghidra symbol: FUN_01530230 */


void FUN_01530230(longlong param_1,undefined8 param_2)

{
  undefined1 auStack_88 [32];
  undefined8 local_68;
  undefined8 local_50;
  undefined8 local_48;
  undefined8 local_40;
  undefined8 local_38;
  undefined1 *local_30;
  int local_24;
  longlong local_20 [2];
  
  local_30 = auStack_88;
  local_40 = 0;
  local_48 = 0;
  local_50 = 0;
  local_38 = 0;
  local_20[0] = 0;
  DAT_01f5fc98 = (longlong *)FUN_004b6930(&PTR_FUN_00478280,1);
  local_24 = 1;
  DAT_01f5fca0 = param_2;
  do {
    FUN_0043f750(&local_38,local_24);
    FUN_00416ba0(local_20,L"File",local_38);
    local_68 = 0;
    (**(code **)(**(longlong **)(param_1 + 0x1c08) + 0x10))
              (*(longlong **)(param_1 + 0x1c08),&local_48,L"Netlist Editor MRU",local_20[0]);
    FUN_00415dd0(&local_50,local_48,0);
    FUN_00b0d000(&local_40,local_50,0xfde9);
    FUN_004168b0(local_20,local_40);
    if (local_20[0] != 0) {
      (**(code **)(*DAT_01f5fc98 + 0x78))(DAT_01f5fc98,local_20[0]);
    }
    local_24 = local_24 + 1;
  } while (local_24 != 5);
  FUN_01530510(param_1);
  FUN_004144d0(&local_50);
  FUN_00414480(&local_48);
  FUN_00414520(&local_40);
  FUN_00414480(&local_38);
  FUN_00414480(local_20);
  return;
}

