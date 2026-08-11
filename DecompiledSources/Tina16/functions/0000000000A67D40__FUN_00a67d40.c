/* Ghidra address: 00a67d40 */
/* Ghidra symbol: FUN_00a67d40 */


void FUN_00a67d40(longlong param_1)

{
  char cVar1;
  int iVar2;
  undefined8 uVar3;
  undefined1 auStack_48 [40];
  undefined8 local_20 [2];
  undefined8 local_10;
  
  local_20[0] = 0;
  local_10 = 0;
  FUN_00a62d70(*(undefined8 *)(param_1 + 0x80),0);
  uVar3 = FUN_00414480(&local_10);
  cVar1 = FUN_00a62fc0(*(undefined8 *)(param_1 + 0x80),uVar3);
  if (cVar1 != '\0') {
    FUN_0043e1a0(local_20,local_10);
    FUN_00414b50(&local_10,local_20[0]);
    iVar2 = FUN_00416db0(local_10,L"media");
    if (iVar2 == 0) {
      FUN_00a677c0(auStack_48);
    }
    else {
      iVar2 = FUN_00416db0(local_10,L"import");
      if (iVar2 == 0) {
        FUN_00a67a20(auStack_48);
      }
    }
  }
  FUN_00414480(local_20);
  FUN_00414480(&local_10);
  return;
}

