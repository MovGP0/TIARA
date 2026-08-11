/* Ghidra address: 00fbcda0 */
/* Ghidra symbol: FUN_00fbcda0 */


void FUN_00fbcda0(longlong param_1)

{
  int iVar1;
  int iVar2;
  double dVar3;
  undefined8 local_68;
  undefined8 local_60;
  undefined8 local_58;
  undefined8 local_50 [2];
  undefined8 local_40 [4];
  
  local_68 = 0;
  local_58 = 0;
  local_60 = 0;
  local_50[0] = 0;
  local_40[0] = 0;
  dVar3 = *(double *)(param_1 + 0xd30);
  iVar1 = (**(code **)(**(longlong **)(param_1 + 0x758) + 0x260))(*(longlong **)(param_1 + 0x758));
  iVar1 = *(int *)(param_1 + 0x87c + (longlong)iVar1 * 4);
  FUN_0064dd90(*(undefined8 *)(param_1 + 0x6c0),local_50);
  iVar2 = FUN_00f60f70(local_50[0]);
  dVar3 = (1.0 / dVar3) * (double)(0x100 - iVar2) * (double)iVar1;
  FUN_00b90440(*(undefined8 *)(param_1 + 0x780),dVar3);
  FUN_00b8fd60(&local_60,dVar3,*PTR_DAT_02005310,0,1);
  FUN_00416ba0(&local_58,L"Time: ",local_60);
  FUN_0064de00(*(undefined8 *)(param_1 + 0x798),local_58);
  FUN_00f61040(&local_68,0x100 - (0x100 - iVar2));
  FUN_0064de00(*(undefined8 *)(param_1 + 0x6c0),local_68);
  FUN_00414560(&local_68,3);
  FUN_00414480(local_50);
  FUN_00414480(local_40);
  return;
}

