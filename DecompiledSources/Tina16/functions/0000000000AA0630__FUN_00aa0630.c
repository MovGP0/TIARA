/* Ghidra address: 00aa0630 */
/* Ghidra symbol: FUN_00aa0630 */


undefined4 FUN_00aa0630(longlong *param_1)

{
  char cVar1;
  undefined1 auStack_38 [44];
  undefined4 local_c;
  
  cVar1 = (**(code **)(*param_1 + 0x28))(param_1);
  if (cVar1 == '\x01') {
    FUN_00aa0610(auStack_38);
  }
  else if (cVar1 == '\x11') {
    local_c = 0;
  }
  else {
    FUN_00a9fff0(auStack_38);
  }
  return local_c;
}

