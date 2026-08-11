/* Ghidra address: 015001a0 */
/* Ghidra symbol: FUN_015001a0 */


void FUN_015001a0(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  char cVar1;
  code *local_18;
  longlong local_10;
  
  cVar1 = *(char *)(param_1 + 0x74c);
  *(bool *)param_3 = cVar1 == '\0';
  if (cVar1 != '\0') {
    local_18 = FUN_01500140;
    local_10 = param_1;
    FUN_00f836b0(&local_18);
  }
  return;
}

