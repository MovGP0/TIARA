/* Ghidra address: 0163fc90 */
/* Ghidra symbol: FUN_0163fc90 */


void FUN_0163fc90(longlong param_1,undefined8 param_2)

{
  int iVar1;
  undefined8 uVar2;
  int local_2c [3];
  
  iVar1 = FUN_004b6da0(param_2);
  FUN_004b84c0(param_2,local_2c,4);
  if (local_2c[0] != iVar1) {
    uVar2 = FUN_0044d490(&PTR_FUN_015ef580,1,*(undefined8 *)(param_1 + 0x10c8));
    FUN_004134c0(uVar2);
  }
  FUN_004b6da0(param_2);
  return;
}

