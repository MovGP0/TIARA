/* Ghidra address: 012b2180 */
/* Ghidra symbol: FUN_012b2180 */


void FUN_012b2180(longlong param_1,undefined8 param_2,short *param_3)

{
  longlong lVar1;
  undefined8 uVar2;
  
  if (*param_3 == 0xd) {
    *param_3 = 0;
    lVar1 = FUN_004113f0(*(undefined8 *)(param_1 + 0x870),&PTR_FUN_01105a20);
    uVar2 = FUN_00b90090(*(undefined8 *)(param_1 + 0xd30));
    *(undefined8 *)(lVar1 + 0x118) = uVar2;
    (**(code **)(**(longlong **)(param_1 + 0xdb8) + 0x78))
              (*(longlong **)(param_1 + 0xdb8),lVar1 + 0x2a,lVar1 + 0x118,0);
    FUN_00b90440(*(undefined8 *)(param_1 + 0xd30),*(undefined8 *)(lVar1 + 0x118));
    FUN_012b1410(param_1,param_1);
  }
  return;
}

