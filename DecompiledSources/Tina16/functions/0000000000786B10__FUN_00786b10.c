/* Ghidra address: 00786b10 */
/* Ghidra symbol: FUN_00786b10 */


void FUN_00786b10(longlong param_1)

{
  undefined8 uVar1;
  
  if (*(longlong *)(param_1 + 0x30) != 0) {
    FUN_00742eb0(*(longlong *)(param_1 + 0x30),0);
    uVar1 = *(undefined8 *)(param_1 + 0x30);
    *(undefined8 *)(param_1 + 0x30) = 0;
    FUN_00410f20(uVar1);
  }
  return;
}

