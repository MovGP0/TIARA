/* Ghidra address: 0149ece0 */
/* Ghidra symbol: FUN_0149ece0 */


void FUN_0149ece0(longlong param_1,char param_2,undefined8 param_3)

{
  undefined4 uVar1;
  
  if (param_2 == '\x04') {
    uVar1 = FUN_00b95a20(param_3);
    *(undefined4 *)(param_1 + 0xc) = uVar1;
    uVar1 = FUN_00b95a40(param_3);
    *(undefined4 *)(param_1 + 0x10) = uVar1;
  }
  else if (param_2 == '\x05') {
    FUN_01a5eb60(*(undefined8 *)(param_1 + 0x28),param_3);
  }
  return;
}

