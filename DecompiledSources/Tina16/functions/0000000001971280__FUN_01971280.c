/* Ghidra address: 01971280 */
/* Ghidra symbol: FUN_01971280 */


void FUN_01971280(longlong param_1)

{
  undefined4 uVar1;
  char cVar2;
  
  uVar1 = *(undefined4 *)(param_1 + 0x30);
  cVar2 = '\0';
  if (*(longlong *)(DAT_02110720 + 0x28) != 0) {
    cVar2 = (**(code **)(DAT_02110720 + 0x28))
                      (*(undefined8 *)(DAT_02110720 + 0x30),param_1,*(undefined8 *)(param_1 + 0x1d0)
                      );
  }
  if (cVar2 == '\0') {
    FUN_0194fa10(param_1,*(undefined8 *)(param_1 + 0x1d0));
  }
  *(undefined4 *)(param_1 + 0x30) = uVar1;
  return;
}

