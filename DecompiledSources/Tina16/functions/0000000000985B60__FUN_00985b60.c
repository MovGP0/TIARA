/* Ghidra address: 00985b60 */
/* Ghidra symbol: FUN_00985b60 */


undefined1 FUN_00985b60(longlong *param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined1 auStack_48 [32];
  undefined8 local_28;
  undefined1 *local_20;
  undefined1 local_11;
  undefined8 local_10;
  
  local_20 = auStack_48;
  local_28 = 0;
  *param_3 = 0;
  local_10 = FUN_008f9510(&PTR_FUN_008f6d80,1,0);
  local_11 = (**(code **)(*param_1 + 0xd0))(param_1,param_2,L"UTF-16LE",local_10);
  FUN_008f9640(local_10,&local_28);
  FUN_00414b90(param_3,local_28);
  FUN_00410f20(local_10);
  FUN_00414520(&local_28);
  return local_11;
}

