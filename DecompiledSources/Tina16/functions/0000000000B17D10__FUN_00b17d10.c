/* Ghidra address: 00b17d10 */
/* Ghidra symbol: FUN_00b17d10 */


undefined8 FUN_00b17d10(longlong param_1,undefined8 param_2)

{
  int iVar1;
  longlong lVar2;
  int iVar3;
  int iVar4;
  undefined8 local_40;
  undefined8 local_38;
  undefined8 local_30 [2];
  undefined8 local_20;
  
  local_30[0] = 0;
  local_38 = 0;
  local_20 = 0;
  local_40 = 0;
  iVar4 = *(int *)(*(longlong *)(param_1 + 0x18) + 0x10);
  iVar3 = 0;
  if (-1 < iVar4 + -1) {
    do {
      lVar2 = FUN_004aeac0(*(undefined8 *)(param_1 + 0x18),iVar3);
      FUN_00414c70(&local_20,*(undefined8 *)(lVar2 + 8));
      FUN_00b15a50(local_30,local_20);
      FUN_00b15a50(&local_38,param_2);
      iVar1 = FUN_00415a60(local_30[0],local_38);
      if (iVar1 == 0) {
        local_40 = FUN_004aeac0(*(undefined8 *)(param_1 + 0x18),iVar3);
        break;
      }
      iVar3 = iVar3 + 1;
      iVar4 = iVar4 + -1;
    } while (iVar4 != 0);
  }
  FUN_00414590(&local_38,2);
  FUN_004144d0(&local_20);
  return local_40;
}

