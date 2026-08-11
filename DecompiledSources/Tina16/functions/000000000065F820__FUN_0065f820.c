/* Ghidra address: 0065f820 */
/* Ghidra symbol: FUN_0065f820 */


void FUN_0065f820(longlong param_1,undefined8 param_2)

{
  int iVar1;
  undefined8 local_18;
  undefined8 local_10;
  
  local_18 = 0;
  local_10 = 0;
  FUN_0065ebd0(param_1,param_2);
  if (*(char *)(param_1 + 0x498) == '\0') {
    FUN_0064dd90(param_1,&local_10);
    iVar1 = FUN_005fdff0(*(undefined8 *)(param_1 + 0x490),local_10);
    FUN_0064cbf0(param_1,iVar1 + 6);
    FUN_0064dd90(param_1,&local_18);
    iVar1 = FUN_005fdfd0(*(undefined8 *)(param_1 + 0x490),local_18);
    FUN_0064cc50(param_1,iVar1 + 4);
  }
  FUN_00414560(&local_18,2);
  return;
}

