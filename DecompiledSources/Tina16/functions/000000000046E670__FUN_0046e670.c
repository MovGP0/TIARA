/* Ghidra address: 0046e670 */
/* Ghidra symbol: FUN_0046e670 */


undefined1 FUN_0046e670(longlong *param_1,undefined8 param_2,undefined8 param_3,int param_4)

{
  byte local_19;
  
  (**(code **)(*param_1 + 0x70))(param_1,param_2,param_3,&local_19);
  return (&DAT_01dc5fbe)[(ulonglong)local_19 + (longlong)param_4 * 3];
}

