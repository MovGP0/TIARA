/* Ghidra address: 0081dec0 */
/* Ghidra symbol: FUN_0081dec0 */


void FUN_0081dec0(longlong param_1)

{
  longlong lVar1;
  undefined8 uVar2;
  
  *(undefined4 *)(param_1 + 0x108) = 0;
  *(undefined4 *)(param_1 + 0x74) = 0;
  lVar1 = FUN_00786090(param_1);
  if (lVar1 != 0) {
    uVar2 = FUN_00786090(param_1);
    thunk_FUN_041b2403(uVar2,0x112,0xf120,0);
  }
  return;
}

