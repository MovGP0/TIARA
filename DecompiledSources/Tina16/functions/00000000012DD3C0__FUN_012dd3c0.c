/* Ghidra address: 012dd3c0 */
/* Ghidra symbol: FUN_012dd3c0 */


undefined1 FUN_012dd3c0(longlong param_1,int param_2,int param_3)

{
  undefined1 uVar1;
  longlong lVar2;
  
  uVar1 = 0;
  lVar2 = *(longlong *)(param_1 + 0x48);
  if (param_3 <= *(int *)(lVar2 + 0x10) + -1) {
    if (param_2 == 0) {
      lVar2 = FUN_004aeac0(lVar2,param_3);
      uVar1 = *(undefined1 *)(lVar2 + 0x38);
    }
    else if (param_2 == 1) {
      lVar2 = FUN_004aeac0(lVar2,param_3);
      uVar1 = *(undefined1 *)(lVar2 + 0x39);
    }
    else if (param_2 == 2) {
      lVar2 = FUN_004aeac0(lVar2,param_3);
      uVar1 = *(undefined1 *)(lVar2 + 0x3a);
    }
  }
  return uVar1;
}

