/* Ghidra address: 01113340 */
/* Ghidra symbol: FUN_01113340 */


void FUN_01113340(longlong param_1)

{
  char cVar1;
  undefined4 uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  undefined8 local_34;
  undefined4 local_2c;
  
  FUN_01112870(param_1);
  *(undefined4 *)(param_1 + 0x618) = 0;
  if (*(char *)(param_1 + 0x61e) == '\0') {
    *(undefined4 *)(param_1 + 0x618) = 2;
  }
  else {
    if (*(char *)(param_1 + 0x61c) != '\0') {
      *(undefined4 *)(param_1 + 0x618) = 2;
    }
    *(undefined1 *)(param_1 + 0x61e) = 0;
  }
  if (*(char *)(param_1 + 0x61f) != '\0') {
    if (*(char *)(param_1 + 0x61d) != '\0') {
      *(uint *)(param_1 + 0x618) = *(uint *)(param_1 + 0x618) | 1;
    }
    *(undefined1 *)(param_1 + 0x61f) = 0;
  }
  uVar3 = *(uint *)(param_1 + 0x618);
  cVar1 = FUN_011142d0(param_1);
  if (cVar1 == '\n') {
    cVar1 = FUN_01114230(param_1);
    if (cVar1 == '\x02') {
      uVar2 = FUN_01114280(param_1);
      uVar3 = FUN_00a02ef0(uVar2);
      uVar4 = FUN_011141e0(param_1);
      if ((uVar3 & 0xff) == uVar4) {
        uVar2 = FUN_011141e0(param_1);
        uVar2 = FUN_01113ae0(param_1,uVar2);
        FUN_01113c30(param_1,uVar2);
      }
      else {
        uVar2 = FUN_01114280(param_1);
        uVar3 = FUN_00a02ef0(uVar2);
        uVar2 = FUN_01113ae0(param_1,(uVar3 & 0xff) + 1);
        FUN_01113c30(param_1,uVar2);
      }
      FUN_01112e90(param_1);
      *(undefined1 *)(param_1 + 0x5c2) = 0;
      return;
    }
    uVar2 = FUN_01114280(param_1);
    uVar4 = FUN_00a02ef0(uVar2);
    uVar5 = FUN_011141e0(param_1);
    if ((uVar4 & 0xff) == uVar5) {
      uVar2 = FUN_011141e0(param_1);
      local_2c = FUN_01113ae0(param_1,uVar2);
    }
    else {
      uVar2 = FUN_01114280(param_1);
      uVar4 = FUN_00a02ef0(uVar2);
      local_2c = FUN_01113ae0(param_1,(uVar4 & 0xff) + 1);
    }
    *(uint *)(param_1 + 0x618) = uVar3 | 8;
  }
  else {
    *(uint *)(param_1 + 0x618) = uVar3 | 0x200;
  }
  local_34 = FUN_0065b870(param_1);
  uVar2 = thunk_FUN_0418b35e(*(undefined2 *)(param_1 + 0x622),0x807,
                             (longlong)*(int *)(param_1 + 0x618),&local_34);
  *(undefined4 *)(param_1 + 0x634) = uVar2;
  return;
}

