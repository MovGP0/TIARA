/* Ghidra address: 0195d850 */
/* Ghidra symbol: FUN_0195d850 */


void FUN_0195d850(longlong param_1)

{
  char cVar1;
  int iVar2;
  undefined4 uVar3;
  
  FUN_005fd4e0(*(undefined8 *)(*(longlong *)(param_1 + 200) + 0x78),
               *(undefined4 *)(*(longlong *)(*(longlong *)(param_1 + 0xc0) + 0x1c0) + 0x28));
  FUN_005fd6d0(*(undefined8 *)(*(longlong *)(param_1 + 200) + 0x78),
               *(undefined4 *)(*(longlong *)(param_1 + 0xc0) + 0x260));
  FUN_005fdcb0(*(undefined8 *)(*(longlong *)(param_1 + 200) + 0x80),0);
  FUN_0180c8a0(*(undefined8 *)(param_1 + 200),2);
  cVar1 = FUN_0195ce70(*(undefined8 *)(param_1 + 0xc0));
  if (cVar1 == '\0') {
    FUN_005fd670(*(undefined8 *)(*(longlong *)(param_1 + 200) + 0x78),
                 *(undefined1 *)(*(longlong *)(*(longlong *)(param_1 + 0xc0) + 0x1c0) + 0x3c));
    if (*(int *)(*(longlong *)(*(longlong *)(param_1 + 0xc0) + 0x1c0) + 0x28) == 0x1fffffff) {
      FUN_005fd670(*(undefined8 *)(*(longlong *)(param_1 + 200) + 0x78),5);
    }
    iVar2 = FUN_0195cef0(*(undefined8 *)(param_1 + 0xc0));
    if (iVar2 == 0x1fffffff) {
      FUN_005fdcb0(*(undefined8 *)(*(longlong *)(param_1 + 200) + 0x80),1);
    }
    else {
      uVar3 = FUN_0195cef0(*(undefined8 *)(param_1 + 0xc0));
      FUN_005fdab0(*(undefined8 *)(*(longlong *)(param_1 + 200) + 0x80),uVar3);
    }
    FUN_0195d720(param_1);
  }
  else {
    FUN_005fd670(*(undefined8 *)(*(longlong *)(param_1 + 200) + 0x78),
                 *(undefined1 *)(*(longlong *)(*(longlong *)(param_1 + 0xc0) + 0x1c0) + 0x3c));
    if (*(int *)(*(longlong *)(*(longlong *)(param_1 + 0xc0) + 0x1c0) + 0x28) == 0x1fffffff) {
      FUN_005fd670(*(undefined8 *)(*(longlong *)(param_1 + 200) + 0x78),5);
    }
    iVar2 = FUN_0195cef0(*(undefined8 *)(param_1 + 0xc0));
    if (iVar2 != 0x1fffffff) {
      uVar3 = FUN_0195cef0(*(undefined8 *)(param_1 + 0xc0));
      FUN_005fdab0(*(undefined8 *)(*(longlong *)(param_1 + 200) + 0x80),uVar3);
      FUN_0195d720(param_1);
    }
    uVar3 = FUN_0195ce70(*(undefined8 *)(param_1 + 0xc0));
    FUN_005fdcb0(*(undefined8 *)(*(longlong *)(param_1 + 200) + 0x80),uVar3);
    FUN_005fdab0(*(undefined8 *)(*(longlong *)(param_1 + 200) + 0x80),
                 *(undefined4 *)(*(longlong *)(*(longlong *)(param_1 + 0xc0) + 0x1c0) + 0x28));
    FUN_0195d720(param_1);
  }
  return;
}

