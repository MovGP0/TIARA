/* Ghidra address: 01a3d280 */
/* Ghidra symbol: FUN_01a3d280 */


undefined1 FUN_01a3d280(undefined8 param_1)

{
  char cVar1;
  undefined1 uVar2;
  undefined8 local_res8 [4];
  
  local_res8[0] = param_1;
  FUN_00414610(param_1);
  cVar1 = FUN_01b25050(L"riddle",local_res8[0]);
  if (cVar1 == '\0') {
LAB_01a3d33a:
    uVar2 = 0;
  }
  else {
    cVar1 = FUN_01b25050(L"create",local_res8[0]);
    if (cVar1 == '\0') {
      cVar1 = FUN_01b25050(L"start",local_res8[0]);
      if (cVar1 == '\0') {
        cVar1 = FUN_01b25050(&DAT_01a3d3d4,local_res8[0]);
        if (cVar1 == '\0') {
          cVar1 = FUN_01b25050(L"show",local_res8[0]);
          if (cVar1 == '\0') {
            cVar1 = FUN_01b25050(L"open",local_res8[0]);
            if (cVar1 == '\0') {
              cVar1 = FUN_01b25050(L"load",local_res8[0]);
              if (cVar1 == '\0') {
                cVar1 = FUN_01b25050(L"generate",local_res8[0]);
                if (cVar1 == '\0') goto LAB_01a3d33a;
              }
            }
          }
        }
      }
    }
    uVar2 = 1;
  }
  FUN_00414480(local_res8);
  return uVar2;
}

