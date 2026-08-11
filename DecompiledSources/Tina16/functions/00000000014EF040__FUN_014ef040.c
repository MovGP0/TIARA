/* Ghidra address: 014ef040 */
/* Ghidra symbol: FUN_014ef040 */


void FUN_014ef040(longlong param_1)

{
  undefined1 uVar1;
  char cVar2;
  undefined4 uVar3;
  uint uVar4;
  undefined8 local_28;
  undefined8 local_20;
  undefined8 local_18;
  undefined8 local_10;
  
  local_28 = 0;
  local_20 = 0;
  local_18 = 0;
  local_10 = 0;
  if (*(char *)(param_1 + 0x8a0) == '\0') {
    uVar3 = (**(code **)(**(longlong **)(param_1 + 0x6e0) + 0x260))(*(longlong **)(param_1 + 0x6e0))
    ;
    *(undefined4 *)(param_1 + 0x7f8) = uVar3;
    uVar1 = (**(code **)(**(longlong **)(param_1 + 0x6d0) + 0x260))(*(longlong **)(param_1 + 0x6d0))
    ;
    *(undefined1 *)(param_1 + 0x878) = uVar1;
    uVar1 = (**(code **)(**(longlong **)(param_1 + 0x790) + 0x260))(*(longlong **)(param_1 + 0x790))
    ;
    *(undefined1 *)(param_1 + 0x7fd) = uVar1;
    cVar2 = (**(code **)(**(longlong **)(param_1 + 0x728) + 0x260))(*(longlong **)(param_1 + 0x728))
    ;
    if (cVar2 == '\0') {
      *(undefined4 *)(param_1 + 0x848) = 0;
    }
    else {
      *(undefined4 *)(param_1 + 0x848) = 1;
    }
    cVar2 = (**(code **)(**(longlong **)(param_1 + 0x740) + 0x260))(*(longlong **)(param_1 + 0x740))
    ;
    if (cVar2 == '\0') {
      *(undefined4 *)(param_1 + 0x850) = 0;
    }
    else {
      *(undefined4 *)(param_1 + 0x850) = 1;
    }
    cVar2 = (**(code **)(**(longlong **)(param_1 + 0x758) + 0x260))(*(longlong **)(param_1 + 0x758))
    ;
    if (cVar2 == '\0') {
      *(undefined4 *)(param_1 + 0x85c) = 0;
    }
    else {
      *(undefined4 *)(param_1 + 0x85c) = 1;
    }
    uVar1 = (**(code **)(**(longlong **)(param_1 + 0x7e0) + 0x260))(*(longlong **)(param_1 + 0x7e0))
    ;
    *(undefined1 *)(param_1 + 0x84f) = uVar1;
    uVar1 = (**(code **)(**(longlong **)(param_1 + 0x750) + 0x260))(*(longlong **)(param_1 + 0x750))
    ;
    *(undefined1 *)(param_1 + 0x84e) = uVar1;
    uVar1 = (**(code **)(**(longlong **)(param_1 + 0x748) + 0x260))(*(longlong **)(param_1 + 0x748))
    ;
    *(undefined1 *)(param_1 + 0x84c) = uVar1;
    uVar3 = (**(code **)(**(longlong **)(param_1 + 0x700) + 0x260))(*(longlong **)(param_1 + 0x700))
    ;
    *(undefined4 *)(param_1 + 0x81c) = uVar3;
    uVar3 = (**(code **)(**(longlong **)(param_1 + 0x718) + 0x260))(*(longlong **)(param_1 + 0x718))
    ;
    *(undefined4 *)(param_1 + 0x820) = uVar3;
    uVar3 = (**(code **)(**(longlong **)(param_1 + 0x720) + 0x260))(*(longlong **)(param_1 + 0x720))
    ;
    *(undefined4 *)(param_1 + 0x824) = uVar3;
    cVar2 = (**(code **)(**(longlong **)(param_1 + 0x7e8) + 0x260))(*(longlong **)(param_1 + 0x7e8))
    ;
    if (cVar2 == '\0') {
      *(uint *)(param_1 + 0x860) = *(uint *)(param_1 + 0x860) & 0xfffffffe;
    }
    else {
      *(uint *)(param_1 + 0x860) = *(uint *)(param_1 + 0x860) | 1;
    }
    *(uint *)(param_1 + 0x87f) = *(uint *)(param_1 + 0x87f) & 0xf0;
    uVar4 = (**(code **)(**(longlong **)(param_1 + 0x738) + 0x260))(*(longlong **)(param_1 + 0x738))
    ;
    *(uint *)(param_1 + 0x87f) = *(uint *)(param_1 + 0x87f) | uVar4;
    cVar2 = (**(code **)(**(longlong **)(param_1 + 0x768) + 0x260))(*(longlong **)(param_1 + 0x768))
    ;
    if (cVar2 == '\0') {
      *(uint *)(param_1 + 0x87f) = *(uint *)(param_1 + 0x87f) | 0x10;
    }
    else {
      *(uint *)(param_1 + 0x87f) = *(uint *)(param_1 + 0x87f) & 0xffffffef;
    }
    uVar3 = FUN_00f04d50(*(undefined8 *)(param_1 + 0x770));
    *(undefined4 *)(param_1 + 0x858) = uVar3;
    FUN_0064dd90(*(undefined8 *)(param_1 + 0x780),&local_10);
    FUN_00414ad0(param_1 + 0x890,local_10);
    FUN_0064dd90(*(undefined8 *)(param_1 + 0x7c0),&local_18);
    FUN_00414ad0(param_1 + 0x898,local_18);
    FUN_0064dd90(*(undefined8 *)(param_1 + 0x7a0),&local_20);
    FUN_00414ad0(param_1 + 0x838,local_20);
    FUN_0064dd90(*(undefined8 *)(param_1 + 2000),&local_28);
    FUN_00414ad0(param_1 + 0x840,local_28);
  }
  FUN_00414560(&local_28,4);
  return;
}

