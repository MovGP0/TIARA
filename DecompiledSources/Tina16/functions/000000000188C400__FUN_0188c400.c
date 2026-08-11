/* Ghidra address: 0188c400 */
/* Ghidra symbol: FUN_0188c400 */


void FUN_0188c400(longlong param_1)

{
  int iVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar2 = FUN_00416740(*(undefined8 *)(param_1 + 0x60));
  iVar1 = thunk_FUN_041ce06f(uVar2,param_1 + 0x50,0);
  if (iVar1 != 0) {
    uVar2 = FUN_00416740(*(undefined8 *)(param_1 + 0x60));
    iVar1 = thunk_FUN_03c8dec4(0,*(undefined8 *)(param_1 + 0x50),uVar2,0,0,0);
    if (0 < iVar1) {
      uVar2 = thunk_FUN_0412a7bb(0x42,(longlong)iVar1);
      *(undefined8 *)(param_1 + 200) = uVar2;
      if (*(longlong *)(param_1 + 200) != 0) {
        uVar2 = thunk_FUN_0416a623(*(longlong *)(param_1 + 200));
        *(undefined8 *)(param_1 + 0xe0) = uVar2;
        uVar3 = FUN_00416740(*(undefined8 *)(param_1 + 0x60));
        iVar1 = thunk_FUN_03c8dec4(0,*(undefined8 *)(param_1 + 0x50),uVar3,uVar2,uVar2,2);
        if (iVar1 < 0) {
          thunk_FUN_04172795(*(undefined8 *)(param_1 + 200));
          thunk_FUN_03d5bf3d(*(undefined8 *)(param_1 + 200));
          *(undefined8 *)(param_1 + 200) = 0;
          *(undefined8 *)(param_1 + 0xe0) = 0;
        }
      }
    }
  }
  return;
}

