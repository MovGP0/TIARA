/* Ghidra address: 00546b00 */
/* Ghidra symbol: FUN_00546b00 */


longlong * FUN_00546b00(longlong *param_1,longlong *param_2,longlong param_3)

{
  longlong *plVar1;
  int iVar2;
  ulonglong uVar3;
  int iVar4;
  ulonglong uVar5;
  bool bVar6;
  longlong local_58;
  longlong local_50 [2];
  longlong local_40;
  longlong local_38;
  undefined8 local_30;
  
  local_58 = 0;
  local_50[0] = 0;
  local_30 = 0;
  local_38 = 0;
  local_40 = 0;
  (**(code **)(*param_1 + 0x40))(param_1,&local_30);
  iVar4 = 0;
  FUN_004194b0(&local_38,local_30,&DAT_0052f648);
  uVar5 = 0;
  while( true ) {
    uVar3 = 0;
    if (local_38 != 0) {
      uVar3 = *(ulonglong *)(local_38 + -8);
    }
    if (uVar3 <= uVar5) break;
    plVar1 = *(longlong **)(local_38 + uVar5 * 8);
    (**(code **)(*plVar1 + 0x10))(plVar1,local_50);
    if (local_50[0] == param_3) {
      bVar6 = true;
    }
    else if ((local_50[0] == 0) || (param_3 == 0)) {
      bVar6 = false;
    }
    else {
      iVar2 = FUN_0043e420(local_50[0],param_3);
      bVar6 = iVar2 == 0;
    }
    if (bVar6) {
      iVar4 = iVar4 + 1;
    }
    uVar5 = uVar5 + 1;
  }
  FUN_00419430(&local_38,&DAT_0052f648);
  if (iVar4 == 0) {
    FUN_00419430(param_2,&DAT_0052f648);
  }
  else {
    FUN_00419260(param_2,&DAT_0052f648,1,(longlong)iVar4);
    iVar4 = 0;
    FUN_004194b0(&local_40,local_30,&DAT_0052f648);
    uVar5 = 0;
    while( true ) {
      uVar3 = 0;
      if (local_40 != 0) {
        uVar3 = *(ulonglong *)(local_40 + -8);
      }
      if (uVar3 <= uVar5) break;
      plVar1 = *(longlong **)(local_40 + uVar5 * 8);
      (**(code **)(*plVar1 + 0x10))(plVar1,&local_58);
      if (local_58 == param_3) {
        bVar6 = true;
      }
      else if ((local_58 == 0) || (param_3 == 0)) {
        bVar6 = false;
      }
      else {
        iVar2 = FUN_0043e420(local_58,param_3);
        bVar6 = iVar2 == 0;
      }
      if (bVar6) {
        *(longlong **)(*param_2 + (longlong)iVar4 * 8) = plVar1;
        iVar4 = iVar4 + 1;
      }
      uVar5 = uVar5 + 1;
    }
    FUN_00419430(&local_40,&DAT_0052f648);
  }
  FUN_00414560(&local_58,2);
  FUN_00417840(&local_40,&DAT_0052f648,3);
  return param_2;
}

