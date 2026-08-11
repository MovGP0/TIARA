/* Ghidra address: 0109de30 */
/* Ghidra symbol: FUN_0109de30 */


void FUN_0109de30(longlong param_1)

{
  longlong lVar1;
  undefined8 local_20;
  undefined8 local_18;
  undefined8 local_10;
  
  local_10 = 0;
  local_18 = 0;
  local_20 = 0;
  lVar1 = *(longlong *)(*(longlong *)(param_1 + 0x1660) + 0x3548);
  _Dbg_GetTimeD(*(undefined8 *)(param_1 + 0x9c0),lVar1 + 0xc60,lVar1 + 0xc68);
  FUN_00b8fd60(&local_18,
               *(undefined8 *)(*(longlong *)(*(longlong *)(param_1 + 0x1660) + 0x3548) + 0xc60),2,0,
               1);
  FUN_0043f750(&local_20,
               *(undefined4 *)(*(longlong *)(*(longlong *)(param_1 + 0x1660) + 0x3548) + 0xc68));
  FUN_00416cd0(&local_10,4,local_18,&DAT_0109df58,&DAT_0109df68,local_20);
  FUN_0064de00(*(undefined8 *)(param_1 + 0x708),local_10);
  FUN_00414560(&local_20,3);
  return;
}

