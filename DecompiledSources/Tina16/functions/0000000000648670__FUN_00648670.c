/* Ghidra address: 00648670 */
/* Ghidra symbol: FUN_00648670 */


undefined8 FUN_00648670(undefined4 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  if (*(longlong *)(*(longlong *)PTR_DAT_02004030 + 0x2d0) == 0) {
    uVar1 = 0;
  }
  else {
    uVar1 = thunk_FUN_041b2403(*(longlong *)(*(longlong *)PTR_DAT_02004030 + 0x2d0),param_1,param_2,
                               param_3);
  }
  return uVar1;
}

