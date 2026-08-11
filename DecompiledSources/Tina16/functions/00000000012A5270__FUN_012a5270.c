/* Ghidra address: 012a5270 */
/* Ghidra symbol: FUN_012a5270 */


uint FUN_012a5270(longlong param_1)

{
  int iVar1;
  int iVar2;
  undefined8 uVar3;
  longlong lVar4;
  uint unaff_ESI;
  
  iVar1 = *(int *)(param_1 + 0x1c);
  if (-1 < iVar1) {
    iVar2 = (**(code **)(**(longlong **)(param_1 + 8) + 0x28))(*(longlong **)(param_1 + 8));
    if (iVar1 <= iVar2 + -1) {
      uVar3 = (**(code **)(**(longlong **)(param_1 + 8) + 0x30))
                        (*(longlong **)(param_1 + 8),*(undefined4 *)(param_1 + 0x1c));
      lVar4 = FUN_004113f0(uVar3,&PTR_FUN_01105a20);
      unaff_ESI = (uint)*(byte *)(lVar4 + 0x38);
    }
  }
  return unaff_ESI;
}

