/* Ghidra address: 00c28a40 */
/* Ghidra symbol: FUN_00c28a40 */


void FUN_00c28a40(longlong param_1)

{
  char cVar1;
  undefined1 uVar2;
  
  if ((*(longlong *)(param_1 + 0x30) != 0) && (*(int *)(param_1 + 0x38) != 0)) {
    cVar1 = FUN_00c2a4a0(param_1);
    if (cVar1 == '\0') {
      uVar2 = 0;
    }
    else {
      uVar2 = FUN_00c2e3e0(*(undefined8 *)(param_1 + 0x60));
    }
    FUN_0040d200(*(undefined8 *)(param_1 + 0x30),(longlong)*(int *)(param_1 + 0x38),uVar2);
  }
  return;
}

