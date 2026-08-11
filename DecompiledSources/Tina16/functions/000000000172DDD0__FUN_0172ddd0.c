/* Ghidra address: 0172ddd0 */
/* Ghidra symbol: FUN_0172ddd0 */


undefined8 FUN_0172ddd0(longlong param_1,undefined8 param_2,int param_3)

{
  undefined8 local_58;
  undefined8 local_50 [2];
  undefined8 local_40;
  undefined1 local_32;
  undefined1 local_31 [41];
  
  local_58 = 0;
  local_50[0] = 0;
  local_40 = 0;
  FUN_0172a910(*(undefined8 *)(param_1 + 8),*(int *)(param_1 + 0x170) + param_3 * 0x2a);
  FUN_0172a920(*(undefined8 *)(param_1 + 8),&local_32,0x2a);
  FUN_004169a0(&local_40,local_31);
  FUN_00450070(local_50,local_40,&DAT_0172df38,&DAT_0172df4c,1);
  FUN_00414b50(&local_40,local_50[0]);
  FUN_00450070(&local_58,local_40,&DAT_0172df60,&DAT_0172df4c,1);
  FUN_00414b50(&local_40,local_58);
  FUN_0172ba20(*(longlong *)(param_1 + 8),param_2,local_40,
               *(undefined8 *)(*(longlong *)(param_1 + 8) + 0x20),0);
  FUN_00414560(&local_58,2);
  FUN_00414480(&local_40);
  return param_2;
}

