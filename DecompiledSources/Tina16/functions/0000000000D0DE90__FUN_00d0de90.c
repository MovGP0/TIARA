/* Ghidra address: 00d0de90 */
/* Ghidra symbol: FUN_00d0de90 */


void FUN_00d0de90(longlong param_1,uint param_2)

{
  undefined8 uVar1;
  int iVar2;
  longlong lVar3;
  
  FUN_00411a80(param_1,param_2);
  iVar2 = 0;
  if (*(longlong *)(param_1 + 0x28) != 0) {
    iVar2 = *(int *)(*(longlong *)(param_1 + 0x28) + -4);
  }
  if (0 < iVar2) {
    uVar1 = FUN_00415ab0(*(undefined8 *)(param_1 + 0x28));
    lVar3 = (longlong)iVar2;
    FUN_0040d200(uVar1,lVar3,0xaa);
    uVar1 = FUN_00415ab0(*(undefined8 *)(param_1 + 0x28));
    FUN_0040d200(uVar1,lVar3,0x55);
    uVar1 = FUN_00415ab0(*(undefined8 *)(param_1 + 0x28));
    FUN_0040d200(uVar1,lVar3,0);
  }
  FUN_004144d0(param_1 + 0x28);
  FUN_00cd6160(param_1,param_2 & 0xfffffffc);
  if ('\0' < (char)param_2) {
    FUN_00411a00(param_1);
  }
  return;
}

