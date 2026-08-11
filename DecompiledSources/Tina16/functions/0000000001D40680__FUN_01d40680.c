/* Ghidra address: 01d40680 */
/* Ghidra symbol: FUN_01d40680 */


undefined1
FUN_01d40680(undefined8 param_1,undefined4 *param_2,undefined4 *param_3,undefined4 *param_4,
            undefined4 *param_5)

{
  int iVar1;
  undefined **ppuVar2;
  int iVar3;
  undefined8 local_res8 [4];
  undefined1 local_21;
  undefined8 local_20;
  
  local_20 = 0;
  local_res8[0] = param_1;
  FUN_00414610(param_1);
  FUN_0043e130(&local_20,local_res8[0]);
  FUN_00414b50(local_res8,local_20);
  *param_2 = 0x100;
  *param_4 = 8;
  *param_3 = 8;
  local_21 = 0;
  *param_5 = 0;
  iVar3 = 3;
  ppuVar2 = &PTR_u_ROM_256X8_01ffcda8;
  do {
    iVar1 = FUN_00416db0(*ppuVar2,local_res8[0]);
    if (iVar1 == 0) {
      *param_2 = *(undefined4 *)(ppuVar2 + 1);
      *param_4 = *(undefined4 *)(ppuVar2 + 2);
      *param_3 = *(undefined4 *)((longlong)ppuVar2 + 0xc);
      *param_5 = 0;
      local_21 = 1;
      goto LAB_01d407da;
    }
    ppuVar2 = ppuVar2 + 3;
    iVar3 = iVar3 + -1;
  } while (iVar3 != 0);
  iVar3 = 0xe;
  ppuVar2 = &PTR_u_24AA256_01ffcc58;
  do {
    iVar1 = FUN_00416db0(*ppuVar2,local_res8[0]);
    if (iVar1 == 0) {
      *param_2 = *(undefined4 *)(ppuVar2 + 1);
      *param_4 = *(undefined4 *)(ppuVar2 + 2);
      *param_3 = *(undefined4 *)((longlong)ppuVar2 + 0xc);
      *param_5 = 1;
      local_21 = 1;
      goto LAB_01d407da;
    }
    ppuVar2 = ppuVar2 + 3;
    iVar3 = iVar3 + -1;
  } while (iVar3 != 0);
  iVar3 = FUN_00416db0(local_res8[0],L"EEPROM_24XX");
  if (iVar3 == 0) {
    *param_5 = 1;
    local_21 = 1;
    *param_2 = 0x1000;
  }
LAB_01d407da:
  FUN_00414480(&local_20);
  FUN_00414480(local_res8);
  return local_21;
}

