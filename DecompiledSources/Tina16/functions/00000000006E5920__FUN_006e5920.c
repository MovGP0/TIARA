/* Ghidra address: 006e5920 */
/* Ghidra symbol: FUN_006e5920 */


void FUN_006e5920(longlong param_1,longlong param_2,char param_3)

{
  int iVar1;
  undefined8 uVar2;
  undefined8 local_10;
  
  local_10 = 0;
  if (*(char *)(param_1 + 0x560) == '\0') {
    FUN_0041ddd0(&local_10,PTR_PTR_02004a48);
    uVar2 = FUN_0044d490(&PTR_FUN_006b7be0,1,local_10);
    FUN_004134c0(uVar2);
  }
  if ((param_2 != 0) && (*(char *)(param_2 + 0x38) == '\0')) {
    iVar1 = FUN_004aeba0(*(undefined8 *)(param_1 + 0x568),param_2);
    if (iVar1 == -1) {
      FUN_006e54c0(param_1,param_2,1);
    }
    if (param_3 != '\0') {
      FUN_006e5a00(param_1);
    }
  }
  FUN_00414480(&local_10);
  return;
}

