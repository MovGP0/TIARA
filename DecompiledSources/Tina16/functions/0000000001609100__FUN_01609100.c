/* Ghidra address: 01609100 */
/* Ghidra symbol: FUN_01609100 */


undefined1 FUN_01609100(undefined8 param_1)

{
  char cVar1;
  undefined1 uVar2;
  undefined8 local_res8 [4];
  
  local_res8[0] = param_1;
  FUN_00414610(param_1);
  cVar1 = FUN_016098e0(local_res8[0]);
  if (cVar1 == '\0') {
    cVar1 = FUN_01609210(local_res8[0]);
    if (cVar1 == '\0') {
      cVar1 = FUN_01609390(local_res8[0]);
      if (cVar1 == '\0') {
        cVar1 = FUN_01609620(local_res8[0]);
        if (cVar1 == '\0') {
          cVar1 = FUN_01609290(local_res8[0]);
          if (cVar1 == '\0') {
            cVar1 = FUN_01609510(local_res8[0]);
            if (cVar1 == '\0') {
              uVar2 = 0;
              goto LAB_0160916a;
            }
          }
        }
      }
    }
  }
  uVar2 = 1;
LAB_0160916a:
  FUN_00414480(local_res8);
  return uVar2;
}

