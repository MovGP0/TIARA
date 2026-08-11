/* Ghidra address: 01cfab80 */
/* Ghidra symbol: FUN_01cfab80 */


undefined8 FUN_01cfab80(longlong *param_1,undefined8 param_2)

{
  undefined8 local_50 [2];
  undefined2 local_39 [6];
  undefined1 local_2d [13];
  undefined8 local_20;
  
  local_50[0] = 0;
  FUN_00417580(local_39,&DAT_01d36af8);
  local_39[0] = *(undefined2 *)((longlong)param_1 + 0xba);
  (**(code **)(*param_1 + 0x288))(param_1,local_50);
  FUN_00414b50(local_2d,local_50[0]);
  local_20 = FUN_01cfd6a0(param_1);
  FUN_00417c40(param_2,local_39,&DAT_01d36af8);
  FUN_00414480(local_50);
  FUN_00417740(local_39,&DAT_01d36af8);
  return param_2;
}

