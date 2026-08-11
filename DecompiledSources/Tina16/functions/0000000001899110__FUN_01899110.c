/* Ghidra address: 01899110 */
/* Ghidra symbol: FUN_01899110 */


void FUN_01899110(undefined8 param_1,longlong param_2)

{
  longlong lVar1;
  longlong lVar2;
  
  lVar2 = *(longlong *)(param_2 + 0x10);
  while (lVar2 != 0) {
    FUN_01899110(param_1,lVar2);
    lVar1 = *(longlong *)(lVar2 + 0x18);
    FUN_00410f20(lVar2);
    lVar2 = lVar1;
  }
  return;
}

