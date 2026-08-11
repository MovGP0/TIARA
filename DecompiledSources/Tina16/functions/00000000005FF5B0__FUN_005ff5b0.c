/* Ghidra address: 005ff5b0 */
/* Ghidra symbol: FUN_005ff5b0 */


void FUN_005ff5b0(longlong *param_1,undefined8 *param_2,int param_3,undefined4 param_4,
                 longlong param_5)

{
  longlong lVar1;
  char cVar2;
  int iVar3;
  undefined8 uVar4;
  uint uVar5;
  undefined4 uVar6;
  int local_4c;
  undefined8 local_38;
  undefined8 uStack_30;
  
  local_38 = *param_2;
  uStack_30 = param_2[1];
  (**(code **)(*param_1 + 0x50))(param_1);
  (**(code **)(*param_1 + 0x58))(param_1,0xb);
  uVar5 = *(uint *)(param_1 + 5) | 4;
  if (*(char *)(*(longlong *)(param_1[0x10] + 0x18) + 0x38) != '\x01') {
    uVar5 = *(uint *)(param_1 + 5) | 6;
  }
  local_4c = param_3;
  if ((*(uint *)(param_1 + 5) & 0x80) != 0) {
    cVar2 = (**(code **)(*param_1 + 0x18))(param_1);
    if (cVar2 == '\x01') {
      iVar3 = FUN_005fdff0(param_1,param_5);
      local_4c = param_3 + iVar3 + 1;
    }
  }
  uVar6 = 0;
  if (param_5 != 0) {
    uVar6 = *(undefined4 *)(param_5 + -4);
  }
  lVar1 = param_1[0xc];
  uVar4 = FUN_00416740(param_5);
  thunk_FUN_03e58493(lVar1,local_4c,param_4,uVar5,&local_38,uVar4,uVar6,0);
  (**(code **)(*param_1 + 0x48))(param_1);
  return;
}

