/* Ghidra address: 01b80b10 */
/* Ghidra symbol: FUN_01b80b10 */


undefined8 FUN_01b80b10(longlong param_1,int param_2,int param_3)

{
  int iVar1;
  undefined8 local_30;
  
  local_30 = FUN_01b80af0(param_2,param_3);
  iVar1 = FUN_00416db0(*(undefined8 *)(param_1 + 0x18),&DAT_01b80c54);
  if (iVar1 == 0) {
    local_30 = FUN_01b80af0(param_2,param_3);
  }
  else {
    iVar1 = FUN_00416db0(*(undefined8 *)(param_1 + 0x18),&DAT_01b80c68);
    if (iVar1 == 0) {
      local_30 = FUN_01b80af0(-param_3,param_2);
    }
    else {
      iVar1 = FUN_00416db0(*(undefined8 *)(param_1 + 0x18),L"R180");
      if (iVar1 == 0) {
        local_30 = FUN_01b80af0(-param_2,-param_3);
      }
      else {
        iVar1 = FUN_00416db0(*(undefined8 *)(param_1 + 0x18),L"R270");
        if (iVar1 == 0) {
          local_30 = FUN_01b80af0(param_3,-param_2);
        }
        else {
          iVar1 = FUN_00416db0(*(undefined8 *)(param_1 + 0x18),&DAT_01b80cac);
          if (iVar1 == 0) {
            local_30 = FUN_01b80af0(-param_2,param_3);
          }
          else {
            iVar1 = FUN_00416db0(*(undefined8 *)(param_1 + 0x18),L"M180");
            if (iVar1 == 0) {
              local_30 = FUN_01b80af0(param_2,-param_3);
            }
            else {
              iVar1 = FUN_00416db0(*(undefined8 *)(param_1 + 0x18),L"M270");
              if (iVar1 == 0) {
                local_30 = FUN_01b80af0(param_2,-param_3);
              }
            }
          }
        }
      }
    }
  }
  return local_30;
}

