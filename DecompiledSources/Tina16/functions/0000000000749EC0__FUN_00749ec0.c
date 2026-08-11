/* Ghidra address: 00749ec0 */
/* Ghidra symbol: FUN_00749ec0 */


void FUN_00749ec0(longlong param_1,int param_2,int param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  if (param_2 != param_3) {
    uVar2 = FUN_004aeac0(*(undefined8 *)(param_1 + 0x38),param_2);
    uVar1 = *(undefined8 *)(param_1 + 0x38);
    uVar3 = FUN_004aeac0(uVar1,param_3);
    FUN_004aedb0(uVar1,param_2,uVar3);
    FUN_004aedb0(*(undefined8 *)(param_1 + 0x38),param_3,uVar2);
  }
  return;
}

