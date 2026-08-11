/* Ghidra address: 01b59a10 */
/* Ghidra symbol: FUN_01b59a10 */


void FUN_01b59a10(longlong param_1,undefined8 param_2,short *param_3)

{
  undefined8 uVar1;
  
  if (*param_3 == 0xd) {
    *param_3 = 0;
    uVar1 = FUN_00b90090(*(undefined8 *)(param_1 + 0xcc0));
    *(undefined8 *)(param_1 + 0xd48) = uVar1;
    FUN_01b58f20(param_1,param_1 + 0xd48,*(undefined8 *)(param_1 + 0xd38),6);
    FUN_01b581d0(param_1,1);
  }
  return;
}

