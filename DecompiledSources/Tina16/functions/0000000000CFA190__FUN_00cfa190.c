/* Ghidra address: 00cfa190 */
/* Ghidra symbol: FUN_00cfa190 */


void FUN_00cfa190(longlong param_1)

{
  undefined8 uVar1;
  undefined8 local_10;
  
  local_10 = 0;
  if (*(char *)(param_1 + 0x20) == '\0') {
    FUN_0041ddd0(&local_10,PTR_PTR_02005c68);
    uVar1 = FUN_0044d490(&PTR_FUN_00cf5f58,1,local_10);
    FUN_004134c0(uVar1);
  }
  FUN_00414480(&local_10);
  return;
}

