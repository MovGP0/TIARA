/* Ghidra address: 004b7900 */
/* Ghidra symbol: FUN_004b7900 */


longlong FUN_004b7900(longlong *param_1,undefined4 *param_2,longlong param_3)

{
  int iVar1;
  longlong lVar2;
  
  if (param_3 == 4) {
    iVar1 = (**(code **)(*param_1 + 0x18))(param_1,param_2,4);
    lVar2 = (longlong)iVar1;
  }
  else {
    *param_2 = 0;
    lVar2 = FUN_004b9610(param_1,param_3);
  }
  return lVar2;
}

