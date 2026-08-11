/* Ghidra address: 01c779c0 */
/* Ghidra symbol: FUN_01c779c0 */


void FUN_01c779c0(longlong param_1,char param_2)

{
  undefined4 uVar1;
  longlong lVar2;
  
  if ((*(char *)(param_1 + 0x182a) != '\0') && (*(char *)(param_1 + 0x182b) != param_2)) {
    return;
  }
  if ((param_2 == '\0') || (lVar2 = FUN_01c7da00(param_1), lVar2 == 0)) {
    uVar1 = 0;
  }
  else {
    uVar1 = (undefined4)CONCAT71((int7)((ulonglong)lVar2 >> 8),1);
  }
  FUN_007e2d20(*(undefined8 *)(param_1 + 0x9e8),uVar1);
  FUN_0082a6c0(*(undefined8 *)(param_1 + 0xb78),
               *(undefined1 *)(*(longlong *)(param_1 + 0x9e8) + 0x80));
  FUN_01c77ab0(param_1,0);
  return;
}

