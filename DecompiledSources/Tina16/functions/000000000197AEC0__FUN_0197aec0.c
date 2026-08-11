/* Ghidra address: 0197aec0 */
/* Ghidra symbol: FUN_0197aec0 */


void FUN_0197aec0(longlong param_1)

{
  undefined8 local_10;
  
  local_10 = 0;
  if (*(char *)(param_1 + 0xf8) == '\0') {
    FUN_0180fc10(&local_10);
    FUN_00414ad0(param_1 + 0x90,local_10);
    FUN_004412f0(*(undefined8 *)(param_1 + 0x90));
    FUN_01979c40(param_1,0,0);
    *(undefined1 *)(param_1 + 0xf8) = 1;
  }
  FUN_00414480(&local_10);
  return;
}

