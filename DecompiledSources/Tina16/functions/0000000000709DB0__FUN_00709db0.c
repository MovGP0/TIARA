/* Ghidra address: 00709db0 */
/* Ghidra symbol: FUN_00709db0 */


void FUN_00709db0(longlong param_1)

{
  undefined8 uVar1;
  char cVar2;
  
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  cVar2 = FUN_004113d0(uVar1,&PTR_FUN_006abd68);
  if (cVar2 == '\0') {
    uVar1 = FUN_00786090(param_1);
    thunk_FUN_041b2403(uVar1,0x130b,0,0);
  }
  else {
    FUN_006d5120(uVar1);
  }
  return;
}

