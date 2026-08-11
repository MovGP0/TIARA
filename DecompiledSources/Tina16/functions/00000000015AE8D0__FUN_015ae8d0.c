/* Ghidra address: 015ae8d0 */
/* Ghidra symbol: FUN_015ae8d0 */


undefined8 FUN_015ae8d0(longlong param_1)

{
  char cVar1;
  undefined8 uVar2;
  
  cVar1 = FUN_015ab240(*(undefined8 *)(param_1 + 0x30),&PTR_FUN_015ac260);
  if (cVar1 == '\0') {
    if (*(longlong *)(param_1 + 0x38) == 0) {
      uVar2 = FUN_015b3b70();
      *(undefined8 *)(param_1 + 0x38) = uVar2;
    }
    uVar2 = FUN_015a9d60(*(undefined8 *)(param_1 + 0x38),1,0);
    *(undefined8 *)(param_1 + 0x30) = uVar2;
    FUN_015a94e0(*(undefined8 *)(param_1 + 0x30));
  }
  return *(undefined8 *)(param_1 + 0x30);
}

