/* Ghidra address: 00cf2c10 */
/* Ghidra symbol: FUN_00cf2c10 */


void FUN_00cf2c10(longlong param_1,undefined8 param_2,longlong param_3)

{
  undefined1 local_f0 [8];
  undefined1 local_e8 [200];
  
  FUN_00cf2b30(param_1,local_e8);
  FUN_00409a70(param_2,local_f0,8);
  (**(code **)PTR_DAT_020017a8)(local_f0,param_3,local_e8,1);
  FUN_00cf2b30(param_1 + 7,local_e8);
  (**(code **)PTR_DAT_020017a8)(local_f0,param_3 + 8,local_e8,1);
  FUN_00cf2b30(param_1 + 0xe,local_e8);
  (**(code **)PTR_DAT_020017a8)(local_f0,param_3 + 0x10,local_e8,1);
  return;
}

