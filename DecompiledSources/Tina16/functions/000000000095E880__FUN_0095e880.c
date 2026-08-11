/* Ghidra address: 0095e880 */
/* Ghidra symbol: FUN_0095e880 */


undefined1 FUN_0095e880(undefined8 *param_1)

{
  char cVar1;
  int iVar2;
  undefined1 local_21;
  undefined8 local_20 [2];
  
  local_20[0] = 0;
  iVar2 = FUN_00416420(param_1[9],0);
  if (iVar2 == 0) {
    iVar2 = FUN_00416420(param_1[0xb],0);
    if (iVar2 == 0) {
      iVar2 = FUN_00416420(param_1[7],0);
      if (iVar2 == 0) {
        (**(code **)*param_1)(param_1,local_20);
        cVar1 = FUN_00900280(local_20[0]);
        if (cVar1 == '\0') {
          local_21 = 0;
        }
        else {
          local_21 = 2;
        }
        goto code_r0x0095e901;
      }
    }
  }
  local_21 = 1;
code_r0x0095e901:
  FUN_00414520(local_20);
  return local_21;
}

