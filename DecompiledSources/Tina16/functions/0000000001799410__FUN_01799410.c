/* Ghidra address: 01799410 */
/* Ghidra symbol: FUN_01799410 */


void FUN_01799410(longlong param_1)

{
  char cVar1;
  undefined1 auStack_78 [40];
  undefined8 local_50;
  undefined8 local_48;
  undefined8 local_40;
  undefined8 local_38;
  undefined1 *local_30;
  undefined8 local_20;
  
  local_30 = auStack_78;
  local_50 = 0;
  local_48 = 0;
  local_40 = 0;
  local_38 = 0;
  cVar1 = FUN_01795d10(param_1);
  if (cVar1 != '\0') {
    FUN_00416ba0(&local_38,*(undefined8 *)(param_1 + 0xcc0),L"CLCC\\");
    FUN_00724420(*(undefined8 *)(param_1 + 0xa78),local_38);
    cVar1 = (**(code **)(**(longlong **)(param_1 + 0xa78) + 0xa8))(*(longlong **)(param_1 + 0xa78));
    if (cVar1 != '\0') {
      FUN_008088b0(*(undefined8 *)PTR_DAT_02005950,0xfff5);
      FUN_01798ba0(param_1);
      FUN_00724270(*(undefined8 *)(param_1 + 0xa78),&local_40);
      FUN_00414ad0(param_1 + 0xc98,local_40);
      FUN_004414c0(&local_48,*(undefined8 *)(param_1 + 0xc98),L".DDB");
      FUN_00414ad0(param_1 + 0xc98,local_48);
      local_20 = FUN_0177f3d0(&DAT_0177ed10,1);
      FUN_00724270(*(undefined8 *)(param_1 + 0xa78),&local_50);
      FUN_0177f510(local_20,local_50,param_1);
      FUN_00410f20(local_20);
      FUN_01795670(param_1,1);
      FUN_008088b0(*(undefined8 *)PTR_DAT_02005950,0);
      FUN_01798270(param_1);
      (**(code **)(**(longlong **)(param_1 + 0x758) + 0x268))(*(longlong **)(param_1 + 0x758),0);
      FUN_017989e0(param_1);
      FUN_0064e770(*(undefined8 *)(param_1 + 0x948));
      (**(code **)(**(longlong **)(param_1 + 0xc38) + 0x268))(*(longlong **)(param_1 + 0xc38),0);
    }
  }
  FUN_00414480(&local_50);
  FUN_00414480(&local_48);
  FUN_00414480(&local_40);
  FUN_00414480(&local_38);
  return;
}

