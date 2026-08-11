/* Ghidra address: 00d41210 */
/* Ghidra symbol: FUN_00d41210 */


void FUN_00d41210(longlong param_1,longlong param_2)

{
  undefined8 uVar1;
  char cVar2;
  undefined4 uVar3;
  
  *(undefined1 *)(param_1 + 0x40) = 0;
  cVar2 = FUN_00788df0(param_1);
  if ((cVar2 != '\0') && (*(char *)(param_1 + 0x2a) != '\0')) {
    uVar1 = FUN_00788400(param_1,param_2);
    *(undefined8 *)(param_2 + 0x18) = uVar1;
    uVar3 = FUN_00787fa0(*(undefined8 *)(param_1 + 0x18));
    *(undefined4 *)(param_1 + 0x108) = uVar3;
    uVar3 = FUN_00787c80(*(undefined8 *)(param_1 + 0x18));
    *(undefined4 *)(param_1 + 0x10c) = uVar3;
    *(undefined1 *)(param_1 + 0x40) = 1;
  }
  return;
}

