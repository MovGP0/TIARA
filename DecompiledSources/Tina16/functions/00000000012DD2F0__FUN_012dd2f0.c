/* Ghidra address: 012dd2f0 */
/* Ghidra symbol: FUN_012dd2f0 */


void FUN_012dd2f0(longlong param_1,int param_2,int param_3,undefined4 param_4)

{
  longlong lVar1;
  longlong lVar2;
  
  lVar1 = *(longlong *)(param_1 + 0x48);
  if (param_3 <= *(int *)(lVar1 + 0x10) + -1) {
    if (param_2 == 0) {
      lVar1 = FUN_004aeac0(lVar1,param_3);
      lVar1 = *(longlong *)(lVar1 + 0x20);
      lVar2 = 0;
      if (lVar1 != 0) {
        lVar2 = *(longlong *)(lVar1 + -8);
      }
      FUN_012dd420(param_1,param_4,lVar1,lVar2 + -1);
    }
    else if (param_2 == 1) {
      lVar1 = FUN_004aeac0(lVar1,param_3);
      lVar1 = *(longlong *)(lVar1 + 0x28);
      lVar2 = 0;
      if (lVar1 != 0) {
        lVar2 = *(longlong *)(lVar1 + -8);
      }
      FUN_012dd420(param_1,param_4,lVar1,lVar2 + -1);
    }
    else if (param_2 == 2) {
      lVar1 = FUN_004aeac0(lVar1,param_3);
      lVar1 = *(longlong *)(lVar1 + 0x30);
      lVar2 = 0;
      if (lVar1 != 0) {
        lVar2 = *(longlong *)(lVar1 + -8);
      }
      FUN_012dd420(param_1,param_4,lVar1,lVar2 + -1);
    }
  }
  return;
}

