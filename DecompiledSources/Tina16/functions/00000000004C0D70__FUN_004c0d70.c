/* Ghidra address: 004c0d70 */
/* Ghidra symbol: FUN_004c0d70 */


void FUN_004c0d70(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  longlong lVar1;
  undefined8 local_20;
  
  lVar1 = *(longlong *)(*(longlong *)(param_1 + 0x90) + 0x60);
  local_20 = FUN_004bd480(&PTR_FUN_004bb0a0,1,param_2,
                          *(undefined8 *)(*(longlong *)(param_1 + 0x90) + 0x30),param_3,0,param_4);
  FUN_00597e50(lVar1 + 8,&local_20);
  return;
}

