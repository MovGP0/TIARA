/* Ghidra address: 00c2b640 */
/* Ghidra symbol: FUN_00c2b640 */


void FUN_00c2b640(longlong param_1,longlong *param_2,undefined4 param_3)

{
  undefined4 uVar1;
  longlong lVar2;
  longlong *plVar3;
  longlong *plVar4;
  undefined1 local_38 [16];
  
  uVar1 = (**(code **)(**(longlong **)(param_1 + 0x68) + 0x60))(*(longlong **)(param_1 + 0x68));
  (**(code **)(*param_2 + 0x88))(param_2,uVar1);
  uVar1 = (**(code **)(**(longlong **)(param_1 + 0x68) + 0x48))(*(longlong **)(param_1 + 0x68));
  (**(code **)(*param_2 + 0x70))(param_2,uVar1);
  FUN_00c1a6c0(param_2,6);
  lVar2 = FUN_00609e10(param_2);
  FUN_005fdab0(*(undefined8 *)(lVar2 + 0x80),param_3);
  lVar2 = FUN_00609e10(param_2);
  FUN_005fdcb0(*(undefined8 *)(lVar2 + 0x80),0);
  plVar3 = (longlong *)FUN_00609e10(param_2);
  plVar4 = (longlong *)FUN_00609e10(param_2);
  (**(code **)(*plVar4 + 0x20))(plVar4,local_38);
  (**(code **)(*plVar3 + 0xa8))(plVar3,local_38);
  plVar3 = (longlong *)FUN_00609e10(param_2);
  (**(code **)(*plVar3 + 0x88))(plVar3,0,0,*(undefined8 *)(param_1 + 0x68));
  return;
}

