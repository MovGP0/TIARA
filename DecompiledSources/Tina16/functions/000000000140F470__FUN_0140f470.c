/* Ghidra address: 0140f470 */
/* Ghidra symbol: FUN_0140f470 */


undefined1 FUN_0140f470(longlong param_1,undefined8 param_2,undefined8 param_3,undefined1 *param_4)

{
  undefined2 uVar1;
  undefined8 local_10;
  
  local_10 = 0;
  *param_4 = 0;
  uVar1 = (**(code **)(**(longlong **)(param_1 + 0x768) + 0xf8))(*(longlong **)(param_1 + 0x768));
  FUN_00c857e0(*(undefined8 *)PTR_DAT_02002c40,&local_10,uVar1,*(undefined8 *)PTR_DAT_02001f18,0,0);
  FUN_01b1e020(local_10);
  FUN_00414480(&local_10);
  return 1;
}

