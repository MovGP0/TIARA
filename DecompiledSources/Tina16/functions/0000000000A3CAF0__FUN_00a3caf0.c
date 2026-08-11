/* Ghidra address: 00a3caf0 */
/* Ghidra symbol: FUN_00a3caf0 */


void FUN_00a3caf0(undefined8 param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  undefined1 *puVar1;
  longlong lVar2;
  undefined1 local_res20;
  
  lVar2 = FUN_00a3c240(param_1,param_3);
  puVar1 = (undefined1 *)(lVar2 + (longlong)param_2 * 3);
  local_res20 = (undefined1)param_4;
  puVar1[2] = local_res20;
  puVar1[1] = (char)((uint)param_4 >> 8);
  *puVar1 = (char)((uint)param_4 >> 0x10);
  return;
}

