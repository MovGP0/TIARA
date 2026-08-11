/* Ghidra address: 007fe000 */
/* Ghidra symbol: FUN_007fe000 */


void FUN_007fe000(longlong param_1)

{
  undefined8 uVar1;
  undefined8 local_10;
  
  local_10 = 0;
  if (((*(char *)(param_1 + 0x4d6) == '\x01') && (*(char *)(param_1 + 0xa9) != '\0')) &&
     (*(longlong *)(param_1 + 0x78) == 0)) {
    FUN_0041ddd0(&local_10,PTR_PTR_02001820);
    uVar1 = FUN_0044d490(&PTR_FUN_00472870,1,local_10);
    FUN_004134c0(uVar1);
  }
  FUN_00414480(&local_10);
  return;
}

