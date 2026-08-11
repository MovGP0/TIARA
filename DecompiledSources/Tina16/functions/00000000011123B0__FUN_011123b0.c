/* Ghidra address: 011123b0 */
/* Ghidra symbol: FUN_011123b0 */


void FUN_011123b0(longlong param_1,longlong param_2)

{
  char cVar1;
  undefined8 local_20 [2];
  
  if (*(char *)(param_1 + 0x5c0) != '\0') {
    local_20[0] = CONCAT44((int)*(short *)(param_2 + 0x12),(int)*(short *)(param_2 + 0x10));
    cVar1 = FUN_00423210(param_1 + 0x5c4,local_20);
    if (cVar1 != *(char *)(param_1 + 0x5c1)) {
      *(bool *)(param_1 + 0x5c1) = *(char *)(param_1 + 0x5c1) == '\0';
      FUN_011116f0(param_1,*(undefined1 *)(param_1 + 0x5c2),*(undefined4 *)(param_1 + 0x5c4));
    }
  }
  return;
}

