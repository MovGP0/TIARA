/* Ghidra address: 00808150 */
/* Ghidra symbol: FUN_00808150 */


void FUN_00808150(longlong param_1,undefined8 param_2)

{
  char cVar1;
  
  FUN_004ae7e0(*(undefined8 *)(param_1 + 0xb0),param_2);
  cVar1 = FUN_004113d0(param_2,&PTR_FUN_007f0370);
  if (cVar1 != '\0') {
    FUN_004ae7e0(*(undefined8 *)(param_1 + 0xa8),param_2);
    FUN_0080e3f0(DAT_02012668);
  }
  return;
}

