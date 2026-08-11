/* Ghidra address: 005d2be0 */
/* Ghidra symbol: FUN_005d2be0 */


undefined8 FUN_005d2be0(longlong param_1)

{
  char cVar1;
  undefined8 uVar2;
  longlong local_res8 [4];
  
  uVar2 = 0;
  if (param_1 != 0) {
    local_res8[0] = param_1;
    cVar1 = FUN_004575a0(local_res8,PTR_u_____UNC__01de8350,0);
    if (cVar1 == '\0') {
      cVar1 = FUN_004575a0(local_res8,PTR_u______01de8348,0);
      if (cVar1 != '\0') {
        uVar2 = 1;
      }
    }
    else {
      uVar2 = 2;
    }
  }
  return uVar2;
}

