/* Ghidra address: 01085240 */
/* Ghidra symbol: FUN_01085240 */


void FUN_01085240(longlong param_1,undefined8 param_2,longlong param_3)

{
  char cVar1;
  undefined8 local_20 [2];
  
  if ((((*(char *)(param_1 + 0xb50) == '\0') && (*(char *)(param_1 + 0xb50) == '\0')) &&
      (*(longlong *)(param_3 + 0x18) != 0)) && (*(longlong *)(param_1 + 0xab8) != 0)) {
    cVar1 = FUN_010b13a0(*(undefined8 *)(param_1 + 0xac8),
                         *(undefined8 *)(*(longlong *)(param_1 + 0xab8) + 0x10),local_20,0);
    if (cVar1 != '\0') {
      FUN_010850a0(param_1,local_20[0],0);
    }
  }
  return;
}

