/* Ghidra address: 01113dd0 */
/* Ghidra symbol: FUN_01113dd0 */


void FUN_01113dd0(longlong param_1)

{
  undefined4 uVar1;
  undefined1 local_34 [8];
  undefined8 local_2c;
  
  if ((*(char *)(param_1 + 0x611) != '\0') && (*(char *)(param_1 + 0x617) != '\0')) {
    *(undefined4 *)(param_1 + 0x618) = 0x10002;
    local_2c = 0;
    uVar1 = thunk_FUN_0418b35e(*(undefined2 *)(param_1 + 0x622),0x841,0x10002,local_34);
    *(undefined4 *)(param_1 + 0x634) = uVar1;
  }
  return;
}

