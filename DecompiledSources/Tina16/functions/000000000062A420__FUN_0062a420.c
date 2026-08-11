/* Ghidra address: 0062a420 */
/* Ghidra symbol: FUN_0062a420 */


undefined8 FUN_0062a420(longlong param_1,int param_2,uint param_3)

{
  int iVar1;
  longlong *plVar2;
  int iVar3;
  undefined8 uVar4;
  
  uVar4 = 0xfffffffe;
  if ((((param_1 != 0) && (*(longlong *)(param_1 + 0x30) != 0)) &&
      (*(longlong *)(param_1 + 0x38) != 0)) &&
     ((plVar2 = *(longlong **)(param_1 + 0x28), plVar2 != (longlong *)0x0 && (*plVar2 == param_1))))
  {
    iVar1 = (int)plVar2[1];
    if ((((iVar1 - 0x39U < 0x39) &&
         ((0x100400400011001U >> ((ulonglong)(iVar1 - 0x39U) & 0x3f) & 1) != 0)) ||
        ((iVar1 == 0x29a || (iVar1 == 0x2a)))) &&
       (uVar4 = 0xfffffffb, plVar2[4] + 2U <= (ulonglong)plVar2[0x2df])) {
      do {
        iVar1 = *(int *)((longlong)plVar2 + 0x1714);
        iVar3 = 0x10 - iVar1;
        if (param_2 < 0x10 - iVar1) {
          iVar3 = param_2;
        }
        *(ushort *)(plVar2 + 0x2e2) =
             (ushort)(((1 << ((byte)iVar3 & 0x1f)) - 1U & param_3) << ((byte)iVar1 & 0x1f)) |
             (ushort)(int)plVar2[0x2e2];
        *(int *)((longlong)plVar2 + 0x1714) = iVar1 + iVar3;
        FUN_00632390(plVar2);
        param_3 = (int)param_3 >> ((byte)iVar3 & 0x1f);
        uVar4 = 0;
        param_2 = param_2 - iVar3;
      } while (param_2 != 0);
    }
  }
  return uVar4;
}

