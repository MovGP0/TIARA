/* Ghidra address: 016f84e0 */
/* Ghidra symbol: FUN_016f84e0 */


double FUN_016f84e0(longlong param_1,undefined1 param_2)

{
  int iVar1;
  int iVar2;
  longlong lVar3;
  double dVar4;
  
  dVar4 = 0.0;
  if (((*(longlong *)PTR_DAT_020038e8 != 0) && (*(longlong *)PTR_DAT_02003c48 != 0)) &&
     (*(longlong *)(*(longlong *)PTR_DAT_02003c48 + 0x138) != 0)) {
    lVar3 = (**(code **)(**(longlong **)(*(longlong *)PTR_DAT_02003c48 + 0x138) + 0x30))
                      (*(longlong **)(*(longlong *)PTR_DAT_02003c48 + 0x138),param_2);
    if (*(char *)(lVar3 + 0x18) == '\x02') {
      iVar1 = FUN_01b05690(*(undefined8 *)(lVar3 + 0x38),*(undefined1 *)(lVar3 + 0x24),
                           *(undefined1 *)(lVar3 + 0x28));
      dVar4 = *(double *)(*(longlong *)(param_1 + 0x118) + (longlong)iVar1 * 8);
    }
    else if (*(char *)(lVar3 + 0x18) == '\x01') {
      iVar1 = FUN_01b05600(*(undefined8 *)(lVar3 + 0x38),*(undefined1 *)(lVar3 + 0x24));
      iVar2 = FUN_01b05600(*(undefined8 *)(lVar3 + 0x38),*(undefined1 *)(lVar3 + 0x28));
      dVar4 = *(double *)(*(longlong *)(param_1 + 0x118) + (longlong)iVar1 * 8) -
              *(double *)(*(longlong *)(param_1 + 0x118) + (longlong)iVar2 * 8);
    }
  }
  return dVar4;
}

