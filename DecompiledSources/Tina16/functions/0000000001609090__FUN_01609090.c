/* Ghidra address: 01609090 */
/* Ghidra symbol: FUN_01609090 */


undefined1 FUN_01609090(undefined8 param_1)

{
  char cVar1;
  undefined1 uVar2;
  undefined8 local_res8 [4];
  
  local_res8[0] = param_1;
  FUN_00414610(param_1);
  cVar1 = FUN_01609310(local_res8[0]);
  if (cVar1 == '\0') {
    cVar1 = FUN_01609590(local_res8[0]);
    if (cVar1 == '\0') {
      uVar2 = 0;
      goto LAB_016090c6;
    }
  }
  uVar2 = 1;
LAB_016090c6:
  FUN_00414480(local_res8);
  return uVar2;
}

