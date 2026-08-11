/* Ghidra address: 010afa90 */
/* Ghidra symbol: FUN_010afa90 */


bool FUN_010afa90(longlong param_1)

{
  int iVar1;
  undefined8 local_20 [2];
  undefined8 local_10;
  
  local_20[0] = 0;
  local_10 = 0;
  FUN_00441a10(local_20,*(undefined8 *)(param_1 + 0x30));
  FUN_0043e130(&local_10,local_20[0]);
  iVar1 = FUN_00416db0(local_10,L".ASM");
  FUN_00414480(local_20);
  FUN_00414480(&local_10);
  return iVar1 == 0;
}

