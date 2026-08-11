/* Ghidra address: 016d45e0 */
/* Ghidra symbol: FUN_016d45e0 */


void FUN_016d45e0(longlong param_1)

{
  int iVar1;
  int local_70 [2];
  undefined1 local_68;
  undefined8 local_60;
  code *local_58;
  longlong local_50;
  code *local_48;
  longlong local_40;
  undefined1 local_38 [8];
  int local_30;
  
  local_60 = 0;
  while (*(char *)(param_1 + 0x1a) == '\0') {
    iVar1 = thunk_FUN_0415fb6e(local_38,0,0,0);
    if ((iVar1 != 0) && (local_30 != 0x3bb)) {
      if (local_30 == 0x3bc) {
        FUN_004d1f00(param_1);
      }
      else if (local_30 == 0x3bd) {
        local_48 = FUN_016d4590;
        local_40 = param_1;
        FUN_004d1a50(param_1);
      }
      else if (local_30 != 0x400) {
        local_70[0] = local_30;
        local_68 = 0;
        FUN_00442f70(&local_60,L"Unexpected Out Thread Message %x",local_70);
        FUN_0072d440(local_60);
      }
    }
  }
  local_58 = FUN_016d45c0;
  local_50 = param_1;
  FUN_004d1a50(param_1,&local_58);
  FUN_00414480(&local_60);
  return;
}

