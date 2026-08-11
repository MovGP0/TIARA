/* Ghidra address: 012b20b0 */
/* Ghidra symbol: FUN_012b20b0 */


void FUN_012b20b0(longlong param_1,undefined8 param_2,short *param_3)

{
  longlong lVar1;
  undefined8 uVar2;
  
  if (*param_3 == 0xd) {
    *param_3 = 0;
    lVar1 = FUN_004113f0(*(undefined8 *)(param_1 + 0x870),&PTR_FUN_01105a20);
    uVar2 = FUN_00b90090(*(undefined8 *)(param_1 + 0xd38));
    *(undefined8 *)(lVar1 + 0x110) = uVar2;
    FUN_012b07b0(param_1,param_1);
  }
  return;
}

