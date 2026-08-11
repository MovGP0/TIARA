/* Ghidra address: 0153bc10 */
/* Ghidra symbol: FUN_0153bc10 */


bool FUN_0153bc10(undefined1 param_1,longlong param_2,undefined8 param_3,undefined8 param_4)

{
  char cVar1;
  undefined *puVar2;
  undefined8 local_res20;
  
  local_res20 = param_4;
  FUN_00414610(param_4);
  puVar2 = PTR_DAT_02004010;
  if (param_2 == 0) {
    param_2 = FUN_019a4600();
  }
  else {
    puVar2 = (undefined *)(param_2 + 0x492);
  }
  cVar1 = FUN_01394040(CONCAT71((int7)((ulonglong)param_2 >> 8),1) & 0xffffffff,param_2,0,0,0,0,0,
                       param_3,local_res20,0,0x1c7,0,0);
  if ((puVar2[0x813] != '\x02') && (puVar2[0x813] != '\x03')) {
    FUN_0153af00(param_1,param_2);
  }
  FUN_00414480(&local_res20);
  return cVar1 == '\0';
}

