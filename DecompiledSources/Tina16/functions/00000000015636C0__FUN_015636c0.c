/* Ghidra address: 015636c0 */
/* Ghidra symbol: FUN_015636c0 */


undefined1 FUN_015636c0(longlong param_1,undefined8 param_2)

{
  char cVar1;
  undefined1 uVar2;
  longlong local_20 [2];
  
  uVar2 = 0;
  cVar1 = FUN_015755e0(*(undefined8 *)(param_1 + 0x8d0),param_2,local_20);
  if (cVar1 != '\0') {
    uVar2 = *(undefined1 *)(local_20[0] + 0x38);
  }
  return uVar2;
}

