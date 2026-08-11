/* Ghidra address: 01d404e0 */
/* Ghidra symbol: FUN_01d404e0 */


undefined1 FUN_01d404e0(longlong param_1,undefined4 *param_2)

{
  int iVar1;
  int iVar2;
  undefined **ppuVar3;
  longlong local_res8 [4];
  undefined1 local_21;
  undefined8 local_20;
  
  local_20 = 0;
  local_res8[0] = param_1;
  FUN_00414610(param_1);
  FUN_0043e130(&local_20,local_res8[0]);
  FUN_00414b50(local_res8,local_20);
  iVar1 = FUN_00416db0(local_res8[0],L"EEPROM_24XX");
  if (iVar1 == 0) {
    local_21 = 1;
    *param_2 = 0x1000;
  }
  else {
    local_21 = 0;
    *param_2 = 0;
    iVar2 = FUN_004170c0(L"EEPROM_",local_res8[0],1);
    iVar1 = 0;
    if (local_res8[0] != 0) {
      iVar1 = *(int *)(local_res8[0] + -4);
    }
    if (iVar2 == 1) {
      FUN_00416dc0(local_res8,local_res8[0],8,iVar1 + -7);
    }
    iVar1 = 0xe;
    ppuVar3 = &PTR_u_24AA256_01ffcc58;
    do {
      iVar2 = FUN_00416db0(*ppuVar3,local_res8[0]);
      if (iVar2 == 0) {
        *param_2 = *(undefined4 *)(ppuVar3 + 1);
        local_21 = 1;
        break;
      }
      ppuVar3 = ppuVar3 + 3;
      iVar1 = iVar1 + -1;
    } while (iVar1 != 0);
  }
  FUN_00414480(&local_20);
  FUN_00414480(local_res8);
  return local_21;
}

