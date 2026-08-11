/* Ghidra address: 009dc930 */
/* Ghidra symbol: FUN_009dc930 */


undefined4 FUN_009dc930(undefined8 param_1,undefined8 param_2)

{
  int iVar1;
  longlong lVar2;
  undefined8 uVar3;
  undefined1 auStack_68 [40];
  undefined8 local_40;
  undefined1 *local_38;
  undefined4 local_30;
  longlong *local_20;
  
  local_38 = auStack_68;
  local_40 = 0;
  local_20 = (longlong *)FUN_009d4aa0(param_1);
  if (local_20 != (longlong *)0x0) {
    lVar2 = FUN_009dab20(param_1);
    iVar1 = FUN_00416420(*(undefined8 *)(lVar2 + 0xc0),0);
    if (iVar1 == 0) {
      uVar3 = FUN_009dab20(param_1);
      (**(code **)(*local_20 + 0xd0))(local_20,uVar3,L"UTF-8",param_2);
    }
    else {
      uVar3 = FUN_009dab20(param_1);
      lVar2 = FUN_009dab20(param_1);
      FUN_004168b0(&local_40,*(undefined8 *)(lVar2 + 0xc0));
      (**(code **)(*local_20 + 0xd0))(local_20,uVar3,local_40,param_2);
    }
    FUN_00410f20(local_20);
  }
  local_30 = 0;
  FUN_00414480(&local_40);
  return local_30;
}

