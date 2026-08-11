/* Ghidra address: 01a7c950 */
/* Ghidra symbol: FUN_01a7c950 */


void FUN_01a7c950(longlong param_1)

{
  longlong *plVar1;
  char cVar2;
  longlong *plVar3;
  undefined8 uVar4;
  longlong lVar5;
  undefined8 local_20;
  
  local_20 = 0;
  plVar3 = (longlong *)FUN_00723990(&PTR_FUN_0071a1f0,1,*(undefined8 *)PTR_DAT_02004030);
  FUN_00414ad0(plVar3 + 0x20,&PTR_DAT_01a7ca94);
  FUN_00724380(plVar3,0);
  FUN_00414ad0(plVar3 + 0x1c,L"TR result (*.tr)|*.tr|DC result (*.dc)|*.dc|AC result (*.ac)|*.ac");
  FUN_00414ad0(plVar3 + 0x1f,L"Save auto test result");
  cVar2 = (**(code **)(*plVar3 + 0xa8))(plVar3);
  if (cVar2 != '\0') {
    plVar1 = *(longlong **)(*(longlong *)(param_1 + 0x798) + 0xd8);
    uVar4 = (**(code **)(*plVar1 + 0x30))(plVar1,0);
    lVar5 = FUN_004113f0(uVar4,&DAT_01cdd500);
    lVar5 = (**(code **)(**(longlong **)(lVar5 + 0x80) + 0x30))(*(longlong **)(lVar5 + 0x80),0);
    uVar4 = *(undefined8 *)(lVar5 + 0xd0);
    FUN_00724270(plVar3,&local_20);
    FUN_012d19f0(local_20,uVar4,0,0,0);
  }
  FUN_00410f20(plVar3);
  FUN_00414480(&local_20);
  return;
}

