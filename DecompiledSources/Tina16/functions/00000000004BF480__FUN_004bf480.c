/* Ghidra address: 004bf480 */
/* Ghidra symbol: FUN_004bf480 */


undefined2 FUN_004bf480(undefined8 param_1)

{
  undefined2 uVar1;
  int iVar2;
  undefined2 *local_10;
  
  local_10 = (undefined2 *)0x0;
  FUN_004c1ed0(param_1,&local_10);
  iVar2 = 0;
  if (local_10 != (undefined2 *)0x0) {
    iVar2 = *(int *)(local_10 + -2);
  }
  if (1 < iVar2) {
    FUN_004bdee0();
  }
  uVar1 = *local_10;
  FUN_00414480(&local_10);
  return uVar1;
}

