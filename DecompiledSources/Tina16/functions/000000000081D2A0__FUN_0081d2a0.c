/* Ghidra address: 0081d2a0 */
/* Ghidra symbol: FUN_0081d2a0 */


void FUN_0081d2a0(longlong param_1,longlong param_2)

{
  char cVar1;
  
  if ((*(char *)(*(longlong *)(param_1 + 0x10) + 0x4d6) == '\x02') &&
     (*(char *)(param_1 + 0x118) == '\0')) {
    *(undefined8 *)(param_1 + 0x58) = *(undefined8 *)(param_2 + 8);
    FUN_00818770(param_1,1);
    *(undefined8 *)(param_1 + 0x58) = 0;
    if (*(longlong *)(param_1 + 0xa0) != 0) {
      cVar1 = FUN_00818440(param_1);
      if (cVar1 != '\0') {
        cVar1 = FUN_00818720(param_1);
        if ((cVar1 == '\0') || (*(char *)(*(longlong *)(param_1 + 0xa0) + 0xc1) != '\0')) {
          cVar1 = FUN_00818720(param_1);
          if ((cVar1 == '\0') && (*(char *)(*(longlong *)(param_1 + 0xa0) + 0xc1) != '\0')) {
            FUN_00813e30(*(undefined8 *)(param_1 + 0xa0),0);
          }
        }
        else {
          FUN_00813e30(*(undefined8 *)(param_1 + 0xa0),1);
        }
      }
    }
    *(undefined1 *)(param_1 + 0x20) = 1;
  }
  return;
}

