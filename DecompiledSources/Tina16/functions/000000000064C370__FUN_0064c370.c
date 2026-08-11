/* Ghidra address: 0064c370 */
/* Ghidra symbol: FUN_0064c370 */


bool FUN_0064c370(longlong param_1,char param_2)

{
  bool bVar1;
  
  bVar1 = true;
  if (param_2 == '\0') {
    bVar1 = *(char *)(*(longlong *)(param_1 + 0x130) + 0x20) != '\x10';
  }
  else if (param_2 == '\x01') {
    bVar1 = *(char *)(*(longlong *)(param_1 + 0x130) + 0x21) != '\x10';
  }
  else if (param_2 == '\x02') {
    bVar1 = *(char *)(*(longlong *)(param_1 + 0x130) + 0x30) == '\0';
  }
  else if (param_2 == '\x03') {
    bVar1 = *(char *)(*(longlong *)(param_1 + 0x130) + 0x30) == '\0';
  }
  return bVar1;
}

