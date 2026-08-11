/* Ghidra address: 005bbab0 */
/* Ghidra symbol: FUN_005bbab0 */


longlong FUN_005bbab0(void)

{
  undefined8 uVar1;
  undefined4 local_10;
  undefined4 uStack_c;
  
  uVar1 = FUN_00448820();
  uStack_c = (int)((ulonglong)uVar1 >> 0x20);
  local_10 = (int)uVar1;
  return (longlong)uStack_c * 86400000 + (longlong)local_10;
}

