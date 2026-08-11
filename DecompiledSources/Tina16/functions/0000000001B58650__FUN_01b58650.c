/* Ghidra address: 01b58650 */
/* Ghidra symbol: FUN_01b58650 */


void FUN_01b58650(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_004113f0(*(undefined8 *)(param_1 + 0x870),&PTR_FUN_011061a0);
  if (*(char *)(lVar1 + 0x2a) != '\0') {
    *(char *)(lVar1 + 0x2a) = *(char *)(lVar1 + 0x2a) + -1;
    (**(code **)(**(longlong **)(param_1 + 0xd58) + 0xa8))
              (*(longlong **)(param_1 + 0xd58),*(undefined1 *)(lVar1 + 0x2a));
    (**(code **)(**(longlong **)(param_1 + 0xd58) + 0x88))
              (*(longlong **)(param_1 + 0xd58),lVar1 + 0x2a,lVar1 + 0x118,1);
    FUN_00b90440(*(undefined8 *)(param_1 + 0xc60),*(undefined8 *)(lVar1 + 0x118));
  }
  return;
}

