/* Ghidra address: 00cf9950 */
/* Ghidra symbol: FUN_00cf9950 */


void FUN_00cf9950(longlong param_1)

{
  undefined8 uVar1;
  undefined8 local_10;
  
  local_10 = 0;
  if (*(char *)(param_1 + 0x21) != '\0') {
    FUN_0041ddd0(&local_10,PTR_PTR_020027f0);
    uVar1 = FUN_0044d490(&PTR_FUN_00cf5f58,1,local_10);
    FUN_004134c0(uVar1);
  }
  FUN_00414480(&local_10);
  return;
}

