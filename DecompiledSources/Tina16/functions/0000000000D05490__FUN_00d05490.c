/* Ghidra address: 00d05490 */
/* Ghidra symbol: FUN_00d05490 */


void FUN_00d05490(longlong param_1,undefined8 param_2,longlong param_3)

{
  undefined8 uVar1;
  undefined1 *puVar2;
  undefined1 auStack_58 [40];
  undefined1 *local_30;
  longlong local_20;
  undefined8 local_18;
  undefined8 local_10;
  
  local_30 = auStack_58;
  local_20 = *(longlong *)(param_1 + 0x1d0);
  puVar2 = auStack_58;
  if ((local_20 == 0) && (puVar2 = auStack_58, *(char *)(param_1 + 0x1ec) != '\0')) {
    local_20 = FUN_00882aa0(&PTR_FUN_00ce9b20,1,param_1);
    FUN_00d05650(param_1,local_20);
    *(undefined1 *)(param_1 + 0x1e0) = 1;
    puVar2 = local_30;
  }
  local_30 = puVar2;
  if ((local_20 != 0) && (*(char *)(param_1 + 0x1ec) != '\0')) {
    local_18 = FUN_004b6930(&PTR_FUN_00478280,1);
    FUN_00cd8d80(*(undefined8 *)(param_3 + 0x18),L"Set-Cookie",local_18);
    FUN_00cd8d80(*(undefined8 *)(*(longlong *)(param_3 + 0x128) + 0x18),L"Set-Cookie",local_18);
    FUN_00cea500(local_20,local_18,*(undefined8 *)(param_1 + 0x208));
    uVar1 = local_18;
    local_10 = local_18;
    local_18 = 0;
    FUN_00410f20(uVar1);
  }
  return;
}

