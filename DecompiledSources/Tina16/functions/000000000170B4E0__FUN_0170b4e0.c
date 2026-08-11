/* Ghidra address: 0170b4e0 */
/* Ghidra symbol: FUN_0170b4e0 */


void FUN_0170b4e0(longlong param_1,longlong *param_2)

{
  undefined4 *puVar1;
  undefined8 local_130;
  undefined1 local_124 [256];
  undefined4 local_24;
  undefined4 local_20;
  short local_1a;
  
  local_130 = 0;
  (**(code **)(**(longlong **)(param_1 + 0x50) + 0x18))(*(longlong **)(param_1 + 0x50),&local_1a,2);
  if (-1 < (short)(local_1a + -1)) {
    do {
      FUN_0170b490(param_1,local_124,0xff,&local_20,&local_24);
      puVar1 = (undefined4 *)FUN_004095c0(8);
      *puVar1 = local_20;
      puVar1[1] = local_24;
      FUN_004169a0(&local_130,local_124);
      (**(code **)(*param_2 + 0x80))(param_2,local_130,puVar1);
      local_1a = local_1a + -1;
    } while (local_1a != 0);
  }
  FUN_00414480(&local_130);
  return;
}

