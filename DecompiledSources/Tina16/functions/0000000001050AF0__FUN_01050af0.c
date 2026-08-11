/* Ghidra address: 01050af0 */
/* Ghidra symbol: FUN_01050af0 */


undefined4 FUN_01050af0(longlong param_1,char param_2)

{
  undefined4 uVar1;
  int iVar2;
  undefined8 uVar3;
  
  FUN_01b202f0(*(undefined8 *)(param_1 + 0x988));
  (**(code **)(**(longlong **)(param_1 + 0x990) + 0x90))(*(longlong **)(param_1 + 0x990));
  if (*(longlong *)(param_1 + 0x998) == 0) {
    uVar3 = FUN_007fc180(&PTR_FUN_00f759b0,1,param_1);
    *(undefined8 *)(param_1 + 0x998) = uVar3;
    FUN_00f76320(uVar3,*(undefined8 *)(param_1 + 0x980));
    FUN_00f76350(*(undefined8 *)(param_1 + 0x998),param_1);
  }
  FUN_00f760b0(*(undefined8 *)(param_1 + 0x998));
  uVar1 = FUN_00f77d30(*(undefined8 *)(param_1 + 0x978));
  if ((((char)uVar1 == '\0') || (PTR_DAT_02002068[3] != '\0')) || (param_2 != '\0')) {
    iVar2 = FUN_007fd7d0(param_1);
    FUN_00806af0(*(undefined8 *)(param_1 + 0x998),
                 ((iVar2 + *(int *)(param_1 + 0x98)) -
                 *(int *)(*(longlong *)(param_1 + 0x998) + 0x98)) + -0x14);
    iVar2 = FUN_007fd800(param_1);
    FUN_00806b40(*(undefined8 *)(param_1 + 0x998),
                 ((iVar2 + *(int *)(param_1 + 0x9c)) -
                 *(int *)(*(longlong *)(param_1 + 0x998) + 0x9c)) + -0x14);
    FUN_008059a0(*(undefined8 *)(param_1 + 0x998));
    FUN_0064e1d0(*(undefined8 *)(param_1 + 0x998));
    FUN_00f760a0(*(undefined8 *)(param_1 + 0x998),*(undefined8 *)(param_1 + 0x988));
    FUN_00f760d0(*(undefined8 *)(param_1 + 0x998));
  }
  return uVar1;
}

