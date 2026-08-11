/* Ghidra address: 00c38510 */
/* Ghidra symbol: FUN_00c38510 */


void FUN_00c38510(longlong *param_1,longlong *param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  longlong lVar3;
  longlong *plVar4;
  undefined1 local_38 [24];
  
  uVar1 = (**(code **)(*param_2 + 0x60))(param_2);
  (**(code **)(*param_1 + 0x88))(param_1,uVar1);
  uVar1 = (**(code **)(*param_2 + 0x48))(param_2);
  (**(code **)(*param_1 + 0x70))(param_1,uVar1);
  lVar3 = FUN_00609e10(param_1);
  FUN_005fdab0(*(undefined8 *)(lVar3 + 0x80),0xff000006);
  lVar3 = FUN_00609e10(param_1);
  FUN_005fdcb0(*(undefined8 *)(lVar3 + 0x80),0);
  plVar4 = (longlong *)FUN_00609e10(param_1);
  uVar1 = (**(code **)(*param_1 + 0x60))(param_1);
  uVar2 = (**(code **)(*param_1 + 0x48))(param_1);
  FUN_00498350(local_38,0,0,uVar1,uVar2);
  (**(code **)(*plVar4 + 0xa8))(plVar4,local_38);
  return;
}

