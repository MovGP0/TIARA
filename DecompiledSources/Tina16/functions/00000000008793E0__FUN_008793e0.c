/* Ghidra address: 008793e0 */
/* Ghidra symbol: FUN_008793e0 */


undefined8
FUN_008793e0(undefined8 param_1,undefined8 param_2,undefined4 param_3,byte param_4,
            undefined8 param_5)

{
  char cVar1;
  undefined8 uVar2;
  undefined8 local_38;
  wchar_t *local_30;
  undefined1 local_28;
  undefined8 *local_20;
  undefined1 local_18;
  undefined8 local_10;
  
  local_10 = 0;
  FUN_0041b910(param_5);
  cVar1 = FUN_008795a0(param_2,param_1,param_3,param_5);
  if ((param_4 & cVar1 == '\0') != 0) {
    FUN_0041ddd0(&local_10,PTR_PTR_02002ba0);
    local_30 = L"ReadLnFromStream";
    local_28 = 0x11;
    local_38 = FUN_004b6da0(param_2);
    local_20 = &local_38;
    local_18 = 0x10;
    uVar2 = FUN_0044d530(&PTR_FUN_0086ee28,1,local_10,&local_30,1);
    FUN_004134c0(uVar2);
  }
  FUN_00414480(&local_10);
  FUN_0041b800(&param_5);
  return param_1;
}

