/* Ghidra address: 01c99100 */
/* Ghidra symbol: FUN_01c99100 */


void FUN_01c99100(longlong param_1)

{
  undefined1 auStack_68 [32];
  wchar_t *local_48;
  undefined8 local_38;
  undefined1 *local_30;
  undefined8 local_20;
  
  local_30 = auStack_68;
  local_38 = 0;
  *PTR_DAT_02001560 = *(undefined1 *)(*(longlong *)(param_1 + 0x11a0) + 0x328);
  if (*(char *)(*(longlong *)(param_1 + 0x11a0) + 0x328) == '\0') {
    FUN_007e2f80(*(undefined8 *)(param_1 + 0x1270),1);
    FUN_007e2f80(*(undefined8 *)(param_1 + 0x1278),0);
    FUN_007e2f50(*(undefined8 *)(param_1 + 0x1270),
                 *(undefined2 *)(*(longlong *)(param_1 + 0x1278) + 0xc0));
    FUN_007e2f50(*(undefined8 *)(param_1 + 0x1278),0);
  }
  else {
    local_30 = auStack_68;
    FUN_007e2f80(*(undefined8 *)(param_1 + 0x1270),0);
    FUN_007e2f80(*(undefined8 *)(param_1 + 0x1278),1);
    FUN_007e2f50(*(undefined8 *)(param_1 + 0x1278),
                 *(undefined2 *)(*(longlong *)(param_1 + 0x1270) + 0xc0));
    FUN_007e2f50(*(undefined8 *)(param_1 + 0x1270),0);
  }
  local_48 = L"TINA.INI";
  FUN_00416cd0(&local_38,3,*(undefined8 *)PTR_DAT_02005010,&DAT_01c992e4);
  local_20 = FUN_005da0f0(&PTR_FUN_005d5a90,1,local_38);
  (**(code **)(**(longlong **)(param_1 + 0x24b8) + 0x38))
            (*(longlong **)(param_1 + 0x24b8),L"Schematic Editor",L"Enable3DShapes",
             *PTR_DAT_02001560);
  FUN_00410f20(local_20);
  FUN_0064e770(*(undefined8 *)(param_1 + 0xa10));
  FUN_00414480(&local_38);
  return;
}

