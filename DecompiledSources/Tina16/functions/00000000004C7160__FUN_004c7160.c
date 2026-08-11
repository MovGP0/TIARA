/* Ghidra address: 004c7160 */
/* Ghidra symbol: FUN_004c7160 */


undefined8 FUN_004c7160(longlong param_1,undefined8 param_2,longlong param_3)

{
  longlong lVar1;
  char cVar2;
  undefined8 local_10;
  
  local_10 = 0;
  lVar1 = *(longlong *)(*(longlong *)(param_1 + 0x60) + 0x38);
  if (*(longlong *)(param_3 + 8) == lVar1) {
    FUN_00414ad0(param_2,*(undefined8 *)(param_3 + 0x10));
  }
  else if (param_3 == lVar1) {
    FUN_00414ad0(param_2,L"Owner");
  }
  else {
    lVar1 = *(longlong *)(param_3 + 8);
    if (((lVar1 == 0) || (*(longlong *)(lVar1 + 0x10) == 0)) || (*(longlong *)(param_3 + 0x10) == 0)
       ) {
      if (*(longlong *)(param_3 + 0x10) == 0) {
        FUN_00414480(param_2);
      }
      else {
        FUN_00416ba0(param_2,*(undefined8 *)(param_3 + 0x10),L".Owner");
      }
    }
    else {
      cVar2 = FUN_004c7140(param_1,lVar1,*(undefined8 *)(*(longlong *)(param_1 + 0x60) + 0x38));
      if (cVar2 == '\0') {
        FUN_00416cd0(param_2,3,*(undefined8 *)(*(longlong *)(param_3 + 8) + 0x10),&DAT_004c730c,
                     *(undefined8 *)(param_3 + 0x10));
      }
      else {
        FUN_004c7160(param_1,&local_10,*(undefined8 *)(param_3 + 8));
        FUN_00416cd0(param_2,3,local_10,&DAT_004c730c,*(undefined8 *)(param_3 + 0x10));
      }
    }
  }
  FUN_00414480(&local_10);
  return param_2;
}

