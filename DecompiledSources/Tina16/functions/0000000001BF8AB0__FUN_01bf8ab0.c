/* Ghidra address: 01bf8ab0 */
/* Ghidra symbol: FUN_01bf8ab0 */


void FUN_01bf8ab0(longlong param_1)

{
  longlong lVar1;
  undefined8 local_28;
  undefined8 uStack_20;
  
  FUN_0061cca0(param_1);
  lVar1 = *(longlong *)(param_1 + 0xe0);
  if (lVar1 != 0) {
    local_28 = 0;
    uStack_20 = 0;
    FUN_01bfa3f0(lVar1,lVar1,&local_28);
  }
  return;
}

