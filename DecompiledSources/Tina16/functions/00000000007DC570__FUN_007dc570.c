/* Ghidra address: 007dc570 */
/* Ghidra symbol: FUN_007dc570 */


longlong FUN_007dc570(undefined8 param_1)

{
  longlong lVar1;
  longlong lVar2;
  
  lVar1 = FUN_0064aca0(param_1);
  lVar2 = 0;
  if (lVar1 != 0) {
    lVar2 = FUN_00656230(lVar1,param_1,0,0,0);
    if (lVar2 == 0) {
      lVar2 = lVar1;
    }
  }
  return lVar2;
}

