/* Ghidra address: 00cf8ec0 */
/* Ghidra symbol: FUN_00cf8ec0 */


void FUN_00cf8ec0(undefined8 param_1)

{
  undefined8 uVar1;
  char cVar2;
  undefined8 local_10;
  
  local_10 = 0;
  cVar2 = FUN_00cf9240(param_1);
  if (cVar2 == '\0') {
    FUN_0041ddd0(&local_10,PTR_DAT_020054b8);
    uVar1 = FUN_0044d490(&PTR_FUN_00cf6178,1,local_10);
    FUN_004134c0(uVar1);
  }
  FUN_00414480(&local_10);
  return;
}

