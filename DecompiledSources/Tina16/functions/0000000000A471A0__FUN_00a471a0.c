/* Ghidra address: 00a471a0 */
/* Ghidra symbol: FUN_00a471a0 */


void FUN_00a471a0(longlong param_1,undefined8 param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5,undefined4 param_6,undefined4 param_7)

{
  longlong lVar1;
  
  lVar1 = *(longlong *)(param_1 + 8);
  thunk_FUN_03cc01a5(param_2,param_3,param_4,param_5,param_6,0,0,*(undefined4 *)(lVar1 + 4),
                     *(undefined4 *)(lVar1 + 8),*(undefined8 *)(param_1 + 0x18),lVar1,0,param_7);
  return;
}

