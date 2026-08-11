/* Ghidra address: 0199c700 */
/* Ghidra symbol: FUN_0199c700 */


void FUN_0199c700(longlong param_1,longlong param_2)

{
  char cVar1;
  undefined4 local_20;
  undefined4 local_1c;
  
  local_20 = *(undefined4 *)(param_2 + 0xc);
  local_1c = *(undefined4 *)(param_2 + 0x10);
  if (2 < *(int *)(param_2 + 8)) {
    cVar1 = FUN_00b958b0(*(undefined8 *)(param_1 + 0x58),&local_20);
    if (cVar1 != '\0') {
      (**(code **)(**(longlong **)(param_1 + 0x60) + 0x78))
                (*(longlong **)(param_1 + 0x60),*(undefined4 *)(param_2 + 0xc),
                 *(undefined4 *)(param_2 + 0x10));
    }
  }
  return;
}

