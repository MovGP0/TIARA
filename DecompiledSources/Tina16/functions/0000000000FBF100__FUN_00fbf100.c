/* Ghidra address: 00fbf100 */
/* Ghidra symbol: FUN_00fbf100 */


void FUN_00fbf100(longlong param_1)

{
  int iVar1;
  int iVar2;
  double dVar3;
  undefined8 local_50;
  undefined8 local_48;
  undefined8 local_40 [2];
  undefined8 local_30 [4];
  
  local_48 = 0;
  local_50 = 0;
  local_40[0] = 0;
  local_30[0] = 0;
  dVar3 = *(double *)(param_1 + 0xc60);
  iVar1 = (**(code **)(**(longlong **)(param_1 + 0x700) + 0x260))(*(longlong **)(param_1 + 0x700));
  iVar1 = *(int *)(param_1 + 0x794 + (longlong)iVar1 * 4);
  FUN_0064dd90(*(undefined8 *)(param_1 + 0x6c0),local_40);
  iVar2 = FUN_00f60f70(local_40[0]);
  dVar3 = (1.0 / dVar3) * (double)(0x100 - iVar2) * (double)iVar1;
  FUN_00b90440(*(undefined8 *)(param_1 + 0x750),dVar3);
  FUN_00b8fd60(&local_50,dVar3,*PTR_DAT_02005310,0,1);
  FUN_00416ba0(&local_48,L"Time: ",local_50);
  FUN_0064de00(*(undefined8 *)(param_1 + 0x758),local_48);
  FUN_00414560(&local_50,2);
  FUN_00414480(local_40);
  FUN_00414480(local_30);
  return;
}

