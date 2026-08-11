/* Ghidra address: 00b29d90 */
/* Ghidra symbol: FUN_00b29d90 */


bool FUN_00b29d90(undefined8 param_1,undefined8 param_2,longlong param_3)

{
  char cVar1;
  undefined2 local_1c;
  undefined1 local_1a;
  byte local_19;
  
  cVar1 = FUN_00b211f0(param_2,&local_1c);
  if (cVar1 != '\0') {
    *(undefined2 *)(param_3 + 0xb) = local_1c;
    *(undefined1 *)(param_3 + 0xf) = local_1a;
    *(bool *)(param_3 + 0x11) = (local_19 & 2) != 0;
    *(bool *)(param_3 + 0x13) = (local_19 & 1) != 0;
    *(undefined1 *)(param_3 + 8) = 1;
  }
  return cVar1 != '\0';
}

