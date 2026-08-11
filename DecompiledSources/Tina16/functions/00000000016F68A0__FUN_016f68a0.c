/* Ghidra address: 016f68a0 */
/* Ghidra symbol: FUN_016f68a0 */


void FUN_016f68a0(longlong param_1,undefined4 param_2,undefined1 param_3,char param_4,
                 undefined1 param_5)

{
  longlong lVar1;
  longlong lVar2;
  int iVar3;
  double dVar4;
  
  if (param_4 != '\0') {
    dVar4 = (double)FUN_016ed780(param_1,param_2);
    if (*(double *)(param_1 + 0x888) <= dVar4) {
      iVar3 = 0;
      while (iVar3 < *(int *)(param_1 + 0x2d8)) {
        iVar3 = iVar3 + 1;
        lVar1 = *(longlong *)(*(longlong *)(param_1 + 0x2b0) + -8 + (longlong)iVar3 * 8);
        lVar2 = FUN_017ff620(*(undefined8 *)(lVar1 + 0x128));
        if ((lVar2 == 0) && (*(char *)(lVar1 + 0x119) != '\0')) {
          (**(code **)(lVar1 + 0xe0))
                    (*(undefined8 *)(lVar1 + 0x60),lVar1,param_1,param_2,param_3,param_5);
        }
      }
    }
  }
  return;
}

