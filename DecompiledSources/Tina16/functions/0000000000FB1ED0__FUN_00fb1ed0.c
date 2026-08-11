/* Ghidra address: 00fb1ed0 */
/* Ghidra symbol: FUN_00fb1ed0 */


void FUN_00fb1ed0(longlong param_1)

{
  int iVar1;
  int iVar2;
  double dVar3;
  undefined8 local_50;
  undefined8 local_48;
  undefined8 local_40;
  undefined8 local_38;
  undefined8 local_30 [3];
  
  local_48 = 0;
  local_50 = 0;
  local_40 = 0;
  local_38 = 0;
  local_30[0] = 0;
  dVar3 = *(double *)(param_1 + 0xc10);
  FUN_0043e130(local_30,*(undefined8 *)(param_1 + 0xc20));
  iVar1 = FUN_004170c0(L"ATMEGA",local_30[0],1);
  if (iVar1 == 0) {
    FUN_0043e130(&local_38,*(undefined8 *)(param_1 + 0xc20));
    iVar1 = FUN_004170c0(&DAT_00fb2100,local_38,1);
    if (iVar1 == 0) {
      iVar1 = (**(code **)(**(longlong **)(param_1 + 0x6e0) + 0x260))
                        (*(longlong **)(param_1 + 0x6e0));
      iVar1 = *(int *)(param_1 + 0x734 + (longlong)iVar1 * 4);
      goto LAB_00fb1fc5;
    }
  }
  iVar1 = (**(code **)(**(longlong **)(param_1 + 0x6e0) + 0x260))(*(longlong **)(param_1 + 0x6e0));
  iVar1 = *(int *)(param_1 + 0x754 + (longlong)iVar1 * 4);
LAB_00fb1fc5:
  FUN_0064dd90(*(undefined8 *)(param_1 + 0x6c0),&local_40);
  iVar2 = FUN_00f60f70(local_40);
  dVar3 = (1.0 / dVar3) * (double)(0x100 - iVar2) * (double)iVar1;
  FUN_00b90440(*(undefined8 *)(param_1 + 0x700),dVar3);
  FUN_00b8fd60(&local_50,dVar3,*PTR_DAT_02005310,0,1);
  FUN_00416ba0(&local_48,L"Time: ",local_50);
  FUN_0064de00(*(undefined8 *)(param_1 + 0x708),local_48);
  FUN_00414560(&local_50,2);
  FUN_00414480(&local_40);
  FUN_00414560(&local_38,2);
  return;
}

