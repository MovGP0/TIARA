/* Ghidra address: 01719d10 */
/* Ghidra symbol: FUN_01719d10 */


void FUN_01719d10(longlong param_1)

{
  undefined1 uVar1;
  char cVar2;
  undefined8 uVar3;
  longlong lVar4;
  undefined1 auStack_58 [40];
  undefined1 *local_30;
  undefined1 local_21;
  longlong *local_20;
  
  local_30 = auStack_58;
  uVar3 = FUN_0171cea0(*(undefined8 *)(param_1 + 8));
  local_20 = (longlong *)FUN_0171d250(uVar3);
  while( true ) {
    cVar2 = thunk_FUN_0171d3c2(local_20);
    if (cVar2 == '\0') break;
    uVar1 = FUN_0171d2a0(local_20);
    local_21 = uVar1;
    lVar4 = FUN_0171bfe0(*(undefined8 *)(param_1 + 8),uVar1);
    (**(code **)(**(longlong **)(param_1 + 0x10) + 0x88))
              (*(longlong **)(param_1 + 0x10),*(undefined8 *)(lVar4 + 8));
    lVar4 = FUN_0171bfe0(*(undefined8 *)(param_1 + 8),uVar1);
    (**(code **)(**(longlong **)(param_1 + 0x38) + 0x88))
              (*(longlong **)(param_1 + 0x38),*(undefined8 *)(lVar4 + 0x30));
    lVar4 = FUN_0171bfe0(*(undefined8 *)(param_1 + 8),uVar1);
    (**(code **)(**(longlong **)(param_1 + 0x60) + 0x88))
              (*(longlong **)(param_1 + 0x60),*(undefined8 *)(lVar4 + 0x58));
    lVar4 = FUN_0171bfe0(*(undefined8 *)(param_1 + 8),uVar1);
    (**(code **)(**(longlong **)(param_1 + 0x18) + 0x88))
              (*(longlong **)(param_1 + 0x18),*(undefined8 *)(lVar4 + 0x10));
    lVar4 = FUN_0171bfe0(*(undefined8 *)(param_1 + 8),uVar1);
    (**(code **)(**(longlong **)(param_1 + 0x40) + 0x88))
              (*(longlong **)(param_1 + 0x40),*(undefined8 *)(lVar4 + 0x38));
    lVar4 = FUN_0171bfe0(*(undefined8 *)(param_1 + 8),uVar1);
    (**(code **)(**(longlong **)(param_1 + 0x68) + 0x88))
              (*(longlong **)(param_1 + 0x68),*(undefined8 *)(lVar4 + 0x60));
    lVar4 = FUN_0171bfe0(*(undefined8 *)(param_1 + 8),uVar1);
    (**(code **)(**(longlong **)(param_1 + 0x20) + 0x88))
              (*(longlong **)(param_1 + 0x20),*(undefined8 *)(lVar4 + 0x18));
    lVar4 = FUN_0171bfe0(*(undefined8 *)(param_1 + 8),uVar1);
    (**(code **)(**(longlong **)(param_1 + 0x48) + 0x88))
              (*(longlong **)(param_1 + 0x48),*(undefined8 *)(lVar4 + 0x40));
    lVar4 = FUN_0171bfe0(*(undefined8 *)(param_1 + 8),uVar1);
    (**(code **)(**(longlong **)(param_1 + 0x70) + 0x88))
              (*(longlong **)(param_1 + 0x70),*(undefined8 *)(lVar4 + 0x68));
    lVar4 = FUN_0171bfe0(*(undefined8 *)(param_1 + 8),uVar1);
    (**(code **)(**(longlong **)(param_1 + 0x28) + 0x88))
              (*(longlong **)(param_1 + 0x28),*(undefined8 *)(lVar4 + 0x20));
    lVar4 = FUN_0171bfe0(*(undefined8 *)(param_1 + 8),uVar1);
    (**(code **)(**(longlong **)(param_1 + 0x50) + 0x88))
              (*(longlong **)(param_1 + 0x50),*(undefined8 *)(lVar4 + 0x48));
    lVar4 = FUN_0171bfe0(*(undefined8 *)(param_1 + 8),uVar1);
    (**(code **)(**(longlong **)(param_1 + 0x78) + 0x88))
              (*(longlong **)(param_1 + 0x78),*(undefined8 *)(lVar4 + 0x70));
    lVar4 = FUN_0171bfe0(*(undefined8 *)(param_1 + 8),uVar1);
    (**(code **)(**(longlong **)(param_1 + 0x30) + 0x88))
              (*(longlong **)(param_1 + 0x30),*(undefined8 *)(lVar4 + 0x28));
    lVar4 = FUN_0171bfe0(*(undefined8 *)(param_1 + 8),uVar1);
    (**(code **)(**(longlong **)(param_1 + 0x58) + 0x88))
              (*(longlong **)(param_1 + 0x58),*(undefined8 *)(lVar4 + 0x50));
    lVar4 = FUN_0171bfe0(*(undefined8 *)(param_1 + 8),uVar1);
    (**(code **)(**(longlong **)(param_1 + 0x80) + 0x88))
              (*(longlong **)(param_1 + 0x80),*(undefined8 *)(lVar4 + 0x78));
    lVar4 = FUN_0171bfe0(*(undefined8 *)(param_1 + 8),uVar1);
    (**(code **)(**(longlong **)(param_1 + 0x88) + 0x88))
              (*(longlong **)(param_1 + 0x88),*(undefined8 *)(lVar4 + 0x80));
    lVar4 = FUN_0171bfe0(*(undefined8 *)(param_1 + 8),uVar1);
    (**(code **)(**(longlong **)(param_1 + 0x90) + 0x88))
              (*(longlong **)(param_1 + 0x90),*(undefined8 *)(lVar4 + 0x88));
    lVar4 = FUN_0171bfe0(*(undefined8 *)(param_1 + 8),uVar1);
    (**(code **)(**(longlong **)(param_1 + 0x98) + 0x88))
              (*(longlong **)(param_1 + 0x98),*(undefined8 *)(lVar4 + 0x90));
  }
  if (local_20 != (longlong *)0x0) {
    (**(code **)(*local_20 + -0x20))(local_20,1);
  }
  *(undefined1 *)(*(longlong *)(param_1 + 0x10) + 0x78) = 0;
  *(undefined1 *)(*(longlong *)(param_1 + 0x18) + 0x78) = 0;
  *(undefined1 *)(*(longlong *)(param_1 + 0x20) + 0x78) = 0;
  *(undefined1 *)(*(longlong *)(param_1 + 0x28) + 0x78) = 0;
  *(undefined1 *)(*(longlong *)(param_1 + 0x30) + 0x78) = 0;
  return;
}

