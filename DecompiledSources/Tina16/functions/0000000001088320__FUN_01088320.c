/* Ghidra address: 01088320 */
/* Ghidra symbol: FUN_01088320 */


void FUN_01088320(longlong param_1,int *param_2,undefined8 param_3)

{
  undefined1 uVar1;
  undefined4 uVar2;
  int iVar3;
  
  *(undefined1 *)(param_1 + 0x6c4) = 0;
  do {
    FUN_01087620(param_1);
    uVar2 = FUN_01085d30(param_1);
    *(undefined4 *)(param_1 + 0x4c88) = uVar2;
    uVar2 = FUN_01085d60(param_1,uVar2,param_1 + 0x4cb0,0);
    *(undefined4 *)(param_1 + 0x4c94) = uVar2;
    uVar1 = FUN_010874a0(param_1);
    *(undefined1 *)(param_1 + 0x6c4) = uVar1;
    iVar3 = *(int *)(param_1 + 0x4c90);
    if (((iVar3 != 0) && (*(int *)(param_1 + 0x4c88) == iVar3)) || (iVar3 == 0)) break;
  } while (*(char *)(param_1 + 0x6c4) == '\0');
  *(undefined4 *)(param_1 + 0x4c8c) = 0;
  _Debug_SetTraceOverPc(*(undefined8 *)(param_1 + 0xb20),0);
  iVar3 = FUN_01085d60(param_1,*(undefined4 *)(param_1 + 0x4c88),param_3,0);
  *param_2 = iVar3;
  if (*param_2 == -1) {
    FUN_010878b0(param_1);
  }
  iVar3 = FUN_01085d60(param_1,*(undefined4 *)(param_1 + 0x4c88),param_3,0);
  *param_2 = iVar3;
  return;
}

