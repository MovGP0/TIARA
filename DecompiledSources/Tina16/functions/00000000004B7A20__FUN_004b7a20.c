/* Ghidra address: 004b7a20 */
/* Ghidra symbol: FUN_004b7a20 */


longlong FUN_004b7a20(longlong *param_1,undefined8 param_2,longlong param_3)

{
  int iVar1;
  longlong lVar2;
  
  if (param_3 == 10) {
    iVar1 = (**(code **)(*param_1 + 0x18))(param_1,param_2,10);
    lVar2 = (longlong)iVar1;
  }
  else {
    FUN_0040a690(param_2,0,0,0xffffc001);
    lVar2 = FUN_004b9610(param_1,param_3);
  }
  return lVar2;
}

