/* Ghidra address: 01d81500 */
/* Ghidra symbol: FUN_01d81500 */


void FUN_01d81500(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = *(longlong *)(param_1 + 0xae0);
  if ((int)(uint)*(byte *)(lVar1 + 0x2a) < (int)(*(byte *)(lVar1 + 0x30) - 1)) {
    *(char *)(lVar1 + 0x2a) = *(char *)(lVar1 + 0x2a) + '\x01';
    (**(code **)(**(longlong **)(param_1 + 0xa88) + 0x78))
              (*(longlong **)(param_1 + 0xa88),lVar1 + 0x2a,lVar1 + 0x118,1);
    FUN_00b90440(*(undefined8 *)(param_1 + 0xa20),*(undefined8 *)(lVar1 + 0x118));
  }
  return;
}

