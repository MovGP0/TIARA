/* Ghidra address: 01c23490 */
/* Ghidra symbol: FUN_01c23490 */


int FUN_01c23490(longlong param_1,undefined8 *param_2)

{
  int iVar1;
  int iVar2;
  undefined8 uVar3;
  int local_24;
  undefined8 local_20;
  
  local_20 = 0;
  uVar3 = FUN_00609e10(*(undefined8 *)(param_1 + 0x4d0));
  local_24 = FUN_005fdff0(uVar3,*param_2);
  local_24 = local_24 + 10;
  if (param_2[1] != 0) {
    iVar1 = (**(code **)(**(longlong **)(param_1 + 0x4c0) + 0x60))(*(longlong **)(param_1 + 0x4c0));
    uVar3 = FUN_00609e10(*(undefined8 *)(param_1 + 0x4d0));
    FUN_004169a0(&local_20,param_2[1] + 8);
    iVar2 = FUN_005fdff0(uVar3,local_20);
    local_24 = local_24 + iVar1 + iVar2 + 10;
  }
  FUN_00414480(&local_20);
  return local_24;
}

