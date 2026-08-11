/* Ghidra address: 004b76e0 */
/* Ghidra symbol: FUN_004b76e0 */


longlong FUN_004b76e0(longlong *param_1,undefined8 param_2)

{
  int iVar1;
  
  iVar1 = (**(code **)(*param_1 + 0x18))(param_1,param_2,4);
  return (longlong)iVar1;
}

