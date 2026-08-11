/* Ghidra address: 00b07e60 */
/* Ghidra symbol: FUN_00b07e60 */


void FUN_00b07e60(longlong param_1)

{
  undefined8 uVar1;
  longlong *plVar2;
  int iVar3;
  int iVar4;
  undefined8 local_38;
  undefined8 local_30 [2];
  
  local_30[0] = 0;
  local_38 = 0;
  FUN_00b07e30(param_1);
  uVar1 = *(undefined8 *)(param_1 + 0x4b8);
  plVar2 = *(longlong **)(param_1 + 0x4d8);
  FUN_00835150(uVar1,&local_38);
  iVar3 = (**(code **)(*plVar2 + 0xb0))(plVar2,local_38);
  iVar4 = (**(code **)(**(longlong **)(param_1 + 0x4d8) + 0x28))(*(longlong **)(param_1 + 0x4d8));
  (**(code **)(*plVar2 + 0x18))
            (plVar2,local_30,(longlong)(iVar3 + 1) % (longlong)iVar4 & 0xffffffff);
  FUN_00835220(uVar1,local_30[0]);
  FUN_00414480(&local_38);
  FUN_00414480(local_30);
  return;
}

