/* Ghidra address: 004b7a70 */
/* Ghidra symbol: FUN_004b7a70 */


longlong FUN_004b7a70(longlong *param_1,undefined8 param_2,undefined4 param_3)

{
  int iVar1;
  
  iVar1 = (**(code **)(*param_1 + 0x30))(param_1,param_2,0,param_3);
  return (longlong)iVar1;
}

