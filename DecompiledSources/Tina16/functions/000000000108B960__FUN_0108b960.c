/* Ghidra address: 0108b960 */
/* Ghidra symbol: FUN_0108b960 */


void FUN_0108b960(longlong *param_1)

{
  bool bVar1;
  undefined1 uVar2;
  char cVar3;
  undefined4 uVar4;
  int iVar5;
  int iVar6;
  undefined8 local_28;
  undefined8 local_20 [2];
  
  local_20[0] = 0;
  local_28 = 0;
  uVar4 = FUN_01085d30(param_1);
  *(undefined4 *)(param_1 + 0x991) = uVar4;
  iVar5 = FUN_01085d60(param_1,uVar4,local_20,0);
  if ((param_1[0x9a4] == 0) || (param_1[0x9a4] != 0)) {
    bVar1 = true;
  }
  else {
    bVar1 = false;
  }
  if (bVar1) {
    if (*(int *)((longlong)param_1 + 0x4c94) == iVar5) {
      iVar6 = FUN_00416db0(param_1[0x996],local_20[0]);
      if (iVar6 != 0) goto LAB_0108b9e4;
LAB_0108b9e8:
      uVar2 = 0;
    }
    else {
LAB_0108b9e4:
      if (iVar5 < 1) goto LAB_0108b9e8;
      uVar2 = 1;
    }
    *(undefined1 *)((longlong)param_1 + 0xbd6) = uVar2;
  }
  FUN_01087aa0(param_1);
  if (*(char *)((longlong)param_1 + 0xbd6) != '\0') {
    *(int *)((longlong)param_1 + 0x4c94) = iVar5;
    FUN_00414ad0(param_1 + 0x996,local_20[0]);
  }
  cVar3 = FUN_010874a0(param_1);
  if (cVar3 == '\0') {
    cVar3 = (**(code **)(*param_1 + 0x310))(param_1);
    if (cVar3 == '\0') goto code_r0x0108ba95;
  }
  *(undefined4 *)(param_1 + 0xd8) = 1;
  FUN_0108b840(param_1,0);
  *(undefined1 *)(param_1 + 0x17d) = 1;
  *(undefined4 *)((longlong)param_1 + 0x4c9c) = 1;
  FUN_010860d0(param_1,param_1[0x996]);
  FUN_01085cd0(param_1);
  FUN_010892f0(param_1);
code_r0x0108ba95:
  FUN_00414560(&local_28,2);
  return;
}

