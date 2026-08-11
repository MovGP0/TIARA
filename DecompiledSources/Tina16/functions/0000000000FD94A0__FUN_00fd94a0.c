/* Ghidra address: 00fd94a0 */
/* Ghidra symbol: FUN_00fd94a0 */


undefined4 FUN_00fd94a0(undefined8 param_1,undefined8 param_2)

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
    iVar1 = FUN_00416db0(local_10,&DAT_00fd9600);
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
            uVar2 = FUN_0044d490(&PTR_FUN_00f655e8,1,L"code generation: Invalid port name!");
            FUN_004134c0(uVar2);
          }
        }
      }
    }
  }
  FUN_00414560(&local_18,2);
  FUN_00414480(local_res10);
  return local_1c;
}

