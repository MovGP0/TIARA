/* Ghidra address: 00fc7ec0 */
/* Ghidra symbol: FUN_00fc7ec0 */


void FUN_00fc7ec0(longlong param_1)

{
  int iVar1;
  double dVar2;
  undefined8 local_40;
  undefined8 local_38;
  undefined8 local_30 [4];
  
  local_38 = 0;
  local_40 = 0;
  local_30[0] = 0;
  dVar2 = *(double *)(param_1 + 0xc68);
  FUN_0064dd90(*(undefined8 *)(param_1 + 0x6f0),local_30);
  iVar1 = FUN_00f60f70(local_30[0]);
  dVar2 = (1.0 / (dVar2 / 6.0)) * (double)(0x10000 - iVar1);
  FUN_00b90440(*(undefined8 *)(param_1 + 0x728),dVar2);
  FUN_00b8fd60(&local_40,dVar2,*PTR_DAT_02005310,0,1);
  FUN_00416ba0(&local_38,L"Time: ",local_40);
  FUN_0064de00(*(undefined8 *)(param_1 + 0x720),local_38);
  FUN_00414560(&local_40,2);
  FUN_00414480(local_30);
  return;
}

