/* Ghidra address: 01a3ffa0 */
/* Ghidra symbol: FUN_01a3ffa0 */


void FUN_01a3ffa0(longlong param_1)

{
  int iVar1;
  undefined8 local_48;
  undefined8 local_40;
  wchar_t *local_38;
  undefined1 local_30;
  undefined8 local_28;
  undefined8 local_20 [2];
  
  local_40 = 0;
  local_48 = 0;
  local_20[0] = 0;
  local_28 = 0;
  (**(code **)(**(longlong **)(param_1 + 0x8e8) + 0x10))
            (*(longlong **)(param_1 + 0x8e8),*(undefined8 *)(param_1 + 0x8e0));
  FUN_00416ba0(&local_28,L"%s: ",*(undefined8 *)(param_1 + 0x2b28));
  local_38 = L"Local";
  local_30 = 0x11;
  FUN_00442f70(local_20,local_28,&local_38,0);
  iVar1 = (**(code **)(**(longlong **)(param_1 + 0x8e8) + 0xb0))
                    (*(longlong **)(param_1 + 0x8e8),local_20[0]);
  if (iVar1 < 0) {
    FUN_00416ba0(&local_48,L"%s: ",*(undefined8 *)(param_1 + 0x2b28));
    local_38 = L"Local";
    local_30 = 0x11;
    FUN_00442f70(&local_40,local_48,&local_38,0);
    (**(code **)(**(longlong **)(param_1 + 0x8e8) + 200))
              (*(longlong **)(param_1 + 0x8e8),0,local_40);
  }
  FUN_00414560(&local_48,2);
  FUN_00414560(&local_28,2);
  return;
}

