/* Ghidra address: 016766c0 */
/* Ghidra symbol: FUN_016766c0 */


undefined8 FUN_016766c0(longlong param_1,undefined8 param_2,int param_3)

{
  undefined4 uVar1;
  int iVar2;
  undefined8 uVar3;
  
  if (param_3 == -1) {
    uVar1 = FUN_01b0fa20(param_1,0);
    iVar2 = FUN_01b0fa40(param_1,0,uVar1);
  }
  else {
    iVar2 = FUN_01b0fa40(param_1,0);
  }
  if (iVar2 == 0) {
    uVar3 = 0;
  }
  else {
    uVar3 = *(undefined8 *)(param_1 + 0x60);
  }
  return uVar3;
}

