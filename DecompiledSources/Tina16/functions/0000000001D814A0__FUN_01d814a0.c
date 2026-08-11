/* Ghidra address: 01d814a0 */
/* Ghidra symbol: FUN_01d814a0 */


void FUN_01d814a0(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = *(longlong *)(param_1 + 0xae0);
  if (*(char *)(lVar1 + 0x2a) != '\0') {
    *(char *)(lVar1 + 0x2a) = *(char *)(lVar1 + 0x2a) + -1;
    (**(code **)(**(longlong **)(param_1 + 0xa88) + 0x78))
              (*(longlong **)(param_1 + 0xa88),lVar1 + 0x2a,lVar1 + 0x118,1);
    FUN_00b90440(*(undefined8 *)(param_1 + 0xa20),*(undefined8 *)(lVar1 + 0x118));
  }
  return;
}

