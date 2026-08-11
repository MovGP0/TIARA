/* Ghidra address: 01ba86f0 */
/* Ghidra symbol: FUN_01ba86f0 */


void FUN_01ba86f0(longlong param_1,undefined8 param_2,int param_3,int param_4,undefined1 *param_5)

{
  int iVar1;
  int iVar2;
  longlong *plVar3;
  undefined4 uVar4;
  undefined8 local_48;
  longlong local_40;
  int local_38;
  int local_34;
  int local_30;
  int local_2c;
  
  local_48 = 0;
  local_40 = 0;
  if ((param_3 == 1) && (param_4 != 0)) {
    FUN_00849e90(*(undefined8 *)(param_1 + 0x6f0),&local_38,1,param_4);
    iVar2 = *(int *)(*(longlong *)(param_1 + 0x6f0) + 0x90);
    iVar1 = local_38 + iVar2;
    local_30 = local_30 + iVar2;
    iVar2 = *(int *)(*(longlong *)(param_1 + 0x6f0) + 0x94);
    local_34 = local_34 + iVar2;
    local_2c = local_2c + iVar2;
    plVar3 = *(longlong **)(param_1 + 0x738);
    local_38 = iVar1;
    FUN_0064cb30(plVar3,iVar1);
    iVar2 = local_34;
    FUN_0064cb90(plVar3,local_34);
    FUN_0064cbf0(plVar3,(local_30 - iVar1) + 1);
    FUN_0064cc50(plVar3,(local_2c - iVar2) + 1);
    FUN_0064dbe0(plVar3,1);
    (**(code **)(*plVar3 + 600))(plVar3);
  }
  *param_5 = 1;
  FUN_0084e320(*(undefined8 *)(param_1 + 0x6f0),&local_40,param_3,param_4);
  if (local_40 == 0) {
    (**(code **)(**(longlong **)(param_1 + 0x738) + 0x268))(*(longlong **)(param_1 + 0x738),0);
  }
  else {
    plVar3 = *(longlong **)(param_1 + 0x738);
    FUN_0084e320(*(undefined8 *)(param_1 + 0x6f0),&local_48,param_3,param_4);
    uVar4 = (**(code **)(*(longlong *)plVar3[0x9e] + 0xb0))((longlong *)plVar3[0x9e],local_48);
    (**(code **)(*plVar3 + 0x268))(plVar3,uVar4);
  }
  FUN_00414560(&local_48,2);
  return;
}

