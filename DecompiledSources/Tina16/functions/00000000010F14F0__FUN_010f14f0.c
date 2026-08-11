/* Ghidra address: 010f14f0 */
/* Ghidra symbol: FUN_010f14f0 */


void FUN_010f14f0(longlong param_1,undefined8 param_2)

{
  undefined2 uVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined8 uVar5;
  undefined8 local_res10 [3];
  undefined4 local_30;
  undefined4 local_2c;
  
  local_res10[0] = param_2;
  iVar2 = FUN_01d31a40(param_2);
  if (iVar2 == 0) {
    FUN_01d311c0(local_res10[0],param_1 + 0x60,8);
    FUN_01d311c0(local_res10[0],param_1 + 0x68,8);
    FUN_01d311c0(local_res10[0],param_1 + 0x70,8);
    FUN_01d311c0(local_res10[0],param_1 + 0x78,8);
    FUN_01d311c0(local_res10[0],param_1 + 0x80,0x10);
    if (*(longlong *)(param_1 + 0xa8) == 0) {
      local_2c = 0xffffffff;
    }
    else {
      local_2c = *(undefined4 *)(*(longlong *)(param_1 + 0xa8) + 0x40);
    }
    FUN_01d311c0(local_res10[0],&local_2c,4);
    FUN_01d311c0(local_res10[0],param_1 + 0x98,4);
    FUN_01d311c0(local_res10[0],param_1 + 0xa0,1);
    FUN_01d311c0(local_res10[0],param_1 + 0x9c,4);
    uVar5 = FUN_006060c0(*(undefined8 *)(param_1 + 0x90));
    local_30 = FUN_010f1260(uVar5);
    FUN_01d311c0(local_res10[0],&local_30,4);
    uVar3 = (**(code **)(**(longlong **)(param_1 + 0x90) + 0x60))(*(longlong **)(param_1 + 0x90));
    uVar4 = (**(code **)(**(longlong **)(param_1 + 0x90) + 0x48))(*(longlong **)(param_1 + 0x90));
    uVar1 = FUN_00606180(*(undefined8 *)(param_1 + 0x90));
    FUN_010f10f0(local_res10,uVar5,uVar3,uVar4,uVar1);
  }
  return;
}

