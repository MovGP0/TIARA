/* Ghidra address: 007d7390 */
/* Ghidra symbol: FUN_007d7390 */


void FUN_007d7390(undefined8 param_1,int param_2,undefined8 param_3)

{
  int iVar1;
  undefined8 uVar2;
  undefined1 auStack_68 [32];
  undefined8 local_48;
  undefined1 *local_40;
  int local_2c;
  longlong *local_28;
  undefined8 local_20;
  
  local_40 = auStack_68;
  local_48 = 0;
  local_20 = 0;
  local_28 = (longlong *)0x0;
  FUN_00614880(param_1);
  local_28 = (longlong *)FUN_007d5160(&PTR_FUN_007d3710,1,5,5);
  (**(code **)(*local_28 + 0x10))(local_28,param_1);
  FUN_007d6450(param_1);
  iVar1 = (**(code **)(*local_28 + 0x90))(local_28);
  if (iVar1 < param_2) {
    FUN_0041ddd0(&local_48,PTR_PTR_020025e8);
    uVar2 = FUN_0044d490(&PTR_FUN_00472870,1,local_48);
    FUN_004134c0(uVar2);
  }
  local_20 = FUN_0060cbe0(&PTR_FUN_005fa0c8,1);
  local_2c = 0;
  iVar1 = param_2;
  if (-1 < param_2 + -1) {
    do {
      FUN_007d5d60(local_28,local_2c,local_20);
      FUN_007d5c50(param_1,local_20);
      local_2c = local_2c + 1;
      iVar1 = iVar1 + -1;
    } while (iVar1 != 0);
  }
  FUN_007d5c50(param_1,param_3);
  iVar1 = (**(code **)(*local_28 + 0x90))(local_28);
  local_2c = param_2;
  if (param_2 <= iVar1 + -1) {
    iVar1 = ((iVar1 + -1) - param_2) + 1;
    do {
      FUN_007d5d60(local_28,local_2c,local_20);
      FUN_007d5c50(param_1,local_20);
      local_2c = local_2c + 1;
      iVar1 = iVar1 + -1;
    } while (iVar1 != 0);
  }
  FUN_006148c0(param_1);
  FUN_00410f20(local_20);
  FUN_00410f20(local_28);
  FUN_00414480(&local_48);
  return;
}

