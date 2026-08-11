/* Ghidra address: 01a90ee0 */
/* Ghidra symbol: FUN_01a90ee0 */


ulonglong FUN_01a90ee0(ulonglong param_1)

{
  undefined4 uVar1;
  
  param_1 = param_1 & 0xffffffff;
  uVar1 = FUN_01a90ed0();
  if ((char)uVar1 != '\0') {
    param_1 = FUN_01a90e30(param_1,uVar1);
  }
  return param_1;
}

