/* Ghidra address: 004af4a0 */
/* Ghidra symbol: FUN_004af4a0 */


void FUN_004af4a0(longlong param_1,undefined8 param_2)

{
  longlong lVar1;
  longlong lVar2;
  undefined8 local_20 [2];
  
  local_20[0] = 0;
  lVar1 = FUN_00410e60(&DAT_004af3f8,1);
  if (lVar1 == 0) {
    lVar2 = 0;
  }
  else {
    lVar2 = lVar1 + 0x10;
  }
  FUN_0041b840(local_20,lVar2);
  *(undefined8 *)(lVar1 + 0x18) = param_2;
  if (1 < *(int *)(param_1 + 0x10)) {
    if (lVar1 == 0) {
      lVar1 = 0;
    }
    else {
      lVar1 = lVar1 + 0x20;
    }
    FUN_004af060(*(undefined8 *)(param_1 + 8),0,*(int *)(param_1 + 0x10) + -1,lVar1);
  }
  FUN_0041b800(local_20);
  return;
}

