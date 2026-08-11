/* Ghidra address: 00542450 */
/* Ghidra symbol: FUN_00542450 */


undefined8 FUN_00542450(longlong param_1,undefined8 param_2)

{
  int iVar1;
  undefined1 auStack_38 [32];
  undefined8 local_18;
  undefined8 local_10;
  
  local_10 = 0;
  local_18 = param_2;
  FUN_004194b0(param_2,*(undefined8 *)(param_1 + 8),&DAT_005341c0);
  iVar1 = FUN_00534770();
  if (*(int *)(param_1 + 0x18) != iVar1) {
    FUN_00542060(auStack_38,&local_10);
    FUN_004194b0(local_18,local_10,&DAT_005341c0);
  }
  FUN_00419430(&local_10,&DAT_005341c0);
  return local_18;
}

