/* Ghidra address: 00779bb0 */
/* Ghidra symbol: FUN_00779bb0 */


ulonglong FUN_00779bb0(longlong *param_1,uint param_2,undefined1 *param_3)

{
  undefined8 uVar1;
  ulonglong uVar2;
  
  uVar2 = (ulonglong)param_2;
  if (((param_2 & 0x80000000) != 0) && (param_3 != (undefined1 *)0x0)) {
    uVar1 = (**(code **)(*param_1 + 0xa8))(param_1,*param_3);
    uVar2 = (**(code **)PTR_DAT_02001ee8)(uVar1,param_2 & 0x7fffffff);
  }
  return uVar2;
}

