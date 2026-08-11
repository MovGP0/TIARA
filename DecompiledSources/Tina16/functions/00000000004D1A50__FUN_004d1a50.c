/* Ghidra address: 004d1a50 */
/* Ghidra symbol: FUN_004d1a50 */


void FUN_004d1a50(undefined8 param_1,undefined8 *param_2)

{
  undefined8 local_50;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined1 local_38 [8];
  undefined8 local_30;
  undefined8 local_28;
  undefined8 uStack_20;
  
  local_28 = *param_2;
  uStack_20 = param_2[1];
  FUN_00417580(&local_50,&DAT_00483468);
  local_30 = 0;
  local_48 = local_28;
  uStack_40 = uStack_20;
  local_50 = param_1;
  FUN_0041b800(local_38);
  FUN_004d17e0(&PTR_FUN_00483698,&local_50,0,0);
  FUN_00417740(&local_50,&DAT_00483468);
  return;
}

