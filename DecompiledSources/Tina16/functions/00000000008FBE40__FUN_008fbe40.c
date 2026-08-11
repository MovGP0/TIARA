/* Ghidra address: 008fbe40 */
/* Ghidra symbol: FUN_008fbe40 */


undefined1 FUN_008fbe40(undefined8 param_1)

{
  char cVar1;
  int iVar2;
  undefined8 local_res8 [4];
  undefined1 local_9;
  
  local_res8[0] = param_1;
  FUN_00414650(local_res8);
  cVar1 = FUN_008faf10(local_res8[0]);
  if (cVar1 == '\0') {
    cVar1 = FUN_008fad00(local_res8[0]);
    if (cVar1 == '\0') {
      iVar2 = FUN_00416420(local_res8[0],0);
      if (iVar2 != 0) {
        local_9 = 0;
        goto code_r0x008fbe8c;
      }
    }
  }
  local_9 = 1;
code_r0x008fbe8c:
  FUN_00414520(local_res8);
  return local_9;
}

