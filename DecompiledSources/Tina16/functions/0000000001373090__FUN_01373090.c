/* Ghidra address: 01373090 */
/* Ghidra symbol: FUN_01373090 */


double FUN_01373090(longlong param_1,undefined1 param_2,undefined8 *param_3,undefined1 param_4,
                   undefined8 param_5,undefined8 param_6,double *param_7)

{
  int iVar1;
  longlong lVar2;
  undefined8 *puVar3;
  int iVar4;
  double dVar5;
  undefined8 local_68 [10];
  
  puVar3 = local_68;
  for (lVar2 = 10; lVar2 != 0; lVar2 = lVar2 + -1) {
    *puVar3 = *param_3;
    param_3 = param_3 + 1;
    puVar3 = puVar3 + 1;
  }
  FUN_00414610(param_6);
  dVar5 = (double)FUN_01372020(param_1,param_2,local_68,param_4,param_5,param_6);
  if (dVar5 < *param_7) {
    *param_7 = dVar5;
    iVar4 = *(int *)(*(longlong *)(*(longlong *)(param_1 + 0xa0) + 0x468) + 0x10);
    iVar1 = 1;
    if (0 < iVar4) {
      puVar3 = local_68;
      do {
        *(undefined8 *)(param_1 + 0x1390 + (longlong)iVar1 * 8) = *puVar3;
        iVar1 = iVar1 + 1;
        puVar3 = puVar3 + 1;
        iVar4 = iVar4 + -1;
      } while (iVar4 != 0);
    }
  }
  FUN_00414480(&param_6);
  return dVar5;
}

