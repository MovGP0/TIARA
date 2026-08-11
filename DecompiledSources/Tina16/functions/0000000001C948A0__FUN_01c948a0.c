/* Ghidra address: 01c948a0 */
/* Ghidra symbol: FUN_01c948a0 */


void FUN_01c948a0(longlong param_1)

{
  undefined8 uVar1;
  longlong lVar2;
  longlong local_50;
  undefined1 local_48;
  undefined8 local_40;
  undefined8 local_38;
  undefined8 local_30 [2];
  longlong local_20 [2];
  
  local_38 = 0;
  local_40 = 0;
  local_30[0] = 0;
  local_20[0] = 0;
  uVar1 = FUN_014c0b50();
  FUN_014c4380(uVar1,local_20);
  if (local_20[0] != 0) {
    uVar1 = FUN_0065b870(*(undefined8 *)(param_1 + 0xa10));
    lVar2 = FUN_014a7fd0(local_20[0],uVar1);
    if (lVar2 == 0) {
      uVar1 = FUN_00b89270();
      FUN_00b8e520(uVar1,&local_40,0x593);
      local_50 = local_20[0];
      local_48 = 0x11;
      FUN_00442f70(&local_38,local_40,&local_50,0);
      FUN_016fd940(local_38);
    }
    else {
      FUN_0199e310(lVar2,0,1,0);
      *(longlong *)(param_1 + 0x27a8) = lVar2;
      *(longlong *)(param_1 + 0x2788) = lVar2;
      FUN_004414c0(local_30,local_20[0],L".CLOUDTSC");
      FUN_00414b50(local_20,local_30[0]);
      FUN_014a1260(local_20[0],0);
      (**(code **)(**(longlong **)(param_1 + 0xa10) + 0x180))(*(longlong **)(param_1 + 0xa10));
      FUN_01c7d780(param_1,0);
      FUN_01c8ab30(param_1,0,0);
    }
  }
  FUN_00414560(&local_40,3);
  FUN_00414480(local_20);
  return;
}

