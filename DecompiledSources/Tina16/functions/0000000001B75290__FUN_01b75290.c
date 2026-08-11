/* Ghidra address: 01b75290 */
/* Ghidra symbol: FUN_01b75290 */


void FUN_01b75290(longlong param_1,undefined8 param_2)

{
  longlong *plVar1;
  int iVar2;
  undefined4 uVar3;
  undefined1 auStack_48 [40];
  undefined1 *local_20;
  
  local_20 = auStack_48;
  plVar1 = *(longlong **)(*(longlong *)(param_1 + 0x6f8) + 0x4a0);
  iVar2 = (**(code **)(*plVar1 + 0xb0))(plVar1,param_2);
  if (iVar2 != -1) {
    FUN_00801e40(param_1,*(undefined8 *)(param_1 + 0x6f8));
    (**(code **)(**(longlong **)(param_1 + 0x6f8) + 0x268))(*(longlong **)(param_1 + 0x6f8),1);
    plVar1 = *(longlong **)(param_1 + 0x6f8);
    uVar3 = (**(code **)(*(longlong *)plVar1[0x94] + 0xb0))((longlong *)plVar1[0x94],param_2);
    (**(code **)(*plVar1 + 0x268))(plVar1,uVar3);
    FUN_01b74210(param_1,0);
  }
  return;
}

