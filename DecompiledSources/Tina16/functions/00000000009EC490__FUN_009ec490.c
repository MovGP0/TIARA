/* Ghidra address: 009ec490 */
/* Ghidra symbol: FUN_009ec490 */


void FUN_009ec490(longlong *param_1,undefined8 param_2,int param_3,undefined4 param_4,
                 longlong param_5)

{
  char cVar1;
  int iVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  uint uVar5;
  undefined4 uVar6;
  int local_2c;
  
  (**(code **)(*param_1 + 0x50))(param_1);
  (**(code **)(*param_1 + 0x58))(param_1,0xb);
  uVar5 = *(uint *)(param_1 + 5) | 4;
  if (*(char *)(*(longlong *)(param_1[0x10] + 0x18) + 0x38) != '\x01') {
    uVar5 = *(uint *)(param_1 + 5) | 6;
  }
  local_2c = param_3;
  if ((*(uint *)(param_1 + 5) & 0x80) != 0) {
    cVar1 = (**(code **)(*param_1 + 0x18))(param_1);
    if (cVar1 == '\x01') {
      iVar2 = FUN_005fdff0(param_1,param_5);
      local_2c = param_3 + iVar2 + 1;
    }
  }
  uVar3 = FUN_005ffa40(param_1);
  uVar6 = 0;
  if (param_5 != 0) {
    uVar6 = *(undefined4 *)(param_5 + -4);
  }
  uVar4 = FUN_00416740(param_5);
  thunk_FUN_03e58493(uVar3,local_2c,param_4,uVar5,param_2,uVar4,uVar6,0);
  (**(code **)(*param_1 + 0x48))(param_1);
  return;
}

