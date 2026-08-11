/* Ghidra address: 00b9bde0 */
/* Ghidra symbol: FUN_00b9bde0 */


void FUN_00b9bde0(longlong param_1,longlong param_2)

{
  char cVar1;
  
  if (*(longlong *)(param_1 + 0x50) != param_2) {
    if (*(char *)(param_1 + 0x58) != '\0') {
      FUN_00410f20(*(longlong *)(param_1 + 0x50));
    }
    *(longlong *)(param_1 + 0x50) = param_2;
    cVar1 = FUN_0045aee0(param_2);
    *(bool *)(param_1 + 0x58) = cVar1 == '\0';
    FUN_004b6dc0(*(undefined8 *)(param_1 + 0x20),*(undefined8 *)(param_1 + 0x38));
    *(undefined8 *)(param_1 + 0x30) = *(undefined8 *)(param_1 + 0x38);
    *(undefined4 *)(param_1 + 0x14) = 0;
    *(undefined4 *)(param_1 + 0x10) = 1;
    *(undefined4 *)(param_1 + 0x18) = 0;
  }
  return;
}

