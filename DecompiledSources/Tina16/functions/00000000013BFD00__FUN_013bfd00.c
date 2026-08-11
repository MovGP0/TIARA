/* Ghidra address: 013bfd00 */
/* Ghidra symbol: FUN_013bfd00 */


undefined8 FUN_013bfd00(undefined8 param_1,int param_2,int param_3,undefined4 *param_4)

{
  undefined4 uVar1;
  int iVar2;
  undefined8 uVar3;
  
  iVar2 = *(int *)(&DAT_01f423dc + (longlong)param_2 * 4);
  while ((iVar2 <= *(int *)(&DAT_01f428b4 + (longlong)param_2 * 4) &&
         (*(int *)((longlong)&UNWIND_INFO_01f3c43c + (longlong)iVar2 * 8) != param_3))) {
    iVar2 = iVar2 + 1;
  }
  if (*(int *)(&DAT_01f428b4 + (longlong)param_2 * 4) < iVar2) {
    uVar3 = 0;
  }
  else {
    uVar1 = *(PEx64_UnwindInfo *)((longlong)&UNWIND_INFO_01f3c440 + (longlong)iVar2 * 8);
    *param_4 = uVar1;
    uVar3 = CONCAT71((uint7)(uint3)((uint)uVar1 >> 8),1);
  }
  return uVar3;
}

