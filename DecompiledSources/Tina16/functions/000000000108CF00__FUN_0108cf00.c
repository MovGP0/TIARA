/* Ghidra address: 0108cf00 */
/* Ghidra symbol: FUN_0108cf00 */


void FUN_0108cf00(longlong param_1)

{
  char cVar1;
  undefined8 uVar2;
  undefined1 auStack_68 [32];
  undefined8 local_48;
  undefined1 *local_40;
  undefined4 local_2c;
  undefined8 local_28;
  undefined8 local_20;
  undefined8 local_18;
  undefined8 local_10;
  
  local_40 = auStack_68;
  local_48 = 0;
  local_18 = 0;
  local_20 = 0;
  local_28 = 0;
  local_10 = FUN_005ea3c0(&DAT_005e7878,1);
  FUN_00414b50(&local_20,*(undefined8 *)PTR_DAT_02002340);
  FUN_005ea670(local_10,0xffffffff80000001);
  cVar1 = FUN_005ea880(local_10,local_20,1);
  if (cVar1 != '\0') {
    cVar1 = FUN_016098e0(*(undefined8 *)(param_1 + 0xb38));
    if (cVar1 != '\0') {
      uVar2 = FUN_00442620(param_1 + 0xc08,*(undefined8 *)(param_1 + 0xb38));
      local_2c = _Dbg_XMC_NameToDev(uVar2);
      FUN_0160b130(&local_28,local_2c);
      FUN_00416ba0(&local_48,L"Debug_Periph",local_28);
      FUN_005eb630(local_10,local_48,*(undefined8 *)(param_1 + 0xb10));
    }
    FUN_005eba20(local_10,L"DebuggerOptions",*(undefined4 *)(param_1 + 0xaa8));
  }
  FUN_00410f20(local_10);
  FUN_00414480(&local_48);
  FUN_00414560(&local_28,3);
  return;
}

