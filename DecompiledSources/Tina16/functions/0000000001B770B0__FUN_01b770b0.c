/* Ghidra address: 01b770b0 */
/* Ghidra symbol: FUN_01b770b0 */


void FUN_01b770b0(longlong param_1,undefined8 param_2)

{
  int iVar1;
  undefined8 uVar2;
  longlong lVar3;
  int iVar4;
  undefined8 local_res10 [3];
  undefined8 local_38;
  undefined8 local_30;
  
  local_38 = 0;
  local_30 = 0;
  local_res10[0] = param_2;
  FUN_00414610(param_2);
  FUN_00416ba0(&local_30,local_res10[0],L"\\hotkeys.ini");
  uVar2 = FUN_005da0f0(&PTR_FUN_005d5a90,1,local_30);
  iVar1 = FUN_007e2ef0();
  iVar4 = 0;
  if (-1 < iVar1 + -1) {
    do {
      lVar3 = FUN_007e2f10(*(undefined8 *)(*(longlong *)(param_1 + 0x500) + 0x80),iVar4);
      FUN_00416cd0(&local_38,3,*(undefined8 *)(param_1 + 0x10),&LAB_01b77238,
                   *(undefined8 *)(lVar3 + 0x10));
      FUN_01b76f80(uVar2,local_38,lVar3);
      iVar4 = iVar4 + 1;
      iVar1 = iVar1 + -1;
    } while (iVar1 != 0);
  }
  FUN_00410f20(uVar2);
  FUN_00414480(&local_38);
  FUN_00414480(&local_30);
  FUN_00414480(local_res10);
  return;
}

