/* Ghidra address: 008004a0 */
/* Ghidra symbol: FUN_008004a0 */


void FUN_008004a0(longlong param_1,char param_2)

{
  char cVar1;
  
  if (param_2 != *(char *)(param_1 + 0x640)) {
    *(char *)(param_1 + 0x640) = param_2;
    if ((param_2 == '\x01') && (*(longlong *)(param_1 + 0x648) != 0)) {
      FUN_00800510(param_1,0);
    }
    *(undefined8 *)(param_1 + 0x660) = 0;
    *(undefined8 *)(param_1 + 0x668) = 0;
    cVar1 = FUN_0065be20(param_1);
    if ((cVar1 != '\0') && ((*(ushort *)(param_1 + 0x34) & 0x10) == 0)) {
      FUN_00655b90(param_1);
    }
  }
  return;
}

