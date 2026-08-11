/* Ghidra address: 005ff4a0 */
/* Ghidra symbol: FUN_005ff4a0 */


void FUN_005ff4a0(longlong *param_1,int param_2,undefined4 param_3,longlong param_4)

{
  longlong lVar1;
  longlong lVar2;
  char cVar3;
  int iVar4;
  undefined8 uVar5;
  undefined4 uVar6;
  int local_30;
  
  (**(code **)(*param_1 + 0x50))(param_1);
  (**(code **)(*param_1 + 0x58))(param_1,0xb);
  cVar3 = (**(code **)(*param_1 + 0x18))(param_1);
  local_30 = param_2;
  if (cVar3 == '\x01') {
    iVar4 = FUN_005fdff0(param_1,param_4);
    local_30 = param_2 + iVar4 + 1;
  }
  uVar6 = 0;
  if (param_4 != 0) {
    uVar6 = *(undefined4 *)(param_4 + -4);
  }
  lVar1 = param_1[0xc];
  lVar2 = param_1[5];
  uVar5 = FUN_00416740(param_4);
  thunk_FUN_03e58493(lVar1,local_30,param_3,(int)lVar2,0,uVar5,uVar6,0);
  iVar4 = FUN_005fdff0(param_1,param_4);
  (**(code **)(*param_1 + 200))(param_1,local_30 + iVar4,param_3);
  (**(code **)(*param_1 + 0x48))(param_1);
  return;
}

