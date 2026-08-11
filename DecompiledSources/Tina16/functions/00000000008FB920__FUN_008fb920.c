/* Ghidra address: 008fb920 */
/* Ghidra symbol: FUN_008fb920 */


undefined1 FUN_008fb920(undefined8 param_1)

{
  char cVar1;
  undefined1 uVar2;
  undefined8 local_res8 [4];
  
  local_res8[0] = param_1;
  FUN_00414650(local_res8);
  cVar1 = FUN_008fb990(local_res8[0]);
  if (cVar1 == '\0') {
    cVar1 = FUN_008fbcc0(local_res8[0]);
    if (cVar1 == '\0') {
      uVar2 = 0;
      goto LAB_008fb956;
    }
  }
  uVar2 = 1;
LAB_008fb956:
  FUN_00414520(local_res8);
  return uVar2;
}

