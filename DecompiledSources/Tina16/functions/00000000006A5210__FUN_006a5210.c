/* Ghidra address: 006a5210 */
/* Ghidra symbol: FUN_006a5210 */


void FUN_006a5210(longlong param_1)

{
  int iVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  code *local_20;
  code *local_18;
  longlong local_10;
  
  local_20 = (code *)0x0;
  if (*(int *)(param_1 + 8) == 0) {
    *(undefined8 *)(param_1 + 0x10) = *(undefined8 *)(*(longlong *)PTR_DAT_02004030 + 0x2d0);
    if (*(longlong *)(param_1 + 0x10) == 0) {
      local_18 = FUN_006a6060;
      local_10 = param_1;
      uVar3 = FUN_004d6440(&local_18);
      *(undefined8 *)(param_1 + 0x10) = uVar3;
      *(undefined1 *)(param_1 + 0x18) = 1;
    }
    iVar1 = thunk_FUN_041186c5(*(undefined8 *)(param_1 + 0x10));
    if (iVar1 == 0) {
      uVar2 = thunk_FUN_03ce33a6();
      FUN_0044b630(&local_20,uVar2,0);
      local_18 = local_20;
      local_10 = CONCAT71(local_10._1_7_,0x11);
      uVar3 = FUN_0044d8d0(&PTR_FUN_006a50b8,1,PTR_PTR_020018c0,&local_18,0);
      FUN_004134c0(uVar3);
    }
    *(undefined1 *)(param_1 + 0x19) = 0;
  }
  *(int *)(param_1 + 8) = *(int *)(param_1 + 8) + 1;
  FUN_00414480(&local_20);
  return;
}

