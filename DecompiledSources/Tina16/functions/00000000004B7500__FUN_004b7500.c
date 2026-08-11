/* Ghidra address: 004b7500 */
/* Ghidra symbol: FUN_004b7500 */


longlong FUN_004b7500(longlong *param_1,undefined8 param_2)

{
  int iVar1;
  
  iVar1 = (**(code **)(*param_1 + 0x18))(param_1,param_2,1);
  return (longlong)iVar1;
}

