/* Ghidra address: 01c1e500 */
/* Ghidra symbol: FUN_01c1e500 */


undefined1 FUN_01c1e500(undefined8 param_1,undefined8 param_2)

{
  int iVar1;
  int iVar2;
  undefined8 uVar3;
  undefined8 local_res10 [3];
  undefined1 auStack_2a8 [32];
  undefined8 local_288;
  undefined4 local_280;
  undefined8 local_270;
  undefined8 local_268;
  undefined8 local_260;
  undefined8 local_258;
  undefined1 *local_250;
  undefined1 local_23a [522];
  undefined8 local_30;
  int local_28;
  undefined1 local_21;
  longlong *local_20;
  
  local_250 = auStack_2a8;
  local_270 = 0;
  local_258 = 0;
  local_268 = 0;
  local_260 = 0;
  local_30 = 0;
  local_res10[0] = param_2;
  FUN_00414610(param_2);
  local_21 = 0;
  local_20 = (longlong *)FUN_004b6930(&PTR_FUN_00478280,1);
  (**(code **)(*local_20 + 0x90))(local_20);
  (**(code **)(*DAT_021114c8 + 0xb0))(DAT_021114c8,L"inBrowser",local_20);
  iVar1 = (**(code **)(*local_20 + 0x28))();
  local_28 = 0;
  if (-1 < iVar1 + -1) {
    do {
      (**(code **)(*local_20 + 0x18))(local_20,&local_260,local_28);
      FUN_0043e1a0(&local_258,local_260);
      FUN_0043e1a0(&local_268,local_res10[0]);
      iVar2 = FUN_004170c0(local_258,local_268,1);
      if (0 < iVar2) {
        local_21 = 1;
        FUN_00415dd0(&local_30,local_res10[0],0);
        FUN_00416880(&local_270,local_30);
        FUN_00442620(local_23a,local_270);
        uVar3 = FUN_0065b870(param_1);
        local_288 = 0;
        local_280 = 3;
        thunk_FUN_0419adcc(uVar3,L"open",local_23a,0);
        FUN_00410f20(local_20);
        goto LAB_01c1e6d1;
      }
      local_28 = local_28 + 1;
      iVar1 = iVar1 + -1;
    } while (iVar1 != 0);
  }
  FUN_00410f20(local_20);
LAB_01c1e6d1:
  FUN_00414560(&local_270,4);
  FUN_004144d0(&local_30);
  FUN_00414480(local_res10);
  return local_21;
}

