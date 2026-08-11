/* Ghidra address: 0081df10 */
/* Ghidra symbol: FUN_0081df10 */


void FUN_0081df10(longlong param_1)

{
  longlong lVar1;
  undefined8 uVar2;
  int iVar3;
  
  lVar1 = FUN_00786090(param_1);
  if (lVar1 != 0) {
    *(undefined4 *)(param_1 + 0x108) = 0;
    *(undefined4 *)(param_1 + 0x74) = 0;
    uVar2 = FUN_00786090(param_1);
    iVar3 = thunk_FUN_041b570f(uVar2);
    if (iVar3 == 0) {
      uVar2 = FUN_00786090(param_1);
      thunk_FUN_041b2403(uVar2,0x112,0xf030,0);
    }
    else {
      uVar2 = FUN_00786090(param_1);
      thunk_FUN_041b2403(uVar2,0x112,0xf120,0);
    }
  }
  return;
}

