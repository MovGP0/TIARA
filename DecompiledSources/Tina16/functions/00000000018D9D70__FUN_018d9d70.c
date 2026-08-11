/* Ghidra address: 018d9d70 */
/* Ghidra symbol: FUN_018d9d70 */


void FUN_018d9d70(longlong param_1,longlong *param_2,undefined8 param_3,undefined4 param_4,
                 undefined4 param_5,undefined4 param_6,int param_7,undefined1 param_8,
                 undefined8 param_9,undefined8 param_10)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 uVar3;
  longlong lVar4;
  double dVar5;
  undefined1 local_38 [16];
  
  uVar1 = FUN_005fdaa0(param_2[0x10]);
  FUN_005fdab0(param_2[0x10],0xff00000d);
  iVar2 = FUN_00526fd0(*(undefined4 *)(*(longlong *)(param_1 + 0xc0) + (longlong)param_7 * 4),
                       *(undefined4 *)(param_1 + 0x8c));
  dVar5 = (double)FUN_018dbb10(param_1);
  lVar4 = FUN_0040c770(dVar5 * *(double *)(param_1 + 0x98));
  uVar3 = FUN_00526fe0(*(int *)(*(longlong *)(param_1 + 0xc0) + (longlong)param_7 * 4) + lVar4,
                       (longlong)*(int *)(param_1 + 0x8c));
  FUN_004238d0(local_38,*(int *)(param_1 + 0x80) + 1,iVar2 + 1,*(undefined4 *)(param_1 + 0x88),uVar3
              );
  (**(code **)(*param_2 + 0xa8))(param_2,local_38);
  FUN_005fdab0(param_2[0x10],uVar1);
  uVar1 = *(undefined4 *)(param_2[0xe] + 0x28);
  FUN_005fc860(param_2[0xe],0xff00000e);
  FUN_0180c8a0(param_2,1);
  FUN_018d8cc0(param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8,param_9,param_10);
  FUN_005fc860(param_2[0xe],uVar1);
  return;
}

