/* Ghidra address: 004b9610 */
/* Ghidra symbol: FUN_004b9610 */


longlong FUN_004b9610(longlong *param_1,undefined8 param_2)

{
  longlong lVar1;
  longlong lVar2;
  
  lVar1 = FUN_004b6da0(param_1);
  lVar2 = (**(code **)(*param_1 + 0x50))(param_1,param_2,1);
  return lVar2 - lVar1;
}

