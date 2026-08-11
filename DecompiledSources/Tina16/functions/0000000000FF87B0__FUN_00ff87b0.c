/* Ghidra address: 00ff87b0 */
/* Ghidra symbol: FUN_00ff87b0 */


undefined4 FUN_00ff87b0(undefined8 param_1,undefined8 param_2)

{
  int iVar1;
  undefined8 uVar2;
  undefined8 local_res10 [3];
  undefined4 local_1c;
  undefined8 local_18;
  undefined8 local_10;
  
  local_10 = 0;
  local_18 = 0;
  local_res10[0] = param_2;
  FUN_00414610(param_2);
  FUN_0043e130(&local_10,local_res10[0]);
  iVar1 = FUN_00416db0(local_10,L"PORTA");
  if (iVar1 == 0) {
    local_1c = 0;
  }
  else {
    iVar1 = FUN_00416db0(local_10,L"PORTB");
    if (iVar1 == 0) {
      local_1c = 1;
    }
    else {
      iVar1 = FUN_00416db0(local_10,L"PORTC");
      if (iVar1 == 0) {
        local_1c = 2;
      }
      else {
        iVar1 = FUN_00416db0(local_10,L"PORTD");
        if (iVar1 == 0) {
          local_1c = 3;
        }
        else {
          iVar1 = FUN_00416db0(local_10,L"PORTE");
          if (iVar1 == 0) {
            local_1c = 4;
          }
          else {
            iVar1 = FUN_00416db0(local_10,L"PORTF");
            if (iVar1 == 0) {
              local_1c = 5;
            }
            else {
              iVar1 = FUN_00416db0(local_10,L"PORTG");
              if (iVar1 == 0) {
                local_1c = 6;
              }
              else {
                iVar1 = FUN_00416db0(local_10,L"PORTH");
                if (iVar1 == 0) {
                  local_1c = 7;
                }
                else {
                  iVar1 = FUN_00416db0(local_10,L"PORTJ");
                  if (iVar1 == 0) {
                    local_1c = 8;
                  }
                  else {
                    uVar2 = FUN_0044d490(&PTR_FUN_00f655e8,1,L"code generation: Invalid port name!")
                    ;
                    FUN_004134c0(uVar2);
                  }
                }
              }
            }
          }
        }
      }
    }
  }
  FUN_00414560(&local_18,2);
  FUN_00414480(local_res10);
  return local_1c;
}

