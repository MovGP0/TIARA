/* Ghidra address: 012e6f00 */
/* Ghidra symbol: FUN_012e6f00 */


bool FUN_012e6f00(longlong *param_1,undefined8 param_2)

{
  longlong lVar1;
  int iVar2;
  undefined8 local_res10 [3];
  undefined8 local_20;
  
  local_20 = 0;
  local_res10[0] = param_2;
  FUN_00414610(param_2);
  FUN_00800470(param_1,7);
  FUN_00416cd0(&local_20,3,L"No reference selected: ",local_res10[0],L".TSC");
  FUN_0064de00(param_1[0xd6],local_20);
  iVar2 = *(int *)(param_1[0xd6] + 0x98);
  if (iVar2 < *(int *)(param_1[0x1a] + 0x1c)) {
    FUN_0064cbf0(param_1[0xd6],*(int *)(param_1[0x1a] + 0x1c));
  }
  else {
    FUN_0064cbf0(param_1,iVar2 + 0x14);
  }
  lVar1 = param_1[0xd7];
  iVar2 = FUN_0040c770((double)((((int)param_1[0x13] - *(int *)(lVar1 + 0x98)) -
                                *(int *)(param_1[0xd8] + 0x98)) + -5) / 3.0);
  FUN_0064cb30(lVar1,iVar2);
  FUN_0064cb30(param_1[0xd8],*(int *)(param_1[0xd7] + 0x90) + *(int *)(param_1[0xd7] + 0x98) + iVar2
              );
  iVar2 = (**(code **)(*param_1 + 0x2d0))(param_1);
  FUN_00805ad0(param_1);
  FUN_00414480(&local_20);
  FUN_00414480(local_res10);
  return iVar2 != 2;
}

