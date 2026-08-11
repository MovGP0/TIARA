/* Ghidra address: 00832310 */
/* Ghidra symbol: FUN_00832310 */


undefined8 FUN_00832310(undefined8 param_1,longlong param_2,int param_3)

{
  undefined8 uVar1;
  int iVar2;
  bool bVar3;
  undefined8 local_20;
  
  local_20 = 0;
  FUN_00414480(param_1);
  iVar2 = 1;
  if (0 < param_3) {
    do {
      uVar1 = FUN_008317e0(param_2,iVar2);
      if ((byte)uVar1 < 8) {
        bVar3 = ((int)CONCAT71((int7)((ulonglong)uVar1 >> 8),1) << ((byte)uVar1 & 0x1f) & 200U) != 0
        ;
      }
      else {
        bVar3 = false;
      }
      if (!bVar3) {
        FUN_00416780(&local_20,*(undefined2 *)(param_2 + (longlong)(iVar2 + -1) * 2));
        FUN_00416ad0(param_1,local_20);
      }
      iVar2 = iVar2 + 1;
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  FUN_00414480(&local_20);
  return param_1;
}

