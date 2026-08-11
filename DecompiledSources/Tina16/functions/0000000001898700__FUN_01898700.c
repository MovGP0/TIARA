/* Ghidra address: 01898700 */
/* Ghidra symbol: FUN_01898700 */


void FUN_01898700(longlong param_1)

{
  undefined4 uVar1;
  undefined1 uVar2;
  
  FUN_005fdab0(*(undefined8 *)(*(longlong *)(param_1 + 0x498) + 0x80),0xff000005);
  FUN_005fd6d0(*(undefined8 *)(*(longlong *)(param_1 + 0x498) + 0x78),1);
  if (*(char *)(param_1 + 0x72e) == '\0') {
    uVar1 = 0xff00000a;
  }
  else {
    uVar1 = 0xff000008;
  }
  if ((*(char *)(param_1 + 0x72d) == '\0') || (*(char *)(param_1 + 0x734) != '\0')) {
    uVar2 = 0;
  }
  else {
    uVar2 = 1;
  }
  FUN_0180e880(*(undefined8 *)(param_1 + 0x498),param_1 + 0x738,uVar1,
               *(undefined1 *)(param_1 + 0x72d),uVar2,2,2,3,2);
  return;
}

