/* Ghidra address: 01088070 */
/* Ghidra symbol: FUN_01088070 */


void FUN_01088070(longlong param_1,int *param_2,undefined8 param_3)

{
  bool bVar1;
  undefined1 uVar2;
  undefined4 uVar3;
  int iVar4;
  
  bVar1 = false;
  *(undefined1 *)(param_1 + 0x6c4) = 0;
  do {
    if (*(int *)(param_1 + 0x4c8c) == 0) {
      FUN_010878b0(param_1);
    }
    else {
      FUN_01087620(param_1);
    }
    if (!bVar1) {
      uVar3 = _Debug_GetTraceOverPc(*(undefined8 *)(param_1 + 0xb20));
      *(undefined4 *)(param_1 + 0x4c8c) = uVar3;
      bVar1 = true;
    }
    uVar3 = FUN_01085d30(param_1);
    *(undefined4 *)(param_1 + 0x4c88) = uVar3;
    uVar3 = FUN_01085d60(param_1,uVar3,param_1 + 0x4cb0,0);
    *(undefined4 *)(param_1 + 0x4c94) = uVar3;
    uVar2 = FUN_010874a0(param_1);
    *(undefined1 *)(param_1 + 0x6c4) = uVar2;
    iVar4 = *(int *)(param_1 + 0x4c8c);
  } while ((((iVar4 == 0) || (*(int *)(param_1 + 0x4c88) != iVar4)) && (iVar4 != 0)) &&
          (*(char *)(param_1 + 0x6c4) == '\0'));
  *(undefined4 *)(param_1 + 0x4c8c) = 0;
  _Debug_SetTraceOverPc(*(undefined8 *)(param_1 + 0xb20),0);
  iVar4 = FUN_01085d60(param_1,*(undefined4 *)(param_1 + 0x4c88),param_3,0);
  *param_2 = iVar4;
  if (*param_2 == -1) {
    FUN_010878b0(param_1);
  }
  iVar4 = FUN_01085d60(param_1,*(undefined4 *)(param_1 + 0x4c88),param_3,0);
  *param_2 = iVar4;
  return;
}

