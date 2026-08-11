/* Ghidra address: 0177d6b0 */
/* Ghidra symbol: FUN_0177d6b0 */


void FUN_0177d6b0(longlong param_1,char param_2)

{
  undefined8 uVar1;
  
  *(char *)(param_1 + 0x410) = param_2;
  if (param_2 != '\0') {
    uVar1 = FUN_007fc180(&PTR_FUN_0177b520,1,*(undefined8 *)(param_1 + 8));
    *(undefined8 *)(param_1 + 0x420) = uVar1;
    FUN_00c65a00(*(undefined8 *)(param_1 + 0x210),uVar1);
    *(longlong *)(param_1 + 0x128) = param_1;
    *(code **)(param_1 + 0x120) = FUN_0177d710;
  }
  return;
}

