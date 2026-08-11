/* Ghidra address: 004d39c0 */
/* Ghidra symbol: FUN_004d39c0 */


void FUN_004d39c0(void)

{
  longlong lVar1;
  longlong lVar2;
  undefined8 local_20 [2];
  
  local_20[0] = 0;
  DAT_020115e8 = DAT_020115e8 + -1;
  if (DAT_020115e8 == -1) {
    lVar1 = FUN_00410e60(&DAT_004d3928,1);
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
    lVar1 = FUN_0051fd70(&PTR_FUN_004d3638,1,lVar1);
    if (lVar1 == 0) {
      lVar1 = 0;
    }
    else {
      lVar1 = lVar1 + 0x18;
    }
    FUN_0041b840(&DAT_020115e0,lVar1);
  }
  FUN_0041b800(local_20);
  return;
}

