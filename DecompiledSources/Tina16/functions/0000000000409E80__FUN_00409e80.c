/* Ghidra address: 00409e80 */
/* Ghidra symbol: FUN_00409e80 */


ulonglong FUN_00409e80(uint param_1)

{
  uint uVar1;
  
  uVar1 = (*(code *)PTR_FUN_01db9068)();
  return (ulonglong)param_1 * (ulonglong)uVar1 >> 0x20;
}

