/* Ghidra address: 015308c0 */
/* Ghidra symbol: FUN_015308c0 */


void FUN_015308c0(longlong param_1)

{
  int iVar1;
  undefined1 auStack_88 [40];
  undefined8 local_60;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 local_48;
  undefined8 local_40;
  longlong local_38;
  undefined1 *local_30;
  int local_24;
  undefined8 local_20;
  
  local_30 = auStack_88;
  local_48 = 0;
  local_60 = 0;
  local_50 = 0;
  local_58 = 0;
  local_40 = 0;
  local_38 = 0;
  local_20 = 0;
  (**(code **)(**(longlong **)(param_1 + 0x1c08) + 0xb8))
            (*(longlong **)(param_1 + 0x1c08),L"Netlist Editor MRU");
  iVar1 = (**(code **)(*DAT_01f5fc98 + 0x28))();
  local_24 = 0;
  if (-1 < iVar1 + -1) {
    do {
      (**(code **)(*DAT_01f5fc98 + 0x18))(DAT_01f5fc98,&local_38,local_24);
      if (local_38 != 0) {
        FUN_0043f750(&local_40,local_24 + 1);
        FUN_00416ba0(&local_20,L"File",local_40);
        (**(code **)(*DAT_01f5fc98 + 0x18))(DAT_01f5fc98,&local_50,local_24);
        FUN_004168e0(&local_58,local_50);
        FUN_00b0cea0(&local_48,local_58,0xfde9);
        FUN_00416880(&local_60,local_48);
        (**(code **)(**(longlong **)(param_1 + 0x1c08) + 0x18))
                  (*(longlong **)(param_1 + 0x1c08),L"Netlist Editor MRU",local_20,local_60);
      }
      local_24 = local_24 + 1;
      iVar1 = iVar1 + -1;
    } while (iVar1 != 0);
  }
  FUN_00414480(&local_60);
  FUN_00414520(&local_58);
  FUN_00414480(&local_50);
  FUN_004144d0(&local_48);
  FUN_00414560(&local_40,2);
  FUN_00414480(&local_20);
  return;
}

