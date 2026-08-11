/* Ghidra address: 00b4dd10 */
/* Ghidra symbol: FUN_00b4dd10 */


void FUN_00b4dd10(longlong param_1,undefined8 param_2)

{
  undefined4 uVar1;
  int iVar2;
  longlong lVar3;
  undefined8 local_res10 [3];
  undefined8 local_28;
  undefined8 local_20 [2];
  
  local_20[0] = 0;
  local_28 = 0;
  local_res10[0] = param_2;
  FUN_00414650(local_res10);
  uVar1 = FUN_00b4dab0(param_1);
  lVar3 = FUN_00b23d20(**(undefined8 **)(param_1 + 0x18),uVar1);
  FUN_004167a0(local_20,lVar3 + 9);
  FUN_004168b0(&local_28,local_res10[0]);
  iVar2 = FUN_00416db0(local_20[0],local_28);
  if (iVar2 != 0) {
    FUN_00b23820(lVar3,local_res10[0]);
    uVar1 = FUN_00b23dd0(**(undefined8 **)(param_1 + 0x18));
    FUN_00b4da60(param_1,uVar1);
    (**(code **)**(undefined8 **)(param_1 + 0x10))(*(undefined8 **)(param_1 + 0x10),param_1);
  }
  FUN_00414560(&local_28,2);
  FUN_00414520(local_res10);
  return;
}

