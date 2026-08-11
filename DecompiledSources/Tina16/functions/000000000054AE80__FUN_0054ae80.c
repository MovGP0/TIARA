/* Ghidra address: 0054ae80 */
/* Ghidra symbol: FUN_0054ae80 */


undefined8 FUN_0054ae80(longlong param_1,undefined8 param_2)

{
  longlong lVar1;
  int iVar2;
  undefined8 local_30 [2];
  longlong local_20;
  
  local_30[0] = 0;
  local_20 = 0;
  iVar2 = 0;
  for (lVar1 = param_1; lVar1 != 0; lVar1 = FUN_0054a0d0(lVar1)) {
    iVar2 = iVar2 + 1;
  }
  FUN_00419260(&local_20,&DAT_005500d8,1,(longlong)iVar2);
  iVar2 = 0;
  for (; param_1 != 0; param_1 = FUN_0054a0d0(param_1)) {
    FUN_0054adc0(param_1,local_30);
    FUN_004194b0(local_20 + (longlong)iVar2 * 8,local_30[0],&DAT_00531568);
    iVar2 = iVar2 + 1;
  }
  lVar1 = 0;
  if (local_20 != 0) {
    lVar1 = *(longlong *)(local_20 + -8);
  }
  FUN_00568880(param_2,local_20,lVar1 + -1);
  FUN_00419430(local_30,&DAT_00531568);
  FUN_00419430(&local_20,&DAT_005500d8);
  return param_2;
}

