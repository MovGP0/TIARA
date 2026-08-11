/* Ghidra address: 00bcf870 */
/* Ghidra symbol: FUN_00bcf870 */


undefined4 FUN_00bcf870(longlong param_1,uint param_2)

{
  longlong lVar1;
  undefined4 uVar2;
  
  if (param_2 < *(uint *)(param_1 + 0x40)) {
    lVar1 = *(longlong *)(*(longlong *)(param_1 + 0x38) + (longlong)(int)param_2 * 0x28);
    uVar2 = 0;
    if (lVar1 != 0) {
      uVar2 = *(undefined4 *)(lVar1 + -4);
    }
  }
  else {
    uVar2 = 0;
  }
  return uVar2;
}

