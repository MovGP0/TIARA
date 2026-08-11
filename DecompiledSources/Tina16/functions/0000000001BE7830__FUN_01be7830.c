/* Ghidra address: 01be7830 */
/* Ghidra symbol: FUN_01be7830 */


undefined4 FUN_01be7830(longlong param_1)

{
  undefined4 uVar1;
  longlong lVar2;
  
  if (*(longlong *)(param_1 + 0x498) == 0) {
    uVar1 = 0;
  }
  else {
    lVar2 = FUN_01bfaa70(*(longlong *)(param_1 + 0x498));
    uVar1 = *(undefined4 *)(*(longlong *)(lVar2 + 0x10) + 0x10);
  }
  return uVar1;
}

