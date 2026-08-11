/* Ghidra address: 0123d6a0 */
/* Ghidra symbol: FUN_0123d6a0 */


void FUN_0123d6a0(longlong param_1)

{
  undefined8 *puVar1;
  longlong lVar2;
  int iVar3;
  undefined4 uVar4;
  undefined8 uVar5;
  longlong lVar6;
  
  puVar1 = *(undefined8 **)(param_1 + 0x18);
  *puVar1 = 0;
  puVar1[1] = 0;
  *(undefined4 *)(puVar1 + 0x710) = 1;
  iVar3 = 0;
  do {
    lVar2 = *(longlong *)(param_1 + 0x18);
    lVar6 = (longlong)iVar3;
    *(undefined8 *)(lVar2 + 0x10 + lVar6 * 8) = 0;
    *(undefined8 *)(lVar2 + 0x978 + lVar6 * 8) = 0;
    *(undefined8 *)(*(longlong *)(param_1 + 0x18) + 0x12e0 + lVar6 * 8) = 0;
    *(undefined8 *)(*(longlong *)(param_1 + 0x18) + 0x1c48 + lVar6 * 8) = 0;
    *(undefined8 *)(*(longlong *)(param_1 + 0x18) + 0x25b0 + lVar6 * 8) = 0;
    *(undefined8 *)(*(longlong *)(param_1 + 0x18) + 0x2f18 + lVar6 * 8) = 0;
    iVar3 = iVar3 + 1;
  } while (iVar3 != 0x12d);
  lVar2 = *(longlong *)(param_1 + 0x600);
  if (*(short *)(lVar2 + 0x1fa8) == 0x41) {
    if (*(char *)(lVar2 + 0x1fc8) == '\0') {
      uVar4 = FUN_01239eb0(param_1 + 0x28,param_1 + 0x38);
      *(undefined4 *)(param_1 + 8) = uVar4;
    }
    else {
      uVar4 = FUN_01239780(param_1 + 0x28,param_1 + 0x30,*(undefined8 *)(lVar2 + 0x1fb0),
                           *(undefined8 *)(lVar2 + 0x1fb8));
      *(undefined4 *)(param_1 + 8) = uVar4;
    }
  }
  if (*(int *)(param_1 + 8) != 0) {
    uVar5 = FUN_0044d490(&PTR_FUN_004334c0,1,L"Circuit synthesis error. Try another specification.")
    ;
    FUN_004134c0(uVar5);
  }
  return;
}

