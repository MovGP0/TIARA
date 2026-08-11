/* Ghidra address: 00ea8c50 */
/* Ghidra symbol: FUN_00ea8c50 */


undefined8
FUN_00ea8c50(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,int param_5)

{
  char cVar1;
  int iVar2;
  undefined8 local_20 [2];
  
  local_20[0] = 0;
  if (param_5 == -1) {
    FUN_00ea8c00(param_1,param_2,param_3,param_4);
  }
  else {
    FUN_00ea4ee0(*(undefined8 *)(param_1 + 0x20),param_3);
    FUN_00ea4e20(*(undefined8 *)(param_1 + 0x20),param_4);
    iVar2 = 0;
    cVar1 = FUN_00ea4860(*(undefined8 *)(param_1 + 0x20));
    while (cVar1 != '\0') {
      FUN_00ea4b30(*(undefined8 *)(param_1 + 0x20),local_20);
      iVar2 = iVar2 + 1;
      if (iVar2 == param_5) break;
      cVar1 = FUN_00ea4940(*(undefined8 *)(param_1 + 0x20));
    }
    FUN_00ea47c0(*(undefined8 *)(param_1 + 0x20),param_2);
  }
  FUN_00414480(local_20);
  return param_2;
}

