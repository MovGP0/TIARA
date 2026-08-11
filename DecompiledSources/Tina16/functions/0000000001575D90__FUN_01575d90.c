/* Ghidra address: 01575d90 */
/* Ghidra symbol: FUN_01575d90 */


undefined8 FUN_01575d90(undefined8 param_1,undefined8 param_2)

{
  int iVar1;
  longlong lVar2;
  int iVar3;
  int iVar4;
  undefined8 local_40 [2];
  undefined8 local_30;
  
  local_40[0] = 0;
  local_30 = 0;
  FUN_00414480(&local_30);
  iVar1 = FUN_01575d30(param_1);
  iVar3 = 1;
  iVar4 = iVar1;
  if (0 < iVar1) {
    do {
      lVar2 = FUN_01575ce0(param_1,iVar3);
      FUN_01d43440(local_40,*(undefined4 *)(lVar2 + 8));
      FUN_00416cd0(&local_30,4,local_30,local_40[0],&DAT_01575eb4,*(undefined8 *)(lVar2 + 0x10));
      if (iVar3 <= iVar1 + -1) {
        FUN_00416ad0(&local_30,&LAB_01575ec8);
      }
      iVar3 = iVar3 + 1;
      iVar4 = iVar4 + -1;
    } while (iVar4 != 0);
  }
  FUN_00414ad0(param_2,local_30);
  FUN_00414480(local_40);
  FUN_00414480(&local_30);
  return param_2;
}

