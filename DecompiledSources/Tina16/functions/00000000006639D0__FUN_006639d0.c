/* Ghidra address: 006639d0 */
/* Ghidra symbol: FUN_006639d0 */


void FUN_006639d0(longlong param_1,longlong param_2)

{
  char cVar1;
  undefined4 uVar2;
  longlong lVar3;
  undefined8 uVar4;
  
  if (param_2 != 0) {
    lVar3 = FUN_00660e20(param_2);
    if ((lVar3 == 0) && (param_2 != *(longlong *)(*(longlong *)(param_1 + 0x40) + 0x90))) {
      cVar1 = FUN_00660620(param_2);
      if (cVar1 != '\0') {
        if (*(longlong *)(param_2 + 0x28) == *(longlong *)(*(longlong *)(param_1 + 0x40) + 0x90)) {
          *(undefined4 *)(param_2 + 0x40) = *(undefined4 *)(*(longlong *)(param_1 + 0x40) + 0x98);
        }
        else {
          uVar2 = FUN_00660cd0(*(undefined8 *)(*(longlong *)(param_2 + 0x28) + 0x28));
          *(undefined4 *)(param_2 + 0x40) = uVar2;
        }
      }
    }
    uVar4 = FUN_00660e70(param_2);
    FUN_006639d0(param_1,uVar4);
    uVar4 = FUN_00660e20(param_2);
    FUN_006639d0(param_1,uVar4);
  }
  return;
}

