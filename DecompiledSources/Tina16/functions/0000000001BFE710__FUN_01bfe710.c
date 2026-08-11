/* Ghidra address: 01bfe710 */
/* Ghidra symbol: FUN_01bfe710 */


void FUN_01bfe710(longlong param_1,undefined8 param_2)

{
  undefined8 uVar1;
  longlong lVar2;
  code *pcVar3;
  
  if (*(longlong *)(param_1 + 0x80) != 0) {
    uVar1 = *(undefined8 *)(param_1 + 0x80);
    *(undefined8 *)(param_1 + 0x80) = 0;
    FUN_00410f20(uVar1);
    lVar2 = *(longlong *)(param_1 + 0x18);
    if (lVar2 != 0) {
      pcVar3 = (code *)FUN_00411550(lVar2,0xffce);
      (*pcVar3)(lVar2);
    }
  }
  FUN_004b19c0(param_1,param_2);
  return;
}

