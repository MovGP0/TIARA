/* Ghidra address: 00acbcc0 */
/* Ghidra symbol: FUN_00acbcc0 */


bool FUN_00acbcc0(longlong param_1,int param_2,undefined8 *param_3)

{
  longlong *plVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  undefined8 local_20;
  
  local_20 = 0;
  *param_3 = 0;
  if (param_2 == 0) {
    plVar1 = *(longlong **)(param_1 + 0x158);
    iVar2 = (**(code **)(*plVar1 + 0x260))(plVar1);
    if (-1 < iVar2) {
      iVar2 = (**(code **)(*plVar1 + 0x260))(plVar1);
      iVar3 = (**(code **)(*(longlong *)plVar1[0x9e] + 0x28))((longlong *)plVar1[0x9e]);
      if (iVar2 <= iVar3) {
        uVar4 = (**(code **)(*plVar1 + 0x260))(plVar1);
        FUN_00ac9d80(*(undefined8 *)(param_1 + 0x140),&local_20,uVar4);
        FUN_00416cd0(param_3,3,*(undefined8 *)(param_1 + 200),&LAB_00acbdd4,local_20);
      }
    }
  }
  FUN_00414480(&local_20);
  return param_2 == 0;
}

