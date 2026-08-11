/* Ghidra address: 012c4ab0 */
/* Ghidra symbol: FUN_012c4ab0 */


void FUN_012c4ab0(longlong param_1)

{
  longlong local_40;
  longlong local_38;
  longlong local_30 [2];
  longlong local_20 [2];
  
  local_40 = 0;
  local_38 = 0;
  local_30[0] = 0;
  local_20[0] = 0;
  (**(code **)(**(longlong **)(param_1 + 0x958) + 0x10))
            (*(longlong **)(param_1 + 0x958),local_20,L"TestMode Settings",L"TestBench",0);
  if (local_20[0] == 0) {
    FUN_00414b50(local_20,L"Noname");
  }
  if ((local_20[0] != 0) && (*(char *)(param_1 + 0x991) == '\0')) {
    FUN_012c7130(param_1);
    FUN_012c7e70(param_1,local_20[0]);
    FUN_0064dd90(*(undefined8 *)(param_1 + 0x708),local_30);
    (**(code **)(**(longlong **)(param_1 + 0x710) + 0x128))
              (*(longlong **)(param_1 + 0x710),local_30[0] != 0);
    FUN_0064dd90(*(undefined8 *)(param_1 + 0x708),&local_38);
    (**(code **)(**(longlong **)(param_1 + 0x720) + 0x128))
              (*(longlong **)(param_1 + 0x720),local_38 != 0);
    FUN_0064dd90(*(undefined8 *)(param_1 + 0x730),&local_40);
    (**(code **)(**(longlong **)(param_1 + 0x738) + 0x128))
              (*(longlong **)(param_1 + 0x738),local_40 != 0);
    *(undefined1 *)(param_1 + 0x991) = 1;
  }
  FUN_00414560(&local_40,3);
  FUN_00414480(local_20);
  return;
}

