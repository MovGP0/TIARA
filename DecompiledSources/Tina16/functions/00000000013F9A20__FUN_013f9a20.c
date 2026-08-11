/* Ghidra address: 013f9a20 */
/* Ghidra symbol: FUN_013f9a20 */


void FUN_013f9a20(longlong param_1)

{
  int iVar1;
  int iVar2;
  undefined8 local_428;
  undefined8 local_420;
  undefined1 local_418 [768];
  undefined1 local_118 [256];
  
  local_428 = 0;
  local_420 = 0;
  (**(code **)(**(longlong **)(param_1 + 0x720) + 0x90))(*(longlong **)(param_1 + 0x720));
  FUN_01d03160(*(undefined8 *)(param_1 + 0x6e0));
  FUN_01d3da40(local_418,*(undefined8 *)(param_1 + 0x6e0));
  iVar1 = FUN_01d3e250(local_418,1);
  iVar2 = 1;
  if (0 < iVar1) {
    do {
      FUN_01d3e000(local_118,local_418,iVar2,1,0);
      FUN_004169a0(&local_420,local_118);
      (**(code **)(**(longlong **)(param_1 + 0x720) + 0x78))
                (*(longlong **)(param_1 + 0x720),local_420);
      iVar2 = iVar2 + 1;
      iVar1 = iVar1 + -1;
    } while (iVar1 != 0);
  }
  iVar1 = FUN_01d3e250(local_418,2);
  iVar2 = 1;
  if (0 < iVar1) {
    do {
      FUN_01d3e000(local_118,local_418,iVar2,2,0);
      FUN_004169a0(&local_428,local_118);
      (**(code **)(**(longlong **)(param_1 + 0x720) + 0x78))
                (*(longlong **)(param_1 + 0x720),local_428);
      iVar2 = iVar2 + 1;
      iVar1 = iVar1 + -1;
    } while (iVar1 != 0);
  }
  FUN_00414560(&local_428,2);
  return;
}

