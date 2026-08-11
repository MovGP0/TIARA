/* Ghidra address: 016417a0 */
/* Ghidra symbol: FUN_016417a0 */


void FUN_016417a0(longlong param_1)

{
  int iVar1;
  undefined1 auStack_98 [32];
  undefined8 local_78;
  undefined8 local_60;
  undefined8 local_58;
  undefined1 *local_50;
  undefined8 local_40;
  undefined8 local_38;
  undefined8 local_30;
  undefined4 local_28;
  int local_24;
  undefined8 local_20;
  
  local_50 = auStack_98;
  local_60 = 0;
  local_58 = 0;
  local_30 = 0;
  local_38 = 0;
  local_40 = 0;
  local_20 = FUN_004b6930(&PTR_FUN_00478280,1);
  iVar1 = (**(code **)(**(longlong **)(param_1 + 0x58) + 0x28))();
  local_24 = 0;
  if (-1 < iVar1 + -1) {
    do {
      (**(code **)(**(longlong **)(param_1 + 0x58) + 0x18))
                (*(longlong **)(param_1 + 0x58),&local_58,local_24);
      FUN_01b21a10(local_58,&local_30,&local_40,&local_38);
      local_28 = FUN_0043fc00(local_30);
      local_78 = local_38;
      FUN_00416cd0(&local_60,3,local_40,&DAT_0164195c);
      FUN_01b221c0(local_20,local_28,local_60);
      local_24 = local_24 + 1;
      iVar1 = iVar1 + -1;
    } while (iVar1 != 0);
  }
  (**(code **)(**(longlong **)(param_1 + 0x58) + 0x10))(*(longlong **)(param_1 + 0x58),local_20);
  FUN_00410f20(local_20);
  FUN_00414560(&local_60,2);
  FUN_00414560(&local_40,3);
  return;
}

