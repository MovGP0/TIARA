/* Ghidra address: 019f1400 */
/* Ghidra symbol: FUN_019f1400 */


undefined8 FUN_019f1400(longlong param_1,undefined8 param_2)

{
  int iVar1;
  double dVar2;
  undefined8 local_10;
  
  local_10 = 0;
  FUN_00414480(param_2);
  dVar2 = (double)FUN_019ed670(*(undefined8 *)(param_1 + 0x2f0),*(byte *)(param_1 + 0x2ae) + 3,0,
                               param_1 + 0x2af,&local_10);
  if ((*(char *)(param_1 + 0x2af) != '\0') || (dVar2 != 0.0)) {
    iVar1 = FUN_019edff0(*(undefined8 *)(param_1 + 0x2f0),*(byte *)(param_1 + 0x2ae) + 2,0);
    if (iVar1 == 0) {
      FUN_00416ba0(param_2,L"T_REL_GLOBAL=",local_10);
    }
    else {
      FUN_00416ba0(param_2,L"T_ABS=",local_10);
    }
  }
  FUN_00414480(&local_10);
  return param_2;
}

