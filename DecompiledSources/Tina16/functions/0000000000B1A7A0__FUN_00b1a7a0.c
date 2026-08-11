/* Ghidra address: 00b1a7a0 */
/* Ghidra symbol: FUN_00b1a7a0 */


ulonglong FUN_00b1a7a0(longlong param_1,undefined8 param_2,undefined4 param_3)

{
  ulonglong uVar1;
  
  uVar1 = FUN_00b18690(0xfffffff,param_3,param_2);
  return (uVar1 & 0xffffffff) % (ulonglong)*(uint *)(param_1 + 0x10);
}

