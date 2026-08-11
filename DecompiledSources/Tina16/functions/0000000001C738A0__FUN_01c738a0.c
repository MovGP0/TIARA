/* Ghidra address: 01c738a0 */
/* Ghidra symbol: FUN_01c738a0 */


void FUN_01c738a0(longlong param_1,undefined4 param_2)

{
  undefined8 local_10;
  
  local_10 = 0;
  FUN_00c85700(*(undefined8 *)PTR_DAT_02002c40,&local_10,param_2,*(undefined8 *)PTR_DAT_02001f18,0,0
              );
  FUN_0064de00(*(undefined8 *)(*(longlong *)(param_1 + 0x60) + 0x6d8),local_10);
  FUN_00414480(&local_10);
  return;
}

