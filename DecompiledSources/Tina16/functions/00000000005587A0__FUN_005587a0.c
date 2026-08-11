/* Ghidra address: 005587a0 */
/* Ghidra symbol: FUN_005587a0 */


void FUN_005587a0(longlong *param_1,longlong param_2,undefined8 param_3)

{
  int iVar1;
  longlong lVar2;
  undefined8 uVar3;
  undefined1 local_28 [32];
  
  FUN_00417580(local_28,&DAT_00527bf8);
  lVar2 = (**(code **)(*param_1 + 0x20))(param_1);
  if (lVar2 == 0) {
    uVar3 = FUN_00534b60();
    lVar2 = FUN_004134c0(uVar3);
  }
  uVar3 = FUN_005466a0(lVar2);
  FUN_005376c0(param_3,local_28,uVar3,1);
  iVar1 = (**(code **)(*param_1 + 0x28))(param_1);
  FUN_005382b0(local_28,param_2 + iVar1);
  FUN_00417740(local_28,&DAT_00527bf8);
  return;
}

