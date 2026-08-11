/* Ghidra address: 0058a6f0 */
/* Ghidra symbol: FUN_0058a6f0 */


longlong FUN_0058a6f0(longlong param_1,undefined8 param_2)

{
  int iVar1;
  ulonglong uVar2;
  longlong *plVar3;
  ulonglong uVar4;
  longlong local_58;
  undefined8 local_50 [2];
  longlong local_40;
  longlong local_38;
  longlong local_30 [2];
  
  local_50[0] = 0;
  local_30[0] = 0;
  for (plVar3 = *(longlong **)(param_1 + 0xe8); plVar3 != (longlong *)0x0;
      plVar3 = (longlong *)(**(code **)(*plVar3 + 0x38))(plVar3)) {
    (**(code **)(*plVar3 + 0x98))(plVar3,local_30);
    uVar4 = 0;
    while( true ) {
      uVar2 = 0;
      if (local_30[0] != 0) {
        uVar2 = *(ulonglong *)(local_30[0] + -8);
      }
      if (uVar2 <= uVar4) break;
      local_58 = *(longlong *)(local_30[0] + uVar4 * 8);
      local_40 = *(longlong *)(local_58 + 8) + 0xd;
      local_38 = local_40;
      FUN_00587e00(&local_38,local_50);
      iVar1 = FUN_00416db0(local_50[0],param_2);
      if (iVar1 == 0) goto LAB_0058a7bf;
      uVar4 = uVar4 + 1;
    }
    FUN_00419430(local_30,&DAT_0052f6a0);
  }
  local_58 = 0;
LAB_0058a7bf:
  FUN_00414480(local_50);
  FUN_00419430(local_30,&DAT_0052f6a0);
  return local_58;
}

