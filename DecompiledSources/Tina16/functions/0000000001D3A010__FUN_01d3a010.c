/* Ghidra address: 01d3a010 */
/* Ghidra symbol: FUN_01d3a010 */


void FUN_01d3a010(undefined8 *param_1,char param_2,undefined8 param_3)

{
  undefined2 uVar1;
  int iVar2;
  undefined8 uVar3;
  undefined8 local_40;
  undefined8 local_38;
  undefined8 local_30 [2];
  longlong local_20;
  
  local_40 = 0;
  local_38 = 0;
  local_30[0] = 0;
  local_20 = 0;
  uVar1 = *(undefined2 *)(PTR_DAT_02004830 + 0x17a);
  *(undefined2 *)(PTR_DAT_02004830 + 0x17a) = 0x2e;
  if (param_2 == '\x03') {
    *param_1 = param_3;
    FUN_00b8fd60(local_30,*param_1,6,0,1);
    FUN_00415dd0(&local_20,local_30[0],0);
    FUN_004095f0(param_1[1]);
    iVar2 = 0;
    if (local_20 != 0) {
      iVar2 = *(int *)(local_20 + -4);
    }
    uVar3 = FUN_00409570((longlong)(iVar2 + 1));
    param_1[1] = uVar3;
    FUN_004425e0(uVar3,local_20);
  }
  else if (param_2 == '\x06') {
    *param_1 = param_3;
    FUN_00b8fd60(&local_38,*param_1,6,0,1);
    FUN_00415dd0(&local_20,local_38,0);
    FUN_004095f0(param_1[1]);
    iVar2 = 0;
    if (local_20 != 0) {
      iVar2 = *(int *)(local_20 + -4);
    }
    uVar3 = FUN_00409570((longlong)(iVar2 + 1));
    param_1[1] = uVar3;
    FUN_004425e0(uVar3,local_20);
  }
  else if (param_2 == '\r') {
    *param_1 = param_3;
    FUN_00b8fd60(&local_40,*param_1,6,0,1);
    FUN_00415dd0(&local_20,local_40,0);
    FUN_004095f0(param_1[2]);
    iVar2 = 0;
    if (local_20 != 0) {
      iVar2 = *(int *)(local_20 + -4);
    }
    uVar3 = FUN_00409570((longlong)(iVar2 + 1));
    param_1[2] = uVar3;
    FUN_004425e0(uVar3,local_20);
  }
  *(undefined2 *)(PTR_DAT_02004830 + 0x17a) = uVar1;
  FUN_00414560(&local_40,3);
  FUN_004144d0(&local_20);
  return;
}

