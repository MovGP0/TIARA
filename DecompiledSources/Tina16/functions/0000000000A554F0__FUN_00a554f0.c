/* Ghidra address: 00a554f0 */
/* Ghidra symbol: FUN_00a554f0 */


bool FUN_00a554f0(undefined8 param_1)

{
  bool bVar1;
  char local_19 [9];
  
  local_19[0] = '\0';
  FUN_00a55240(param_1,0x22,local_19);
  bVar1 = local_19[0] != '\0';
  if (!bVar1) {
    FUN_00a55240(param_1,0x23,local_19);
    bVar1 = local_19[0] != '\0';
    if (!bVar1) {
      FUN_00a55240(param_1,0x24,local_19);
      bVar1 = local_19[0] != '\0';
      if (!bVar1) {
        FUN_00a55240(param_1,0x25,local_19);
        bVar1 = local_19[0] != '\0';
      }
    }
  }
  return bVar1;
}

