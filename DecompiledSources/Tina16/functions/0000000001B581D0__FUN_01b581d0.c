/* Ghidra address: 01b581d0 */
/* Ghidra symbol: FUN_01b581d0 */


void FUN_01b581d0(longlong param_1,undefined4 param_2)

{
  undefined8 uVar1;
  double dVar2;
  double dVar3;
  
  uVar1 = FUN_004113f0(*(undefined8 *)(param_1 + 0x9b0),&PTR_FUN_010e62f0);
  if (*(char *)(param_1 + 0xd6c) == '\0') {
    dVar2 = (double)FUN_00b90090(*(undefined8 *)(param_1 + 0xcc0));
    dVar3 = (double)FUN_00b90090(*(undefined8 *)(param_1 + 0xcc0));
    dVar3 = dVar3 + *(double *)(param_1 + 0xd38) * 10.0;
  }
  else {
    dVar2 = *(double *)(param_1 + 0xd38) * -5.0 - *(double *)(param_1 + 0xd48);
    dVar3 = *(double *)(param_1 + 0xd38) * 5.0 - *(double *)(param_1 + 0xd48);
  }
  FUN_010eae00(uVar1,dVar2,0,0,0);
  FUN_010eae00(uVar1,dVar3,1,0,0);
  FUN_010e8e30(*(undefined8 *)(param_1 + 0x9b0),param_2);
  return;
}

