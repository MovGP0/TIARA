/* Ghidra address: 0082bad0 */
/* Ghidra symbol: FUN_0082bad0 */


void FUN_0082bad0(undefined8 param_1,longlong *param_2,longlong param_3,undefined4 param_4)

{
  undefined4 uVar1;
  undefined4 uVar2;
  longlong lVar3;
  longlong *plVar4;
  undefined8 uVar5;
  undefined1 local_38 [16];
  
  (**(code **)(*param_2 + 0x88))(param_2,*(undefined4 *)(param_3 + 0x94));
  (**(code **)(*param_2 + 0x70))(param_2,*(undefined4 *)(param_3 + 0x90));
  lVar3 = FUN_00609e10(param_2);
  FUN_005fdab0(*(undefined8 *)(lVar3 + 0x80),&DAT_00ff00ff);
  plVar4 = (longlong *)FUN_00609e10(param_2);
  uVar1 = (**(code **)(*param_2 + 0x60))(param_2);
  uVar2 = (**(code **)(*param_2 + 0x48))(param_2);
  FUN_004238d0(local_38,0,0,uVar1,uVar2);
  (**(code **)(*plVar4 + 0xa8))(plVar4,local_38);
  uVar5 = FUN_00609e10(param_2);
  FUN_007d6c70(param_3,uVar5,0,0,param_4,1);
  return;
}

