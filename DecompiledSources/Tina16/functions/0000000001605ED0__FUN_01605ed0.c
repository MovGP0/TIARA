/* Ghidra address: 01605ed0 */
/* Ghidra symbol: FUN_01605ed0 */


void FUN_01605ed0(undefined8 param_1,longlong *param_2,longlong *param_3)

{
  undefined8 uVar1;
  char cVar2;
  int iVar3;
  undefined8 local_res8;
  longlong *local_res10;
  longlong *local_res18;
  undefined1 auStack_78 [40];
  undefined8 local_50;
  undefined8 local_48;
  undefined1 *local_40;
  int local_2c;
  undefined8 local_28;
  undefined8 local_20;
  
  local_40 = auStack_78;
  local_48 = 0;
  local_50 = 0;
  local_res8 = param_1;
  local_res10 = param_2;
  local_res18 = param_3;
  FUN_00414610(param_1);
  local_28 = FUN_0157f930(&PTR_FUN_01576b50,1);
  cVar2 = FUN_00440a20(local_res8,1);
  if (cVar2 != '\0') {
    FUN_004412f0(local_res8);
  }
  FUN_0157fa90(local_28,local_res8,3);
  iVar3 = (**(code **)(*local_res10 + 0x28))();
  local_2c = 0;
  if (-1 < iVar3 + -1) {
    do {
      (**(code **)(*local_res10 + 0x18))(local_res10,&local_48,local_2c);
      (**(code **)(*local_res18 + 0x18))(local_res18,&local_50,local_2c);
      FUN_015825c0(local_28,local_48,local_50,8);
      local_2c = local_2c + 1;
      iVar3 = iVar3 + -1;
    } while (iVar3 != 0);
  }
  FUN_0157fc90(local_28);
  uVar1 = local_28;
  local_20 = local_28;
  local_28 = 0;
  FUN_00410f20(uVar1);
  FUN_00414560(&local_50,2);
  FUN_00414480(&local_res8);
  return;
}

