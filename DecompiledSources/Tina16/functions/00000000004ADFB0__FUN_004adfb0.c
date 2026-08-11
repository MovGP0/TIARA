/* Ghidra address: 004adfb0 */
/* Ghidra symbol: FUN_004adfb0 */


byte FUN_004adfb0(longlong param_1,undefined **param_2)

{
  byte bVar1;
  undefined8 uVar2;
  byte local_11;
  undefined8 local_10;
  
  local_10 = 0;
  local_11 = 0;
  if ((param_2 != &PTR_FUN_00486f38) && (param_2 != *(undefined ***)(param_1 + 0x68))) {
    uVar2 = FUN_00410ca0(param_2);
    local_11 = FUN_004adfb0(param_1,uVar2);
    FUN_00410ae0(param_2,&local_10);
    uVar2 = FUN_00419bd0(param_2);
    uVar2 = FUN_00419c40(uVar2);
    bVar1 = FUN_004a5070(local_10,uVar2,param_1 + 0x60);
    local_11 = local_11 | bVar1;
  }
  FUN_00414480(&local_10);
  return local_11;
}

