/* Ghidra address: 00ea9650 */
/* Ghidra symbol: FUN_00ea9650 */


undefined1 FUN_00ea9650(void)

{
  int iVar1;
  undefined1 local_39;
  undefined8 local_38;
  undefined8 local_30;
  undefined8 local_28;
  undefined8 local_20;
  undefined8 local_18;
  undefined8 local_10;
  
  local_38 = 0;
  local_30 = 0;
  local_28 = 0;
  local_20 = 0;
  local_18 = 0;
  local_10 = 0;
  FUN_0043e130(&local_10,DAT_0202ea50);
  iVar1 = FUN_00416db0(local_10,L"\\ORCAD.PCB");
  if (iVar1 == 0) {
    local_39 = 1;
  }
  else {
    FUN_0043e130(&local_18,DAT_0202ea50);
    iVar1 = FUN_00416db0(local_18,L"\\PCAD.PCB");
    if (iVar1 == 0) {
      local_39 = 4;
    }
    else {
      FUN_0043e130(&local_20,DAT_0202ea50);
      iVar1 = FUN_00416db0(local_20,L"\\PROTEL.PCB");
      if (iVar1 == 0) {
        local_39 = 5;
      }
      else {
        FUN_0043e130(&local_28,DAT_0202ea50);
        iVar1 = FUN_00416db0(local_28,L"\\REDAC.PCB");
        if (iVar1 == 0) {
          local_39 = 3;
        }
        else {
          FUN_0043e130(&local_30,DAT_0202ea50);
          iVar1 = FUN_00416db0(local_30,L"\\TANGO.PCB");
          if (iVar1 == 0) {
            local_39 = 2;
          }
          else {
            FUN_0043e130(&local_38,DAT_0202ea50);
            iVar1 = FUN_00416db0(local_38,L"\\EDS.PCB");
            if (iVar1 == 0) {
              local_39 = 6;
            }
            else {
              local_39 = 7;
            }
          }
        }
      }
    }
  }
  FUN_00414560(&local_38,6);
  return local_39;
}

