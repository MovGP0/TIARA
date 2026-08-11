/* Ghidra address: 00c74300 */
/* Ghidra symbol: FUN_00c74300 */


void FUN_00c74300(longlong param_1,longlong param_2,undefined4 param_3)

{
  undefined4 uVar1;
  undefined4 uVar2;
  longlong *plVar3;
  longlong lVar4;
  longlong *plVar5;
  undefined8 uVar6;
  undefined1 local_38 [16];
  
  plVar3 = (longlong *)FUN_00c741c0(*(undefined8 *)(param_1 + 0x40));
  (**(code **)(*plVar3 + 0x88))(plVar3,*(undefined4 *)(param_2 + 0x94));
  (**(code **)(*plVar3 + 0x70))(plVar3,*(undefined4 *)(param_2 + 0x90));
  lVar4 = FUN_00609e10(plVar3);
  FUN_005fdab0(*(undefined8 *)(lVar4 + 0x80),&DAT_00ff00ff);
  plVar5 = (longlong *)FUN_00609e10(plVar3);
  uVar1 = (**(code **)(*plVar3 + 0x60))(plVar3);
  uVar2 = (**(code **)(*plVar3 + 0x48))(plVar3);
  FUN_00498350(local_38,0,0,uVar1,uVar2);
  (**(code **)(*plVar5 + 0xa8))(plVar5,local_38);
  uVar6 = FUN_00609e10(plVar3);
  FUN_007d6c70(param_2,uVar6,0,0,param_3,1);
  return;
}

