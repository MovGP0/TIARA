/* Ghidra address: 011412d0 */
/* Ghidra symbol: FUN_011412d0 */


void FUN_011412d0(longlong param_1,undefined8 param_2)

{
  char cVar1;
  undefined8 uVar2;
  
  cVar1 = FUN_004113d0(*(undefined8 *)(param_1 + 0x4c0),&PTR_FUN_00673008);
  if (cVar1 == '\0') {
    uVar2 = FUN_00b90090(param_2);
    *(undefined8 *)(param_1 + 0x789) = uVar2;
    if (*(char *)(param_1 + 0x1007b0) == '\0') {
      FUN_01141050(param_1);
    }
    else {
      *(undefined1 *)(param_1 + 0x1007b0) = 0;
      FUN_00801e40(param_1,param_2);
    }
  }
  return;
}

