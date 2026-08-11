/* Ghidra address: 00842410 */
/* Ghidra symbol: FUN_00842410 */


void FUN_00842410(longlong param_1,char param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  int iVar3;
  undefined8 uVar4;
  
  if (param_2 == '\0') {
    uVar4 = FUN_005ffa40(*(undefined8 *)(param_1 + 0x490));
    thunk_FUN_03b0d54a(uVar4,8);
    uVar4 = FUN_005ffa40(*(undefined8 *)(param_1 + 0x490));
    thunk_FUN_0418c361(uVar4,0,0,0);
    uVar4 = FUN_005ffa40(*(undefined8 *)(param_1 + 0x490));
    uVar1 = FUN_0064d0b0(param_1);
    uVar2 = FUN_0064d120(param_1);
    thunk_FUN_04166eed(uVar4,uVar1,uVar2,0);
    uVar4 = FUN_005ffa40(*(undefined8 *)(param_1 + 0x490));
    uVar1 = FUN_0064d0b0(param_1);
    uVar2 = FUN_0064d120(param_1);
    thunk_FUN_04170591(uVar4,uVar1,uVar2,0);
  }
  else {
    uVar1 = FUN_0064d0b0(param_1);
    uVar4 = FUN_005ffa40(*(undefined8 *)(param_1 + 0x490));
    thunk_FUN_03b0d54a(uVar4,8);
    uVar4 = FUN_005ffa40(*(undefined8 *)(param_1 + 0x490));
    thunk_FUN_0418c361(uVar4,uVar1,0,0);
    uVar4 = FUN_005ffa40(*(undefined8 *)(param_1 + 0x490));
    uVar1 = FUN_0064d0b0(param_1);
    uVar2 = FUN_0064d120(param_1);
    thunk_FUN_04166eed(uVar4,uVar1,uVar2,0);
    uVar4 = FUN_005ffa40(*(undefined8 *)(param_1 + 0x490));
    iVar3 = FUN_0064d0b0(param_1);
    uVar1 = FUN_0064d120(param_1);
    thunk_FUN_04170591(uVar4,-iVar3,uVar1,0);
  }
  return;
}

