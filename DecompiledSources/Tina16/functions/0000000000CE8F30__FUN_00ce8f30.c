/* Ghidra address: 00ce8f30 */
/* Ghidra symbol: FUN_00ce8f30 */


void FUN_00ce8f30(undefined8 param_1,longlong param_2)

{
  undefined1 *puVar1;
  char cVar2;
  undefined1 auStack_38 [40];
  undefined1 *local_10;
  
  local_10 = auStack_38;
  puVar1 = auStack_38;
  if ((param_2 != 0) &&
     (cVar2 = FUN_004113d0(param_2,&PTR_FUN_00ce6390), puVar1 = local_10, cVar2 == '\0')) {
    FUN_004b1ce0(param_1,param_2);
    return;
  }
  local_10 = puVar1;
  FUN_00ce9860(param_1,1);
  FUN_00ce97f0(param_1);
  FUN_00ce94c0(param_1,param_2);
  FUN_00ce98a0(param_1,1);
  return;
}

