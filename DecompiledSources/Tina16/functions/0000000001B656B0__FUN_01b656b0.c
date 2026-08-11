/* Ghidra address: 01b656b0 */
/* Ghidra symbol: FUN_01b656b0 */


void FUN_01b656b0(longlong param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x9b0);
  FUN_010eae00(uVar1,*(double *)(param_1 + 0xd88) * -5.0 - *(double *)(param_1 + 0xd90),0,0,0);
  FUN_010eae00(uVar1,*(double *)(param_1 + 0xd88) * 5.0 - *(double *)(param_1 + 0xd90),1,0,0);
  FUN_010eb220(uVar1,0xc014000000000000,0,0,0,0);
  FUN_010eb220(uVar1,0x4014000000000000,1,0,0,0);
  return;
}

