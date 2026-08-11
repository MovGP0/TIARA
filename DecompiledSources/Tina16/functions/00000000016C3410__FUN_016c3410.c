/* Ghidra address: 016c3410 */
/* Ghidra symbol: FUN_016c3410 */


void FUN_016c3410(longlong param_1,longlong param_2)

{
  undefined8 uVar1;
  int iVar2;
  int iVar3;
  undefined1 auStack_58 [32];
  undefined8 local_38;
  undefined4 local_2c;
  
  local_38 = *(undefined8 *)(param_1 + 0xa30);
  uVar1 = *(undefined8 *)(param_1 + 0xa40);
  local_2c = 0;
  iVar3 = *(int *)(param_2 + 0x68);
  iVar2 = 0;
  if (-1 < iVar3 + -1) {
    do {
      FUN_016c3220(auStack_58,iVar2);
      iVar2 = iVar2 + 1;
      iVar3 = iVar3 + -1;
    } while (iVar3 != 0);
  }
  *(undefined8 *)(param_1 + 0xa30) = local_38;
  *(undefined8 *)(param_1 + 0xa40) = uVar1;
  return;
}

