/* Ghidra address: 014fe060 */
/* Ghidra symbol: FUN_014fe060 */


void FUN_014fe060(longlong param_1,undefined8 param_2,undefined8 param_3,double param_4)

{
  undefined8 uVar1;
  undefined8 local_28;
  undefined8 local_20;
  undefined8 local_18;
  undefined8 local_10;
  
  local_28 = 0;
  local_20 = 0;
  local_18 = 0;
  local_10 = 0;
  FUN_00b8fd60(&local_10,param_2,*PTR_DAT_02005310,0,1);
  FUN_0084e3e0(*(undefined8 *)(param_1 + 0x6d0),1,0,local_10);
  if (*(double *)PTR_DAT_020011b0 <= param_4) {
    uVar1 = FUN_00b89270();
    FUN_00b8e520(uVar1,&local_20,0x12d);
    FUN_0084e3e0(*(undefined8 *)(param_1 + 0x6d0),1,1,local_20);
  }
  else {
    FUN_00b8fd60(&local_18,param_4,*PTR_DAT_02005310,0,1);
    FUN_0084e3e0(*(undefined8 *)(param_1 + 0x6d0),1,1,local_18);
  }
  FUN_00b8fd60(&local_28,param_3,*PTR_DAT_02005310,0,1);
  FUN_0084e3e0(*(undefined8 *)(param_1 + 0x6d0),1,2,local_28);
  FUN_00414560(&local_28,4);
  return;
}

