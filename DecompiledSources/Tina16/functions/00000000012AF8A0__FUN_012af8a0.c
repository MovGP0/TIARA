/* Ghidra address: 012af8a0 */
/* Ghidra symbol: FUN_012af8a0 */


void FUN_012af8a0(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_004113f0(*(undefined8 *)(param_1 + 0x870),&PTR_FUN_01105a20);
  if ((int)(uint)*(byte *)(lVar1 + 0x2a) < (int)(*(byte *)(lVar1 + 0x30) - 1)) {
    *(char *)(lVar1 + 0x2a) = *(char *)(lVar1 + 0x2a) + '\x01';
    (**(code **)(**(longlong **)(param_1 + 0xdb8) + 0x78))
              (*(longlong **)(param_1 + 0xdb8),lVar1 + 0x2a,lVar1 + 0x118,1);
    FUN_00b90440(*(undefined8 *)(param_1 + 0xd30),*(undefined8 *)(lVar1 + 0x118));
  }
  return;
}

