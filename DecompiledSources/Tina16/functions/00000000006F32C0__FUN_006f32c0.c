/* Ghidra address: 006f32c0 */
/* Ghidra symbol: FUN_006f32c0 */


void FUN_006f32c0(longlong param_1,int param_2)

{
  longlong lVar1;
  undefined8 uVar2;
  
  if (param_2 < 0) {
    lVar1 = FUN_006f6fe0(param_1);
    if (lVar1 != 0) {
      uVar2 = FUN_006f6fe0(param_1);
      FUN_006ef2d0(uVar2,3,0);
    }
  }
  else {
    uVar2 = FUN_006efcb0(*(undefined8 *)(param_1 + 0x4e0),param_2);
    FUN_006ef2d0(uVar2,3,1);
    uVar2 = FUN_006efcb0(*(undefined8 *)(param_1 + 0x4e0),param_2);
    FUN_006f7150(param_1,uVar2);
  }
  return;
}

