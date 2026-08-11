/* Ghidra address: 00a08dc0 */
/* Ghidra symbol: FUN_00a08dc0 */


void FUN_00a08dc0(longlong param_1,char param_2)

{
  undefined8 uVar1;
  
  if ((*(char *)(param_1 + 0x98) != param_2) &&
     (*(char *)(param_1 + 0x98) = param_2, *(longlong *)(param_1 + 0x70) == 0)) {
    uVar1 = FUN_00608c80(&PTR_FUN_005f92e8,1);
    *(undefined8 *)(param_1 + 0x70) = uVar1;
  }
  return;
}

