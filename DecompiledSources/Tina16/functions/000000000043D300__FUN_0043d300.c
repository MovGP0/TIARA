/* Ghidra address: 0043d300 */
/* Ghidra symbol: FUN_0043d300 */


ulonglong FUN_0043d300(int param_1,ushort param_2,undefined2 *param_3,undefined2 *param_4)

{
  uint uVar1;
  
  uVar1 = (uint)param_2;
  *param_3 = (short)(param_1 / (int)uVar1);
  *param_4 = (short)(param_1 % (int)uVar1);
  return (longlong)param_1 / (longlong)(int)uVar1 & 0xffffffff;
}

