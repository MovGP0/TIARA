/* Ghidra address: 01c3d840 */
/* Ghidra symbol: FUN_01c3d840 */


void FUN_01c3d840(longlong param_1,undefined8 param_2)

{
  longlong *plVar1;
  int iVar2;
  undefined4 uVar3;
  undefined8 local_20 [2];
  
  local_20[0] = 0;
  iVar2 = (**(code **)(**(longlong **)(param_1 + 0x700) + 0x260))(*(longlong **)(param_1 + 0x700));
  if (iVar2 == 0) {
    FUN_00414480(param_1 + 0x968);
  }
  else {
    plVar1 = *(longlong **)(param_1 + 0x700);
    uVar3 = (**(code **)(*plVar1 + 0x260))(plVar1);
    (**(code **)(*(longlong *)plVar1[0x9e] + 0x18))((longlong *)plVar1[0x9e],local_20,uVar3);
    FUN_00414ad0(param_1 + 0x968,local_20[0]);
  }
  FUN_01c3dc60(param_1,param_2);
  FUN_00414480(local_20);
  return;
}

