/* Ghidra address: 00b29df0 */
/* Ghidra symbol: FUN_00b29df0 */


bool FUN_00b29df0(undefined8 param_1,undefined8 param_2,longlong param_3)

{
  char cVar1;
  undefined2 local_1f;
  undefined2 local_1d;
  undefined1 local_1b;
  undefined1 local_1a;
  byte local_19;
  
  cVar1 = FUN_00b214b0(param_2,&local_1f);
  if (cVar1 != '\0') {
    *(undefined2 *)(param_3 + 0xb) = local_1f;
    *(undefined1 *)(param_3 + 0xf) = local_1b;
    *(bool *)(param_3 + 0x11) = (local_19 & 2) != 0;
    *(bool *)(param_3 + 0x13) = (local_19 & 1) != 0;
    *(undefined2 *)(param_3 + 0xd) = local_1d;
    *(undefined1 *)(param_3 + 0x10) = local_1a;
    *(bool *)(param_3 + 0x12) = (local_19 & 8) != 0;
    *(bool *)(param_3 + 0x14) = (local_19 & 4) != 0;
    *(undefined1 *)(param_3 + 8) = 2;
  }
  return cVar1 != '\0';
}

