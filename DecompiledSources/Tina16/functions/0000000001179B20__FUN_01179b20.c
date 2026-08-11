/* Ghidra address: 01179b20 */
/* Ghidra symbol: FUN_01179b20 */


void FUN_01179b20(longlong param_1,undefined8 param_2,short *param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  if (*param_3 == 0xd) {
    uVar1 = *(undefined8 *)(param_1 + 0x750);
    uVar2 = FUN_00b90090(uVar1);
    FUN_00b90440(uVar1,uVar2);
  }
  return;
}

