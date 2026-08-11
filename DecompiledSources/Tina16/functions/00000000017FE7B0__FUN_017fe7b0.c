/* Ghidra address: 017fe7b0 */
/* Ghidra symbol: FUN_017fe7b0 */


void FUN_017fe7b0(undefined8 param_1,undefined8 param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined8 local_res10 [3];
  undefined8 local_40;
  code *local_38;
  undefined8 local_30;
  undefined8 local_20;
  
  local_40 = 0;
  local_20 = 0;
  local_res10[0] = param_2;
  FUN_00414630(param_2);
  if (*(char *)(*(longlong *)PTR_DAT_02004e40 + 0x27c1) == '\0') {
    FUN_01c77470(*(undefined8 *)PTR_DAT_02004e40,0);
    FUN_0135ac00(*(undefined8 *)PTR_DAT_02001f10);
    FUN_01350dd0(&local_40,local_res10);
    FUN_00416880(&local_20,local_40);
    uVar1 = FUN_01350fa0(local_res10);
    uVar2 = FUN_01350fa0(local_res10);
    uVar3 = FUN_01350fa0(local_res10);
    FUN_0139e320(local_20,uVar1,uVar2,uVar3);
    FUN_0064e770(*(undefined8 *)(*(longlong *)PTR_DAT_02004e40 + 0xa10));
  }
  else {
    local_38 = FUN_017fe750;
    local_30 = param_1;
    FUN_00f836b0(&local_38);
  }
  FUN_004144d0(&local_40);
  FUN_00414480(&local_20);
  FUN_004144d0(local_res10);
  return;
}

