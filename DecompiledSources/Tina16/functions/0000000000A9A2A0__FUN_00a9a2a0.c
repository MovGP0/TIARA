/* Ghidra address: 00a9a2a0 */
/* Ghidra symbol: FUN_00a9a2a0 */


void FUN_00a9a2a0(longlong param_1)

{
  undefined8 uVar1;
  char cVar2;
  code *pcVar3;
  
  uVar1 = *(undefined8 *)(param_1 + 0x140);
  pcVar3 = (code *)FUN_00411550(uVar1,0xffb3);
  cVar2 = (*pcVar3)(uVar1);
  if (cVar2 != '\0') {
    (**(code **)(**(longlong **)(param_1 + 0x140) + 600))(*(longlong **)(param_1 + 0x140));
  }
  FUN_00a99e30(param_1,param_1);
  *(undefined4 *)(param_1 + 0x150) = *(undefined4 *)(param_1 + 0x158);
  *(undefined4 *)(param_1 + 0x154) = *(undefined4 *)(param_1 + 0x15c);
  if (*(char *)(param_1 + 0x110) == '\0') {
    FUN_00a98c40(*(undefined8 *)(param_1 + 0xf8),0);
  }
  return;
}

