/* Ghidra address: 0084c500 */
/* Ghidra symbol: FUN_0084c500 */


void FUN_0084c500(longlong param_1,undefined8 param_2)

{
  longlong lVar1;
  longlong lVar2;
  undefined8 local_20 [2];
  
  local_20[0] = 0;
  lVar1 = FUN_00410e60(&DAT_0084c408,1);
  if (lVar1 == 0) {
    lVar2 = 0;
  }
  else {
    lVar2 = lVar1 + 0x10;
  }
  FUN_0041b840(local_20,lVar2);
  *(undefined8 *)(lVar1 + 0x18) = param_2;
  *(undefined4 *)(lVar1 + 0x20) = 0;
  if (lVar1 == 0) {
    lVar2 = 0;
  }
  else {
    lVar2 = lVar1 + 0x30;
  }
  FUN_0084bcc0(*(undefined8 *)(param_1 + 0x38),lVar2);
  FUN_004c57a0(*(undefined8 *)(lVar1 + 0x18),*(undefined4 *)(lVar1 + 0x20));
  if (lVar1 == 0) {
    lVar1 = 0;
  }
  else {
    lVar1 = lVar1 + 0x28;
  }
  FUN_0084bcc0(*(undefined8 *)(param_1 + 0x38),lVar1);
  FUN_0041b800(local_20);
  return;
}

