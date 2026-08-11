/* Ghidra address: 01619ea0 */
/* Ghidra symbol: FUN_01619ea0 */


void FUN_01619ea0(longlong param_1,undefined8 param_2)

{
  undefined8 uVar1;
  int local_2c;
  
  FUN_004b84c0(param_2,&local_2c,4);
  if (-1 < local_2c + -1) {
    do {
      uVar1 = FUN_01619990(&DAT_01618688,1,0);
      FUN_01619ba0(uVar1,param_2);
      FUN_004ae7e0(*(undefined8 *)(param_1 + 0x10),uVar1);
      local_2c = local_2c + -1;
    } while (local_2c != 0);
  }
  FUN_015f46d0(param_2,*(undefined8 *)(param_1 + 0x18));
  return;
}

