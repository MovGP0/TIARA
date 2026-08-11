/* Ghidra address: 0117a320 */
/* Ghidra symbol: FUN_0117a320 */


void FUN_0117a320(longlong param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + 0x898);
  uVar1 = FUN_00b90090(uVar2);
  FUN_00b90440(uVar2,uVar1);
  uVar2 = FUN_00b90090(*(undefined8 *)(param_1 + 0x898));
  FUN_00b90440(*(undefined8 *)(*(longlong *)PTR_DAT_02001890 + 0x9f0),uVar2);
  FUN_012281f0(*(undefined8 *)PTR_DAT_02001890);
  return;
}

