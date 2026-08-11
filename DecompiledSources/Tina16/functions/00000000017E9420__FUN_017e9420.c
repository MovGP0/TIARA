/* Ghidra address: 017e9420 */
/* Ghidra symbol: FUN_017e9420 */


void FUN_017e9420(longlong param_1,longlong param_2)

{
  undefined8 uVar1;
  undefined1 local_48 [56];
  
  if (*(char *)(param_1 + 0x629) == '\0') {
    FUN_010c8670(param_2);
  }
  FUN_010c7a40(local_48,0x401921fb54442d18);
  FUN_010c8c20(param_2,local_48);
  uVar1 = FUN_0040bcd0(*(undefined8 *)(param_2 + 8));
  *(undefined8 *)(param_2 + 8) = uVar1;
  return;
}

