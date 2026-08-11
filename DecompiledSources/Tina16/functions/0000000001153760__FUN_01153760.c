/* Ghidra address: 01153760 */
/* Ghidra symbol: FUN_01153760 */


void FUN_01153760(longlong param_1)

{
  longlong lVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  int iVar4;
  undefined8 local_30 [2];
  undefined8 local_20;
  
  lVar1 = *(longlong *)(param_1 + 0x710);
  local_30[0] = FUN_00498310(*(undefined4 *)(lVar1 + 0x98),0);
  uVar3 = FUN_0064d1f0(lVar1,local_30);
  local_20._0_4_ = (int)uVar3;
  iVar4 = (int)local_20 + 2;
  local_20._4_4_ = (undefined4)((ulonglong)uVar3 >> 0x20);
  uVar2 = local_20._4_4_;
  local_20 = uVar3;
  (**(code **)(**(longlong **)(param_1 + 0x6c0) + 0xa8))
            (*(longlong **)(param_1 + 0x6c0),iVar4,uVar2);
  return;
}

