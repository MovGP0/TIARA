/* Ghidra address: 00fac7d0 */
/* Ghidra symbol: FUN_00fac7d0 */


void FUN_00fac7d0(longlong param_1)

{
  undefined8 uVar1;
  undefined8 local_38;
  undefined8 local_30;
  undefined8 local_28;
  undefined8 local_20;
  undefined8 local_18;
  undefined8 local_10;
  
  local_30 = 0;
  local_38 = 0;
  local_20 = 0;
  local_28 = 0;
  local_10 = 0;
  local_18 = 0;
  FUN_00b8fd60(&local_18,1.0 / *(double *)(param_1 + 0x970),*PTR_DAT_02005310,0,1);
  FUN_00416cd0(&local_10,3,L"Fosc: ",local_18,&DAT_00faca04);
  FUN_0064de00(*(undefined8 *)(param_1 + 0x6e8),local_10);
  uVar1 = FUN_00facae0(param_1,0x406fe00000000000,*(undefined8 *)(param_1 + 0x970),
                       0x4030000000000000);
  FUN_00b8fd60(&local_28,uVar1,*PTR_DAT_02005310,0,1);
  FUN_00416ba0(&local_20,L"Max Period: ",local_28);
  FUN_0064de00(*(undefined8 *)(param_1 + 0x6f0),local_20);
  uVar1 = FUN_00facad0(param_1,0x4090000000000000,*(undefined8 *)(param_1 + 0x970),
                       0x4030000000000000);
  FUN_00b8fd60(&local_38,uVar1,*PTR_DAT_02005310,0,1);
  FUN_00416ba0(&local_30,L"Max Duty Cycle: ",local_38);
  FUN_0064de00(*(undefined8 *)(param_1 + 0x6f8),local_30);
  FUN_00b90440(*(undefined8 *)(param_1 + 0x6d8),*(undefined8 *)(param_1 + 0x978));
  FUN_00b90440(*(undefined8 *)(param_1 + 0x6e0),*(undefined8 *)(param_1 + 0x980));
  FUN_00414560(&local_38,6);
  return;
}

