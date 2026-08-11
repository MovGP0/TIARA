/* Ghidra address: 00693790 */
/* Ghidra symbol: FUN_00693790 */


void FUN_00693790(longlong *param_1,longlong param_2)

{
  longlong lVar1;
  undefined8 local_28;
  longlong *local_20;
  
  if ((param_2 != 0) && (param_1[0xf] == 0)) {
    param_1[0xd] = param_2;
    local_28 = *(undefined8 *)(*param_1 + 0x90);
    local_20 = param_1;
    lVar1 = FUN_004d6210(&local_28);
    param_1[0xf] = lVar1;
    lVar1 = thunk_FUN_04118143(param_1[0xd],0xfffffffc);
    param_1[0x10] = lVar1;
    thunk_FUN_03c9d277(param_1[0xd],0xfffffffc,param_1[0xf]);
  }
  return;
}

