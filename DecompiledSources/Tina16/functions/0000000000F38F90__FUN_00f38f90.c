/* Ghidra address: 00f38f90 */
/* Ghidra symbol: FUN_00f38f90 */


void FUN_00f38f90(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  longlong lVar1;
  longlong lVar2;
  
  lVar1 = *(longlong *)(param_1 + 8);
  lVar2 = 0;
  if (lVar1 != 0) {
    lVar2 = *(longlong *)(lVar1 + -8);
  }
  FUN_00f3aa30(lVar1,lVar2 - 1U & 0xffffffff,param_2,param_3,param_4,0,
               *(undefined4 *)(param_1 + 0x10));
  return;
}

