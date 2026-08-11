/* Ghidra address: 004074e0 */
/* Ghidra symbol: FUN_004074e0 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_004074e0(undefined8 *param_1,int param_2)

{
  longlong *plVar1;
  uint uVar2;
  ulonglong uVar3;
  
  uVar2 = param_2 - 0xb30U >> 8;
  uVar2 = (uVar2 - 0x3ff & -(uint)(uVar2 < 0x3ff)) + 0x3ff;
  uVar3 = (ulonglong)(uVar2 * 0x10);
  plVar1 = *(longlong **)((longlong)&PTR_LOOP_02006c48 + uVar3);
  *param_1 = (longlong *)((longlong)&PTR_LOOP_02006c40 + uVar3);
  param_1[1] = plVar1;
  *plVar1 = (longlong)param_1;
  *(undefined8 **)((longlong)&PTR_LOOP_02006c48 + uVar3) = param_1;
  if (plVar1 == (longlong *)((longlong)&PTR_LOOP_02006c40 + uVar3)) {
    (&DAT_02006bc0)[uVar2 >> 5] = (&DAT_02006bc0)[uVar2 >> 5] | 1 << ((byte)uVar2 & 0x1f);
    _DAT_02006bbc = _DAT_02006bbc | 1 << ((byte)(uVar2 >> 5) & 0x1f);
  }
  return;
}

