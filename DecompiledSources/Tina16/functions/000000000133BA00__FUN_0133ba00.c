/* Ghidra address: 0133ba00 */
/* Ghidra symbol: FUN_0133ba00 */


void FUN_0133ba00(longlong param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 local_18;
  undefined8 local_10;
  
  local_18 = 0;
  local_10 = 0;
  uVar1 = FUN_00b89270();
  FUN_00b8e520(uVar1,&local_10,0x12a);
  FUN_0084e3e0(*(undefined8 *)(param_1 + 0x6d8),0,0,local_10);
  FUN_00b8fd60(&local_18,param_2,*PTR_DAT_02005310,0,1);
  FUN_0084e3e0(*(undefined8 *)(param_1 + 0x6d8),1,0,local_18);
  FUN_00414560(&local_18,2);
  return;
}

