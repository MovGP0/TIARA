/* Ghidra address: 01113500 */
/* Ghidra symbol: FUN_01113500 */


void FUN_01113500(longlong param_1)

{
  char cVar1;
  undefined1 uVar2;
  char cVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  uint uVar6;
  uint uVar7;
  undefined8 local_44;
  undefined4 local_3c;
  
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
  uVar6 = *(uint *)(param_1 + 0x618);
  cVar1 = FUN_011142d0(param_1);
  if (cVar1 != '\n') {
    *(uint *)(param_1 + 0x618) = uVar6 | 0x100;
LAB_011136bf:
    local_44 = FUN_0065b870(param_1);
    uVar4 = thunk_FUN_0418b35e(*(undefined2 *)(param_1 + 0x622),0x807,
                               (longlong)*(int *)(param_1 + 0x618),&local_44);
    *(undefined4 *)(param_1 + 0x634) = uVar4;
    return;
  }
  uVar4 = FUN_01114280(param_1);
  uVar5 = FUN_01114280(param_1);
  uVar2 = FUN_00a02ef0(uVar5);
  uVar5 = FUN_01113ae0(param_1,uVar2);
  cVar1 = FUN_01114230(param_1);
  if (cVar1 != '\x02') {
    cVar1 = FUN_00a02ef0(uVar4);
    local_3c = uVar5;
    if (cVar1 != '\x01') {
      cVar1 = FUN_00a02f00(uVar4);
      cVar3 = FUN_00a02f00(uVar5);
      if (cVar1 == cVar3) {
        cVar1 = FUN_00a02f10(uVar4);
        cVar3 = FUN_00a02f10(uVar5);
        if (cVar1 == cVar3) {
          uVar4 = FUN_01114280(param_1);
          uVar7 = FUN_00a02ef0(uVar4);
          local_3c = FUN_01113ae0(param_1,(uVar7 & 0xff) - 1);
        }
      }
    }
    *(uint *)(param_1 + 0x618) = uVar6 | 8;
    goto LAB_011136bf;
  }
  cVar1 = FUN_00a02ef0(uVar4);
  if (cVar1 != '\x01') {
    cVar1 = FUN_00a02f00(uVar4);
    cVar3 = FUN_00a02f00(uVar5);
    if (cVar1 == cVar3) {
      cVar1 = FUN_00a02f10(uVar4);
      cVar3 = FUN_00a02f10(uVar5);
      if (cVar1 == cVar3) {
        uVar4 = FUN_01114280(param_1);
        uVar6 = FUN_00a02ef0(uVar4);
        uVar4 = FUN_01113ae0(param_1,(uVar6 & 0xff) - 1);
        FUN_01113c30(param_1,uVar4);
        goto LAB_01113632;
      }
    }
  }
  FUN_01113c30(param_1,uVar5);
LAB_01113632:
  FUN_01112e90(param_1);
  *(undefined1 *)(param_1 + 0x5c2) = 0;
  return;
}

