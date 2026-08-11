/* Ghidra address: 0188b9a0 */
/* Ghidra symbol: FUN_0188b9a0 */


void FUN_0188b9a0(longlong param_1)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  int iVar3;
  
  if (*(char *)(param_1 + 0x58) == '\0') {
    uVar1 = FUN_00498310(600,600);
    *(undefined8 *)(param_1 + 0x40) = uVar1;
    *(undefined4 *)(param_1 + 0x24) = 9;
    *(undefined1 *)(param_1 + 0x20) = 0;
    *(undefined8 *)(param_1 + 0x30) = 0x406a400000000000;
    *(undefined8 *)(param_1 + 0x28) = 0x4072900000000000;
    iVar3 = 0x42;
    puVar2 = &DAT_01fb1b70;
    do {
      (**(code **)(**(longlong **)(param_1 + 0x70) + 0x80))
                (*(longlong **)(param_1 + 0x70),*puVar2,(longlong)*(int *)(puVar2 + -1));
      puVar2 = puVar2 + 3;
      iVar3 = iVar3 + -1;
    } while (iVar3 != 0);
    *(undefined4 *)(param_1 + 8) = 0xffffffff;
    *(undefined4 *)(param_1 + 0xc) = 0xffffffff;
    *(undefined1 *)(param_1 + 0x58) = 1;
  }
  return;
}

