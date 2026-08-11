/* Ghidra address: 00d21a60 */
/* Ghidra symbol: FUN_00d21a60 */


undefined8 FUN_00d21a60(longlong param_1)

{
  char cVar1;
  undefined8 uVar2;
  
  cVar1 = FUN_00cd71e0(*(undefined8 *)(param_1 + 0x30),&PTR_FUN_00d08508);
  if (cVar1 == '\0') {
    if (*(longlong *)(param_1 + 0x38) == 0) {
      uVar2 = FUN_00d0cca0();
      *(undefined8 *)(param_1 + 0x38) = uVar2;
    }
    uVar2 = FUN_00cd6090(*(undefined8 *)(param_1 + 0x38),1,0);
    *(undefined8 *)(param_1 + 0x30) = uVar2;
    FUN_00cd5830(uVar2);
  }
  return *(undefined8 *)(param_1 + 0x30);
}

