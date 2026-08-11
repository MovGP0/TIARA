/* Ghidra address: 016f0ac0 */
/* Ghidra symbol: FUN_016f0ac0 */


void FUN_016f0ac0(longlong param_1,undefined1 param_2,longlong *param_3,longlong *param_4)

{
  undefined1 uVar1;
  longlong lVar2;
  char cVar3;
  int iVar4;
  undefined8 local_48;
  undefined8 local_40 [2];
  undefined1 local_30 [16];
  
  local_48 = 0;
  local_40[0] = 0;
  uVar1 = *(undefined1 *)(param_1 + 0x331);
  iVar4 = 0;
  while (iVar4 < *(int *)(param_1 + 0x2dc)) {
    iVar4 = iVar4 + 1;
    lVar2 = *(longlong *)(*(longlong *)(param_1 + 0x2b8) + -8 + (longlong)iVar4 * 8);
    cVar3 = FUN_016ef670(lVar2,param_1,param_2,local_30);
    if (cVar3 != '\0') {
      FUN_01b20020(local_40,*(undefined8 *)(lVar2 + 0x128),&LAB_016f0c28);
      (**(code **)(*param_3 + 0x78))(param_3,local_40[0]);
    }
  }
  iVar4 = 0;
  while (iVar4 < *(int *)(param_1 + 0x2e0)) {
    iVar4 = iVar4 + 1;
    lVar2 = *(longlong *)(*(longlong *)(param_1 + 0x2c0) + -8 + (longlong)iVar4 * 8);
    *(undefined1 *)(param_1 + 0x331) = 0;
    FUN_016ef480(lVar2,param_1);
    if (*(char *)(param_1 + 0x331) != '\0') {
      FUN_01b20020(&local_48,*(undefined8 *)(lVar2 + 0x128),&LAB_016f0c28);
      (**(code **)(*param_4 + 0x78))(param_4,local_48);
    }
  }
  *(undefined1 *)(param_1 + 0x331) = uVar1;
  FUN_00414560(&local_48,2);
  return;
}

