/* Ghidra address: 01892d80 */
/* Ghidra symbol: FUN_01892d80 */


void FUN_01892d80(longlong *param_1,undefined8 param_2)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined8 local_30 [2];
  
  local_30[0] = 0;
  FUN_00685d40(param_1,param_2);
  iVar1 = (**(code **)(*param_1 + 0x260))(param_1);
  if (-1 < iVar1) {
    iVar1 = (**(code **)(*param_1 + 0x260))(param_1);
    iVar2 = (**(code **)(*(longlong *)param_1[0x9e] + 0x28))((longlong *)param_1[0x9e]);
    if (iVar1 < iVar2) {
      uVar3 = FUN_006839f0(param_1);
      uVar4 = FUN_00683a60(param_1);
      uVar5 = (**(code **)(*param_1 + 0x260))(param_1);
      (**(code **)(*(longlong *)param_1[0x9e] + 0x18))((longlong *)param_1[0x9e],local_30,uVar5);
      FUN_0064de00(param_1,local_30[0]);
      FUN_00683a20(param_1,uVar3);
      FUN_00683a90(param_1,uVar4);
    }
  }
  FUN_00414480(local_30);
  return;
}

