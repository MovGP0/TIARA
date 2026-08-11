/* Ghidra address: 007077d0 */
/* Ghidra symbol: FUN_007077d0 */


void FUN_007077d0(longlong param_1,char param_2)

{
  longlong lVar1;
  undefined8 uVar2;
  
  if (*(char *)(param_1 + 0x2f) != param_2) {
    *(char *)(param_1 + 0x2f) = param_2;
    lVar1 = FUN_00707f20(*(undefined8 *)(param_1 + 8));
    if ((*(ushort *)(lVar1 + 0x34) & 1) == 0) {
      uVar2 = FUN_00707f20(*(undefined8 *)(param_1 + 8));
      FUN_006f7580(uVar2);
    }
  }
  return;
}

