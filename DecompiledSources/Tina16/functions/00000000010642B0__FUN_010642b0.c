/* Ghidra address: 010642b0 */
/* Ghidra symbol: FUN_010642b0 */


undefined8 FUN_010642b0(undefined8 param_1,undefined8 *param_2)

{
  longlong lVar1;
  undefined8 *puVar2;
  undefined8 local_78;
  undefined8 local_70;
  undefined8 local_68;
  undefined8 local_60 [9];
  
  local_78 = 0;
  local_70 = 0;
  local_68 = 0;
  puVar2 = local_60;
  for (lVar1 = 9; lVar1 != 0; lVar1 = lVar1 + -1) {
    *puVar2 = *param_2;
    param_2 = param_2 + 1;
    puVar2 = puVar2 + 1;
  }
  FUN_004179d0(local_60,&DAT_010571b8);
  FUN_00414b50(&local_68,local_60[2]);
  FUN_00450070(&local_70,local_68,&DAT_010643f0,&DAT_01064400,1);
  FUN_00414b50(&local_68,local_70);
  FUN_00450070(&local_78,local_68,&LAB_01064414,&DAT_01064400,1);
  FUN_00414b50(&local_68,local_78);
  FUN_00414ad0(param_1,local_68);
  FUN_00414560(&local_78,3);
  FUN_00417740(local_60,&DAT_010571b8);
  return param_1;
}

