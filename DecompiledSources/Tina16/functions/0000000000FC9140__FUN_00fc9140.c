/* Ghidra address: 00fc9140 */
/* Ghidra symbol: FUN_00fc9140 */


void FUN_00fc9140(longlong param_1)

{
  undefined8 uVar1;
  undefined8 local_30;
  undefined8 local_28;
  undefined8 local_20 [2];
  undefined8 local_10;
  
  local_30 = 0;
  local_28 = 0;
  local_20[0] = 0;
  local_10 = 0;
  FUN_00b8fd60(local_20,*(undefined8 *)(param_1 + 0xbe0),*PTR_DAT_02005310,0,1);
  FUN_00416cd0(&local_10,3,L"Fosc: ",local_20[0],&DAT_00fc93b4);
  FUN_0064de00(*(undefined8 *)(param_1 + 0x6e8),local_10);
  uVar1 = FUN_00fc9490(param_1,(double)*(int *)(param_1 + 0x728),1.0 / *(double *)(param_1 + 0xbe0),
                       (double)*(int *)(param_1 + 0x724));
  FUN_00b8fd60(&local_28,uVar1,*PTR_DAT_02005310,0,1);
  FUN_00416ba0(&local_10,L"Max Period: ",local_28);
  FUN_0064de00(*(undefined8 *)(param_1 + 0x6f0),local_10);
  uVar1 = FUN_00fc9480(param_1,(double)*(int *)(param_1 + 0x728),1.0 / *(double *)(param_1 + 0xbe0),
                       (double)*(int *)(param_1 + 0x724));
  FUN_00b8fd60(&local_30,uVar1,*PTR_DAT_02005310,0,1);
  FUN_00416ba0(&local_10,L"Max Duty Cycle: ",local_30);
  FUN_0064de00(*(undefined8 *)(param_1 + 0x6f8),local_10);
  uVar1 = FUN_00fc9490(param_1,(double)(*(int *)(param_1 + 0xb68) + *(int *)(param_1 + 0xb6c)),
                       1.0 / *(double *)(param_1 + 0xbe0),(double)*(int *)(param_1 + 0x724));
  FUN_00b90440(*(undefined8 *)(param_1 + 0x6d8),uVar1);
  FUN_00b90440(*(undefined8 *)(param_1 + 0x6e0),*(undefined8 *)(param_1 + 0xb60));
  FUN_00414560(&local_30,3);
  FUN_00414480(&local_10);
  return;
}

