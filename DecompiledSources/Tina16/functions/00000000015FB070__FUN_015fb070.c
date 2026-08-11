/* Ghidra address: 015fb070 */
/* Ghidra symbol: FUN_015fb070 */


undefined4 FUN_015fb070(longlong param_1,int param_2)

{
  char cVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  undefined8 local_38;
  undefined8 local_30 [2];
  undefined8 local_20 [2];
  
  local_38 = 0;
  local_30[0] = 0;
  local_20[0] = 0;
  FUN_00414480();
  if (-1 < param_2 + -1) {
    do {
      uVar2 = FUN_015faf50(param_1);
      FUN_00416780(local_30,uVar2);
      FUN_00416ad0(local_20,local_30[0]);
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  cVar1 = FUN_015fae60(local_20[0]);
  if (cVar1 == '\0') {
    FUN_00416ba0(&local_38,L"Syntax error in the S19 file (invalid hex number): ",
                 *(undefined8 *)(param_1 + 0xe0));
    uVar3 = FUN_0044d490(&PTR_FUN_004334c0,1,local_38);
    FUN_004134c0(uVar3);
  }
  uVar2 = FUN_01aa1170(local_20[0]);
  FUN_00414560(&local_38,2);
  FUN_00414480(local_20);
  return uVar2;
}

