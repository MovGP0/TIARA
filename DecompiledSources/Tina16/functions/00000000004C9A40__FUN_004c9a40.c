/* Ghidra address: 004c9a40 */
/* Ghidra symbol: FUN_004c9a40 */


undefined8 FUN_004c9a40(longlong param_1,undefined8 param_2)

{
  longlong lVar1;
  longlong lVar2;
  
  if (*(short *)(param_1 + 0x56) == 2) {
    FUN_004c9990(param_1,param_2);
  }
  else {
    lVar1 = *(longlong *)(param_1 + 0x60);
    lVar2 = 0;
    if (lVar1 != 0) {
      lVar2 = *(longlong *)(lVar1 + -8);
    }
    FUN_00456360(param_2,lVar1,lVar2 + -1);
  }
  return param_2;
}

