/* Ghidra address: 0107c0e0 */
/* Ghidra symbol: FUN_0107c0e0 */


void FUN_0107c0e0(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 param_5,undefined4 param_6,undefined8 param_7,undefined8 param_8)

{
  char cVar1;
  undefined8 uVar2;
  undefined8 local_10;
  
  local_10 = 0;
  cVar1 = FUN_010b3ad0(*(undefined8 *)(param_1 + 0xac8),param_6);
  if (cVar1 == '\0') {
    uVar2 = FUN_00442620(param_1 + 0x140a,*(undefined8 *)(param_1 + 0xb40));
    _NewElfReaderSession(param_2,param_3,uVar2,param_5,param_6,param_7,param_8);
  }
  else {
    FUN_004167d0(&local_10,param_2);
    uVar2 = FUN_00442620(param_1 + 0xc08,local_10);
    _NewCoffReaderSession(uVar2,param_5,param_6,param_7);
  }
  FUN_00414480(&local_10);
  return;
}

