/* Ghidra address: 013f0230 */
/* Ghidra symbol: FUN_013f0230 */


void FUN_013f0230(longlong param_1)

{
  longlong lVar1;
  longlong *plVar2;
  int iVar3;
  undefined4 uVar4;
  undefined8 uVar5;
  undefined8 local_38;
  undefined8 local_30;
  undefined8 local_28;
  undefined8 local_20;
  undefined8 local_18;
  undefined8 local_10;
  
  local_28 = 0;
  local_30 = 0;
  local_38 = 0;
  local_10 = 0;
  local_18 = 0;
  local_20 = 0;
  uVar5 = (**(code **)(**(longlong **)(param_1 + 0x6d0) + 0x260))(*(longlong **)(param_1 + 0x6d0));
  *(short *)(param_1 + 0x722) = (short)uVar5;
  lVar1 = *(longlong *)(*(longlong *)(param_1 + 0x728) + 0x26);
  FUN_0172cc40(*(undefined8 *)(param_1 + 0x748),
               CONCAT62((int6)((ulonglong)uVar5 >> 0x10),(short)uVar5 + *(short *)(param_1 + 0x724))
               & 0xffffffff,*(undefined2 *)(lVar1 + 0x21),*(undefined8 *)(lVar1 + 1),
               *(undefined8 *)(lVar1 + 9),param_1 + 0x750,0xff);
  uVar5 = FUN_00b89270();
  FUN_00b8e520(uVar5,&local_18,0x404);
  FUN_004169a0(&local_20,param_1 + 0x750);
  FUN_00416cd0(&local_10,3,local_18,&DAT_013f0428,local_20);
  FUN_0084e3e0(*(undefined8 *)(param_1 + 0x6f8),0,0,local_10);
  FUN_00b0b140(*(undefined8 *)(param_1 + 0x6f8),1,2);
  iVar3 = (**(code **)(**(longlong **)(param_1 + 0x6d0) + 0x260))(*(longlong **)(param_1 + 0x6d0));
  FUN_0043f750(&local_30,iVar3 + 1);
  plVar2 = *(longlong **)(*(longlong *)(param_1 + 0x6d0) + 0x4a0);
  uVar4 = (**(code **)(*plVar2 + 0x28))(plVar2);
  FUN_0043f750(&local_38,uVar4);
  FUN_00416cd0(&local_28,3,local_30,&DAT_013f043c,local_38);
  FUN_0064de00(*(undefined8 *)(param_1 + 0x6f0),local_28);
  FUN_00414560(&local_38,6);
  return;
}

