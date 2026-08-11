/* Ghidra address: 01b684b0 */
/* Ghidra symbol: FUN_01b684b0 */


void FUN_01b684b0(longlong param_1,undefined8 param_2,short *param_3)

{
  undefined8 uVar1;
  
  if (*param_3 == 0xd) {
    *param_3 = 0;
    uVar1 = FUN_00b90090(*(undefined8 *)(param_1 + 0xcb8));
    *(undefined8 *)(param_1 + 0xd90) = uVar1;
    FUN_01b677e0(param_1,param_1 + 0xd90,*(undefined8 *)(param_1 + 0xd88),6);
    FUN_01b655a0(param_1,1);
  }
  return;
}

