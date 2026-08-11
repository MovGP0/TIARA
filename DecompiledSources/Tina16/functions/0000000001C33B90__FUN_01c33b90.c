/* Ghidra address: 01c33b90 */
/* Ghidra symbol: FUN_01c33b90 */


char FUN_01c33b90(undefined8 param_1,undefined8 param_2,undefined1 param_3,longlong param_4)

{
  char cVar1;
  int iVar2;
  undefined8 local_res8;
  undefined8 local_res10;
  undefined1 local_res18;
  longlong local_res20;
  undefined1 auStack_78 [32];
  undefined8 local_58;
  undefined8 local_50;
  undefined8 local_48;
  undefined1 *local_40;
  int local_24;
  longlong local_20;
  longlong local_18;
  bool local_9;
  
  local_40 = auStack_78;
  local_58 = 0;
  local_50 = 0;
  local_48 = 0;
  local_18 = 0;
  local_20 = 0;
  local_res8 = param_1;
  local_res10 = param_2;
  local_res18 = param_3;
  local_res20 = param_4;
  FUN_00414610(param_1);
  FUN_00414610(local_res10);
  FUN_0043ea00(&local_48,local_res8);
  FUN_0043e1a0(&local_18,local_48);
  if ((local_18 != 0) && (iVar2 = FUN_00416db0(local_18,L"<search>"), iVar2 != 0)) {
    FUN_0043e1a0(&local_50,*(undefined8 *)(local_res20 + 0x10));
    iVar2 = FUN_004170c0(local_18,local_50,1);
    if (iVar2 < 1) {
      local_9 = false;
      goto LAB_01c33c62;
    }
  }
  local_9 = true;
LAB_01c33c62:
  if (local_9 != false) {
    FUN_0043ea00(&local_58,local_res10);
    FUN_0043e1a0(&local_20,local_58);
    iVar2 = FUN_00416db0(local_20,&DAT_01c33e9c);
    if ((iVar2 == 0) || (local_20 == 0)) {
      local_9 = true;
    }
    else {
      local_24 = FUN_01c337e0(local_res20);
      iVar2 = FUN_00416db0(local_20,&DAT_01c33eb0);
      if (iVar2 == 0) {
        if ((local_24 < 1) || (5 < local_24)) {
          local_9 = false;
        }
        else {
          local_9 = true;
        }
      }
      else {
        iVar2 = FUN_00416db0(local_20,L"6-10");
        if (iVar2 == 0) {
          if ((local_24 < 6) || (10 < local_24)) {
            local_9 = false;
          }
          else {
            local_9 = true;
          }
        }
        else {
          iVar2 = FUN_00416db0(local_20,L"11-15");
          if (iVar2 == 0) {
            if ((local_24 < 0xb) || (0xf < local_24)) {
              local_9 = false;
            }
            else {
              local_9 = true;
            }
          }
          else {
            iVar2 = FUN_00416db0(local_20,L"16-20");
            if (iVar2 == 0) {
              if ((local_24 < 0x10) || (0x14 < local_24)) {
                local_9 = false;
              }
              else {
                local_9 = true;
              }
            }
            else {
              iVar2 = FUN_00416db0(local_20,&LAB_01c33f0c);
              if (iVar2 == 0) {
                local_9 = 0x14 < local_24;
              }
              else {
                cVar1 = FUN_01c33730(local_20);
                if (cVar1 == '\0') {
                  local_9 = false;
                }
                else {
                  iVar2 = FUN_0043fc00(local_20);
                  local_9 = iVar2 == local_24;
                }
              }
            }
          }
        }
      }
    }
    if (local_9 != false) {
      local_9 = (bool)FUN_01c339e0(local_res18,local_res20);
    }
  }
  FUN_00414560(&local_58,3);
  FUN_00414560(&local_20,2);
  FUN_00414560(&local_res8,2);
  return local_9;
}

