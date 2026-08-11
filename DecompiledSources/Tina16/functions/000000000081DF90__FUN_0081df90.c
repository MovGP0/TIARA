/* Ghidra address: 0081df90 */
/* Ghidra symbol: FUN_0081df90 */


void FUN_0081df90(longlong param_1)

{
  longlong lVar1;
  undefined8 uVar2;
  int iVar3;
  
  lVar1 = FUN_00786090(param_1);
  if (lVar1 != 0) {
    *(undefined4 *)(param_1 + 0x108) = 0;
    *(undefined4 *)(param_1 + 0x74) = 0;
    uVar2 = FUN_00786090(param_1);
    iVar3 = FUN_007f9220(uVar2);
    if (iVar3 == 0) {
      uVar2 = FUN_00786090(param_1);
      thunk_FUN_041b2403(uVar2,0x112,0xf020,0);
    }
    else {
      uVar2 = FUN_00786090(param_1);
      thunk_FUN_041b2403(uVar2,0x112,0xf120,0);
    }
  }
  return;
}

