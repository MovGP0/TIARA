/* Ghidra address: 018d68f0 */
/* Ghidra symbol: FUN_018d68f0 */


void FUN_018d68f0(longlong param_1)

{
  char cVar1;
  undefined1 auStack_48 [44];
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 local_14;
  
  local_14 = 0;
  local_18 = *(undefined4 *)(param_1 + 0x4c);
  local_1c = 0;
  do {
    cVar1 = FUN_018d6740(auStack_48,local_18);
  } while (cVar1 == '\0');
  return;
}

