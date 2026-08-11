/* Ghidra address: 015720e0 */
/* Ghidra symbol: FUN_015720e0 */


void FUN_015720e0(longlong param_1,undefined8 param_2,longlong *param_3)

{
  longlong lVar1;
  int iVar2;
  int iVar3;
  undefined8 local_res10 [3];
  undefined8 local_40;
  undefined8 local_38;
  undefined8 local_30 [2];
  
  local_40 = 0;
  local_30[0] = 0;
  local_38 = 0;
  local_res10[0] = param_2;
  FUN_00414610(param_2);
  FUN_00416ba0(&local_40,local_res10[0],L">> Begin TPorts.write_to_stringlist <<");
  (**(code **)(*param_3 + 0x78))(param_3,local_40);
  iVar3 = *(int *)(param_1 + 0x10);
  iVar2 = 0;
  if (-1 < iVar3 + -1) {
    do {
      lVar1 = FUN_01571ee0(param_1,iVar2);
      if (*(int *)(lVar1 + 0x58) != 1) {
        FUN_01571a60(lVar1,local_30);
        if (*(int *)(lVar1 + 0x54) == 1) {
          FUN_00416ba0(&local_38,local_30[0],&DAT_015722b8);
        }
        else {
          FUN_00416ba0(&local_38,local_30[0],L" OUT");
        }
        (**(code **)(*param_3 + 0x78))(param_3,local_38);
      }
      iVar2 = iVar2 + 1;
      iVar3 = iVar3 + -1;
    } while (iVar3 != 0);
  }
  (**(code **)(*param_3 + 0x78))(param_3,L">> End TPorts.write_to_stringlist <<");
  (**(code **)(*param_3 + 0x78))(param_3,0);
  FUN_00414560(&local_40,3);
  FUN_00414480(local_res10);
  return;
}

