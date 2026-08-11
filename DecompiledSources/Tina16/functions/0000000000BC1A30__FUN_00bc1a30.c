/* Ghidra address: 00bc1a30 */
/* Ghidra symbol: FUN_00bc1a30 */


byte FUN_00bc1a30(longlong *param_1,undefined8 param_2)

{
  byte bVar1;
  int iVar2;
  undefined8 uVar3;
  undefined8 local_res10 [3];
  undefined1 auStack_68 [40];
  undefined1 *local_40;
  int local_28;
  byte local_21;
  undefined8 local_20;
  
  local_40 = auStack_68;
  local_res10[0] = param_2;
  FUN_00414610(param_2);
  local_20 = FUN_005da0f0(&PTR_FUN_005d5a90,1,local_res10[0]);
  local_21 = 1;
  iVar2 = (**(code **)(*param_1 + 0x88))();
  local_28 = 0;
  if (-1 < iVar2 + -1) {
    do {
      uVar3 = (**(code **)(*param_1 + 0x90))(param_1,local_28);
      bVar1 = FUN_00bc0fa0(uVar3,local_20);
      local_21 = local_21 & bVar1;
      local_28 = local_28 + 1;
      iVar2 = iVar2 + -1;
    } while (iVar2 != 0);
  }
  FUN_00410f20(local_20);
  FUN_00414480(local_res10);
  return local_21;
}

