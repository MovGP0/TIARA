/* Ghidra address: 00f0fe40 */
/* Ghidra symbol: FUN_00f0fe40 */


void FUN_00f0fe40(longlong param_1)

{
  longlong lVar1;
  longlong *plVar2;
  undefined8 uVar3;
  undefined1 local_38 [16];
  undefined1 local_28 [16];
  
  lVar1 = FUN_007ffbe0(param_1);
  FUN_005fdab0(*(undefined8 *)(lVar1 + 0x80),0);
  plVar2 = (longlong *)FUN_007ffbe0(param_1);
  FUN_00498350(local_38,0,0,*(undefined4 *)(param_1 + 0x98),*(undefined4 *)(param_1 + 0x9c));
  (**(code **)(*plVar2 + 0xb8))(plVar2,local_38);
  FUN_00498350(local_28,1,1,*(int *)(param_1 + 0x98) + -1,*(int *)(param_1 + 0x9c) + -1);
  uVar3 = FUN_007ffbe0(param_1);
  FUN_00741000(uVar3,local_28,0xff000014,0xff000010,1);
  FUN_00498350(local_28,2,2,*(int *)(param_1 + 0x98) + -3,10);
  uVar3 = FUN_007ffbe0(param_1);
  FUN_00741000(uVar3,local_28,0xff000010,0xff000014,1);
  lVar1 = FUN_007ffbe0(param_1);
  FUN_005fdab0(*(undefined8 *)(lVar1 + 0x80),0xb3b3b3);
  plVar2 = (longlong *)FUN_007ffbe0(param_1);
  (**(code **)(*plVar2 + 0xa8))(plVar2,local_28);
  return;
}

