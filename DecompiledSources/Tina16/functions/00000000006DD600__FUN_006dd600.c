/* Ghidra address: 006dd600 */
/* Ghidra symbol: FUN_006dd600 */


undefined8 FUN_006dd600(longlong param_1)

{
  longlong lVar1;
  undefined8 uVar2;
  longlong lVar3;
  
  uVar2 = 0;
  lVar1 = FUN_006dc7a0(param_1);
  if ((lVar1 != 0) && (*(longlong *)(param_1 + 0x20) != 0)) {
    uVar2 = FUN_006dc7a0(param_1);
    lVar1 = FUN_00611f50(uVar2,*(undefined8 *)(param_1 + 0x20));
    if (lVar1 == 0) {
      uVar2 = FUN_006dc7a0(param_1);
      lVar1 = FUN_00611f70(uVar2,*(undefined8 *)(param_1 + 0x20));
    }
    lVar3 = *(longlong *)(param_1 + 0x20);
    while ((lVar1 == 0 && (lVar3 != 0))) {
      uVar2 = FUN_006dc7a0(param_1);
      lVar3 = FUN_00611fb0(uVar2,lVar3);
      uVar2 = FUN_006dc7a0(param_1);
      lVar1 = FUN_00611f70(uVar2,lVar3);
    }
    uVar2 = FUN_006df650(*(undefined8 *)(param_1 + 8),lVar1);
  }
  return uVar2;
}

