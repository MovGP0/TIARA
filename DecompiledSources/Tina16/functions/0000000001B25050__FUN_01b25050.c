/* Ghidra address: 01b25050 */
/* Ghidra symbol: FUN_01b25050 */


undefined1 FUN_01b25050(undefined8 param_1,undefined8 param_2)

{
  undefined1 uVar1;
  undefined8 local_78;
  undefined8 local_70 [2];
  undefined1 local_60 [48];
  undefined1 local_30 [40];
  
  local_70[0] = 0;
  local_78 = 0;
  FUN_00417580(local_30,&DAT_00ea5f80);
  FUN_00417580(local_60,&DAT_00ea5ae8);
  FUN_00ea7ad0(&local_78,param_1,0);
  FUN_00416cd0(local_70,3,&DAT_01b251a0,local_78,&DAT_01b251a0);
  FUN_00ea7a10(local_30,local_70[0],2);
  FUN_00ea82d0(local_30,local_60,param_2);
  uVar1 = FUN_00ea74f0(local_60);
  FUN_00414560(&local_78,2);
  FUN_00417740(local_60,&DAT_00ea5ae8);
  FUN_00417740(local_30,&DAT_00ea5f80);
  return uVar1;
}

