/* Ghidra address: 01063db0 */
/* Ghidra symbol: FUN_01063db0 */


void FUN_01063db0(longlong param_1,undefined4 param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 param_5)

{
  int iVar1;
  undefined8 uVar2;
  undefined8 local_10;
  
  local_10 = 0;
  FUN_00414610(param_5);
  *(undefined4 *)(param_1 + 8) = param_2;
  *(undefined8 *)(param_1 + 0x10) = param_3;
  *(undefined8 *)(param_1 + 0x18) = param_4;
  FUN_00414ad0(param_1 + 0x20,param_5);
  FUN_015fca00(&local_10,0,0);
  FUN_00416cd0(param_1 + 0x28,3,local_10,&DAT_01063f04,L"ArduinoCache");
  iVar1 = FUN_00416db0(*(undefined8 *)(param_1 + 0x28),L"<none>");
  if (iVar1 == 0) {
    (**(code **)(**(longlong **)(param_1 + 0x50) + 0x78))
              (*(longlong **)(param_1 + 0x50),L"Invalid cache path");
    uVar2 = FUN_0044d490(&PTR_FUN_015ef458,1,L"Invalid cache path");
    FUN_004134c0(uVar2);
  }
  FUN_00440c30(*(undefined8 *)(param_1 + 0x28));
  FUN_00414480(&local_10);
  FUN_00414480(&param_5);
  return;
}

