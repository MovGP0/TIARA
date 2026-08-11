/* Ghidra address: 01c3fca0 */
/* Ghidra symbol: FUN_01c3fca0 */


void FUN_01c3fca0(longlong param_1,undefined8 param_2,int param_3,int param_4,undefined1 *param_5)

{
  int iVar1;
  int iVar2;
  longlong *plVar3;
  int local_48;
  int local_44;
  int local_40;
  int local_3c;
  
  if ((param_3 == 2) && (param_4 != 0)) {
    FUN_00849e90(*(undefined8 *)(param_1 + 0x8e0),&local_48,2,param_4);
    iVar2 = *(int *)(*(longlong *)(param_1 + 0x8e0) + 0x90);
    iVar1 = local_48 + iVar2;
    local_40 = local_40 + iVar2;
    iVar2 = *(int *)(*(longlong *)(param_1 + 0x8e0) + 0x94);
    local_44 = local_44 + iVar2;
    local_3c = local_3c + iVar2;
    plVar3 = *(longlong **)(param_1 + 0x8e8);
    local_48 = iVar1;
    FUN_0064cb30(plVar3,iVar1 + 1);
    iVar2 = local_44;
    FUN_0064cb90(plVar3,local_44 + 1);
    FUN_0064cbf0(plVar3,(local_40 - iVar1) + 1);
    FUN_0064cc50(plVar3,(local_3c - iVar2) + 1);
    FUN_0064dbe0(plVar3,1);
    (**(code **)(*plVar3 + 600))(plVar3);
  }
  *param_5 = 1;
  (**(code **)(**(longlong **)(param_1 + 0x8e8) + 0x268))
            (*(longlong **)(param_1 + 0x8e8),
             *(undefined4 *)(*(longlong *)(param_1 + 0x988) + (longlong)(param_4 + -1) * 4));
  return;
}

