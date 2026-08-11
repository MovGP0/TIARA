/* Ghidra address: 017e9ba0 */
/* Ghidra symbol: FUN_017e9ba0 */


void FUN_017e9ba0(longlong param_1,undefined8 param_2)

{
  char cVar1;
  longlong lVar2;
  undefined8 uVar3;
  undefined8 local_460;
  undefined8 local_458;
  undefined8 local_450 [2];
  undefined1 local_43a [1026];
  undefined8 local_38;
  undefined8 local_30;
  undefined8 local_28;
  undefined8 local_20;
  
  local_460 = 0;
  local_458 = 0;
  local_450[0] = 0;
  local_20 = 0;
  local_28 = 0;
  local_30 = 0;
  local_38 = 0;
  *(undefined8 *)(param_1 + 0x900) = 0;
  lVar2 = FUN_0160d750(param_2,*(undefined8 *)(param_1 + 0x3b0));
  if (lVar2 != 0) {
    cVar1 = FUN_01773dd0(lVar2);
    if (cVar1 != '\0') {
      uVar3 = FUN_01773d80(lVar2);
      *(undefined8 *)(param_1 + 0x900) = uVar3;
      FUN_01773c50(lVar2,local_450,1,param_1 + 0x908);
    }
  }
  if (*(longlong *)(param_1 + 0x388) == 0) {
    FUN_015fca00(&local_458,0,0);
    FUN_00414ad0(param_1 + 0x3b0,local_458);
  }
  else {
    FUN_015fc970(&local_460,*(longlong *)(param_1 + 0x388),0,0,0);
    FUN_00414ad0(param_1 + 0x3b0,local_460);
  }
  FUN_00440c30(*(undefined8 *)(param_1 + 0x3b0));
  uVar3 = FUN_00442620(local_43a,*(undefined8 *)(param_1 + 0x3b0));
  FUN_015fcc20(uVar3,param_1 + 0x3a8,0,0);
  FUN_00414560(&local_460,3);
  FUN_00414560(&local_38,4);
  return;
}

