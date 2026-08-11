/* Ghidra address: 0177aaa0 */
/* Ghidra symbol: FUN_0177aaa0 */


undefined8 FUN_0177aaa0(longlong param_1)

{
  undefined8 uVar1;
  
  if (*(longlong *)(param_1 + 0x50) == 0) {
    uVar1 = FUN_0177b080(&PTR_FUN_017674b8,1,param_1);
    *(undefined8 *)(param_1 + 0x50) = uVar1;
  }
  return *(undefined8 *)(param_1 + 0x50);
}

