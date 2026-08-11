/* Ghidra address: 014ba290 */
/* Ghidra symbol: FUN_014ba290 */


void FUN_014ba290(longlong param_1)

{
  undefined8 uVar1;
  undefined8 local_38;
  undefined8 local_30 [2];
  longlong local_20 [2];
  
  local_30[0] = 0;
  local_38 = 0;
  local_20[0] = 0;
  if (*(char *)(param_1 + 0x748) != '\0') {
    uVar1 = _HTerm_Poll(*(undefined8 *)(param_1 + 0xd58));
    FUN_00415430(local_20,uVar1,0);
    if (local_20[0] != 0) {
      uVar1 = *(undefined8 *)(param_1 + 0x6d0);
      FUN_0064dd90(uVar1,local_30);
      FUN_00416880(&local_38,local_20[0]);
      FUN_00416ad0(local_30,local_38);
      FUN_0064de00(uVar1,local_30[0]);
    }
    FUN_0080cc70(*(undefined8 *)PTR_DAT_02004030);
  }
  FUN_00414480(&local_38);
  FUN_00414480(local_30);
  FUN_004144d0(local_20);
  return;
}

