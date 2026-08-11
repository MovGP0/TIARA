/* Ghidra address: 0054afb0 */
/* Ghidra symbol: FUN_0054afb0 */


longlong * FUN_0054afb0(longlong param_1,longlong *param_2)

{
  undefined8 uVar1;
  int iVar2;
  int iVar3;
  
  FUN_00419260(param_2,&DAT_0052f6a0,1,**(undefined2 **)(param_1 + 0x58));
  *(longlong *)(param_1 + 0x58) = *(longlong *)(param_1 + 0x58) + 10;
  iVar3 = 0;
  if (*param_2 != 0) {
    iVar3 = (int)*(undefined8 *)(*param_2 + -8);
  }
  iVar2 = 0;
  if (-1 < iVar3 + -1) {
    do {
      uVar1 = FUN_00545f10(*(undefined8 *)(*(longlong *)(param_1 + 0x70) + 0x18),&PTR_FUN_00549cc0,
                           *(undefined8 *)(param_1 + 0x70),param_1 + 0x58);
      uVar1 = FUN_004113f0(uVar1,&PTR_FUN_00529aa8);
      *(undefined8 *)(*param_2 + (longlong)iVar2 * 8) = uVar1;
      iVar2 = iVar2 + 1;
      iVar3 = iVar3 + -1;
    } while (iVar3 != 0);
  }
  return param_2;
}

