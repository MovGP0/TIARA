/* Ghidra address: 00d59480 */
/* Ghidra symbol: FUN_00d59480 */


void FUN_00d59480(longlong *param_1)

{
  int iVar1;
  int iVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined4 local_30;
  undefined4 local_2c;
  
  local_2c = (**(code **)(*param_1 + 0x48))(param_1);
  iVar1 = (**(code **)(*param_1 + 0x60))(param_1);
  uVar3 = FUN_004095c0((longlong)(iVar1 * 4));
  iVar1 = (**(code **)(*param_1 + 0x48))();
  iVar1 = iVar1 / 2;
  local_30 = 0;
  if (-1 < iVar1 + -1) {
    do {
      local_2c = local_2c + -1;
      uVar4 = FUN_0060a050(param_1,local_30);
      uVar5 = FUN_0060a050(param_1,local_2c);
      iVar2 = (**(code **)(*param_1 + 0x60))(param_1);
      FUN_00409a70(uVar4,uVar3,(longlong)(iVar2 * 4));
      iVar2 = (**(code **)(*param_1 + 0x60))(param_1);
      FUN_00409a70(uVar5,uVar4,(longlong)(iVar2 * 4));
      iVar2 = (**(code **)(*param_1 + 0x60))(param_1);
      FUN_00409a70(uVar3,uVar5,(longlong)(iVar2 * 4));
      local_30 = local_30 + 1;
      iVar1 = iVar1 + -1;
    } while (iVar1 != 0);
  }
  FUN_004095f0(uVar3);
  return;
}

