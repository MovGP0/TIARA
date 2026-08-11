/* Ghidra address: 015bfee0 */
/* Ghidra symbol: FUN_015bfee0 */


bool FUN_015bfee0(undefined8 param_1,undefined8 param_2,undefined4 param_3)

{
  longlong lVar1;
  longlong *plVar2;
  
  plVar2 = (longlong *)FUN_015bfd70(param_1,param_2);
  lVar1 = *plVar2;
  if (lVar1 != 0) {
    *(undefined4 *)(lVar1 + 0x10) = param_3;
  }
  return lVar1 != 0;
}

