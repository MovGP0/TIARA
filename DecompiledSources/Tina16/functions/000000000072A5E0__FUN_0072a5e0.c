/* Ghidra address: 0072a5e0 */
/* Ghidra symbol: FUN_0072a5e0 */


void FUN_0072a5e0(longlong param_1)

{
  longlong lVar1;
  undefined8 uVar2;
  int iVar3;
  int iVar4;
  
  FUN_00419260(param_1 + 0x30,&DAT_007202d0,1,
               (longlong)*(int *)(*(longlong *)(param_1 + 0x10) + 0x10));
  iVar4 = *(int *)(*(longlong *)(param_1 + 0x10) + 0x10);
  iVar3 = 0;
  if (-1 < iVar4 + -1) {
    do {
      lVar1 = FUN_0072a770(param_1,iVar3);
      *(undefined4 *)(*(longlong *)(param_1 + 0x30) + (longlong)iVar3 * 0xc) =
           *(undefined4 *)(lVar1 + 0x2c);
      uVar2 = FUN_0072a770(param_1,iVar3);
      uVar2 = FUN_00729f60(uVar2);
      *(undefined8 *)(*(longlong *)(param_1 + 0x30) + 4 + (longlong)iVar3 * 0xc) = uVar2;
      iVar3 = iVar3 + 1;
      iVar4 = iVar4 + -1;
    } while (iVar4 != 0);
  }
  *(undefined8 *)(param_1 + 0x38) = *(undefined8 *)(param_1 + 0x30);
  return;
}

