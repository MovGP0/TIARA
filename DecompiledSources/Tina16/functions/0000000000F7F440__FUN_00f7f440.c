/* Ghidra address: 00f7f440 */
/* Ghidra symbol: FUN_00f7f440 */


undefined8 FUN_00f7f440(longlong param_1,undefined8 param_2)

{
  char cVar1;
  ulonglong local_20 [2];
  undefined8 local_10;
  
  local_20[0] = 0;
  local_10 = 0;
  FUN_00416780(&local_10,*(undefined2 *)(param_1 + 0x38));
  FUN_00f7f400(param_1);
  do {
    cVar1 = FUN_01b215c0(*(undefined2 *)(param_1 + 0x38),1);
    if (cVar1 == '\0') {
      cVar1 = FUN_01b215f0(*(undefined2 *)(param_1 + 0x38));
      if (cVar1 == '\0') {
        FUN_00414ad0(param_2,local_10);
        FUN_00414480(local_20);
        FUN_00414480(&local_10);
        return param_2;
      }
    }
    FUN_00416780(local_20,*(undefined2 *)(param_1 + 0x38));
    FUN_00416ad0(&local_10,local_20[0]);
    FUN_00f7f400(param_1);
  } while( true );
}

