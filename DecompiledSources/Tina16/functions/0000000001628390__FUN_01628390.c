/* Ghidra address: 01628390 */
/* Ghidra symbol: FUN_01628390 */


void FUN_01628390(undefined8 param_1,undefined8 param_2,longlong param_3)

{
  undefined8 local_res8 [4];
  undefined1 local_108 [256];
  
  local_res8[0] = param_1;
  FUN_00414610(param_1);
  FUN_00416910(local_108,local_res8[0],0xff);
  FUN_0161ea50(0,local_108,
               *(undefined8 *)(*(longlong *)(*(longlong *)(param_3 + 0x13a30) + 0x200) + 0x10),
               *(undefined1 *)(param_3 + 0x13a2c),param_2,*(undefined8 *)(param_3 + 0x10));
  FUN_00414480(local_res8);
  return;
}

