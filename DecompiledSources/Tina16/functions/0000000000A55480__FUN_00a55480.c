/* Ghidra address: 00a55480 */
/* Ghidra symbol: FUN_00a55480 */


undefined8 FUN_00a55480(undefined8 param_1)

{
  char cVar1;
  undefined1 local_19 [9];
  
  local_19[0] = 0;
  cVar1 = FUN_00a55240(param_1,0x22,local_19);
  if ((((cVar1 == '\0') && (cVar1 = FUN_00a55240(param_1,0x23,local_19), cVar1 == '\0')) &&
      (cVar1 = FUN_00a55240(param_1,0x24,local_19), cVar1 == '\0')) &&
     (cVar1 = FUN_00a55240(param_1,0x25,local_19), cVar1 == '\0')) {
    return 0;
  }
  return 1;
}

