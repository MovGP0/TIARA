/* Ghidra address: 016495f0 */
/* Ghidra symbol: FUN_016495f0 */


void FUN_016495f0(longlong param_1,undefined8 param_2,int param_3)

{
  int iVar1;
  longlong lVar2;
  undefined8 local_20 [2];
  
  local_20[0] = 0;
  if (param_3 != -1) {
    lVar2 = FUN_01619d70(*(undefined8 *)(param_1 + 0x13a08),param_3);
    iVar1 = FUN_01649060(*(undefined8 *)(param_1 + 0x13980),param_1);
    if (0 < iVar1) {
      FUN_01619a80(lVar2,iVar1,0);
    }
    FUN_01649090(*(undefined8 *)(param_1 + 0x13980),local_20,param_2,*(undefined8 *)(lVar2 + 0x18),
                 param_1);
  }
  FUN_00414480(local_20);
  return;
}

