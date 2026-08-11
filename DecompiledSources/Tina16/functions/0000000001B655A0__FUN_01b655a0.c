/* Ghidra address: 01b655a0 */
/* Ghidra symbol: FUN_01b655a0 */


void FUN_01b655a0(longlong param_1,undefined4 param_2)

{
  undefined8 uVar1;
  double dVar2;
  double dVar3;
  
  uVar1 = FUN_004113f0(*(undefined8 *)(param_1 + 0x9b0),&PTR_FUN_010e62f0);
  if (*(char *)(param_1 + 0xdb4) == '\0') {
    dVar2 = (double)FUN_00b90090(*(undefined8 *)(param_1 + 0xcb8));
    dVar3 = (double)FUN_00b90090(*(undefined8 *)(param_1 + 0xcb8));
    dVar3 = dVar3 + *(double *)(param_1 + 0xd88) * 10.0;
  }
  else {
    dVar2 = *(double *)(param_1 + 0xd88) * -5.0 - *(double *)(param_1 + 0xd90);
    dVar3 = *(double *)(param_1 + 0xd88) * 5.0 - *(double *)(param_1 + 0xd90);
  }
  FUN_010eae00(uVar1,dVar2,0,0,0);
  FUN_010eae00(uVar1,dVar3,1,0,0);
  FUN_010e8e30(*(undefined8 *)(param_1 + 0x9b0),param_2);
  return;
}

