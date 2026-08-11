/* Ghidra address: 0084ca90 */
/* Ghidra symbol: FUN_0084ca90 */


void FUN_0084ca90(longlong param_1)

{
  longlong lVar1;
  longlong lVar2;
  undefined8 local_20 [2];
  
  local_20[0] = 0;
  lVar1 = FUN_00410e60(&DAT_0084c9f8,1);
  if (lVar1 == 0) {
    lVar2 = 0;
  }
  else {
    lVar2 = lVar1 + 0x10;
  }
  FUN_0041b840(local_20,lVar2);
  if (lVar1 == 0) {
    lVar1 = 0;
  }
  else {
    lVar1 = lVar1 + 0x18;
  }
  FUN_0084bcc0(*(undefined8 *)(param_1 + 0x38),lVar1);
  FUN_0084bbb0(*(undefined8 *)(param_1 + 0x38));
  FUN_0084c790(param_1);
  FUN_0041b800(local_20);
  return;
}

