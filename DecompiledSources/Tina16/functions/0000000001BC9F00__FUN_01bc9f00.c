/* Ghidra address: 01bc9f00 */
/* Ghidra symbol: FUN_01bc9f00 */


void FUN_01bc9f00(longlong param_1,longlong param_2,undefined4 param_3)

{
  char cVar1;
  
  FUN_00654ca0(param_1,param_2,param_3);
  cVar1 = (char)param_3;
  if ((cVar1 == '\x01') && (param_2 == *(longlong *)(param_1 + 0x590))) {
    *(undefined8 *)(param_1 + 0x590) = 0;
  }
  if ((cVar1 == '\x01') && (param_2 == *(longlong *)(param_1 + 0x598))) {
    *(undefined8 *)(param_1 + 0x598) = 0;
  }
  if ((cVar1 == '\x01') && (param_2 == *(longlong *)(param_1 + 0x5a0))) {
    *(undefined8 *)(param_1 + 0x5a0) = 0;
  }
  return;
}

