/* Ghidra address: 00afeec0 */
/* Ghidra symbol: FUN_00afeec0 */


void FUN_00afeec0(undefined8 param_1,longlong param_2,undefined1 *param_3)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined8 local_50;
  undefined8 local_48;
  undefined8 local_40;
  undefined8 local_38;
  undefined8 local_30 [2];
  undefined8 local_20 [2];
  
  local_50 = 0;
  local_40 = 0;
  local_48 = 0;
  local_38 = 0;
  local_30[0] = 0;
  local_20[0] = 0;
  FUN_0043e130(local_30,param_2);
  iVar1 = FUN_004170c0(L"IDEXPAND_",local_30[0],1);
  if (iVar1 == 1) {
    iVar1 = 0;
    if (param_2 != 0) {
      iVar1 = *(int *)(param_2 + -4);
    }
    FUN_00416dc0(local_20,param_2,10,iVar1 + -9);
    FUN_00416ba0(&local_38,local_20[0],L"Plus");
    uVar2 = FUN_00afedd0(param_1,local_38);
    FUN_00416ba0(&local_40,local_20[0],L"Plus");
    FUN_00416ba0(&local_48,local_20[0],L"Minus");
    uVar3 = FUN_00afedd0(param_1,local_48);
    FUN_00afee40(param_1,local_40,uVar3);
    FUN_00416ba0(&local_50,local_20[0],L"Minus");
    FUN_00afee40(param_1,local_50,uVar2);
    FUN_00aff110(param_1);
    *param_3 = 1;
  }
  FUN_00414560(&local_50,5);
  FUN_00414480(local_20);
  return;
}

