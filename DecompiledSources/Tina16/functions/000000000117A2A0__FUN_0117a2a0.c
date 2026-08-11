/* Ghidra address: 0117a2a0 */
/* Ghidra symbol: FUN_0117a2a0 */


void FUN_0117a2a0(longlong param_1,undefined8 param_2,short *param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  if (*param_3 == 0xd) {
    uVar2 = *(undefined8 *)(DAT_020412f0 + 0x898);
    uVar1 = FUN_00b90090(uVar2);
    FUN_00b90440(uVar2,uVar1);
    uVar2 = FUN_00b90090(*(undefined8 *)(param_1 + 0x898));
    FUN_00b90440(*(undefined8 *)(*(longlong *)PTR_DAT_02001890 + 0x9f0),uVar2);
    FUN_012281f0(*(undefined8 *)PTR_DAT_02001890);
  }
  return;
}

