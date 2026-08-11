/* Ghidra address: 004bac90 */
/* Ghidra symbol: FUN_004bac90 */


void FUN_004bac90(longlong param_1)

{
  undefined8 uVar1;
  undefined8 local_30;
  undefined1 local_28;
  undefined8 local_20 [2];
  undefined8 local_10;
  
  local_20[0] = 0;
  local_10 = 0;
  if (*(char *)(param_1 + 0x70) == '\0') {
    FUN_004167d0(&local_10,*(undefined8 *)(param_1 + 0x60));
  }
  else {
    FUN_0043f780(&local_10,*(undefined8 *)(param_1 + 0x60));
  }
  FUN_0041ddd0(local_20,PTR_PTR_020033f8);
  local_30 = local_10;
  local_28 = 0x11;
  uVar1 = FUN_0044d530(&PTR_FUN_00472138,1,local_20[0],&local_30,0);
  FUN_004134c0(uVar1);
  FUN_00414480(local_20);
  FUN_00414480(&local_10);
  return;
}

