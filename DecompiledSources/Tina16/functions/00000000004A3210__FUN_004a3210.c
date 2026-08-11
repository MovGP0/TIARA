/* Ghidra address: 004a3210 */
/* Ghidra symbol: FUN_004a3210 */


undefined8 FUN_004a3210(longlong param_1,undefined4 *param_2,longlong param_3,uint param_4)

{
  longlong lVar1;
  undefined7 uVar3;
  undefined8 uVar2;
  int iVar4;
  longlong *plVar5;
  bool bVar6;
  
  if (param_4 < 0x80000000) {
    iVar4 = param_4 + 1;
    plVar5 = (longlong *)(param_3 + 8);
    do {
      lVar1 = *plVar5;
      if (lVar1 == param_1) {
        uVar3 = (undefined7)((ulonglong)lVar1 >> 8);
        bVar6 = true;
      }
      else if ((lVar1 == 0) || (param_1 == 0)) {
        bVar6 = false;
        uVar3 = 0;
      }
      else {
        uVar2 = FUN_0043e420(lVar1,param_1);
        bVar6 = (int)uVar2 == 0;
        uVar3 = (undefined7)((ulonglong)uVar2 >> 8);
      }
      if (bVar6) {
        *param_2 = (int)plVar5[-1];
        return CONCAT71(uVar3,1);
      }
      plVar5 = plVar5 + 2;
      iVar4 = iVar4 + -1;
    } while (iVar4 != 0);
  }
  return 0;
}

