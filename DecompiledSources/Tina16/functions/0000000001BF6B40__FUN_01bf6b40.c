/* Ghidra address: 01bf6b40 */
/* Ghidra symbol: FUN_01bf6b40 */


longlong * FUN_01bf6b40(undefined8 param_1,longlong param_2,uint param_3)

{
  int iVar1;
  longlong lVar2;
  longlong *plVar3;
  undefined8 uVar4;
  
  plVar3 = (longlong *)0x0;
  if (param_2 != 0) {
    lVar2 = FUN_01bfd960(param_2);
    if (lVar2 != 0) {
      plVar3 = (longlong *)FUN_01bfd250(&PTR_FUN_01bf1690,1,0);
      FUN_01bfdfd0(plVar3,&DAT_01bf6bd8);
      uVar4 = FUN_01bfaa40(param_2);
      uVar4 = FUN_01bfaa70(uVar4);
      (**(code **)(*plVar3 + 0x20))(plVar3,uVar4);
      iVar1 = FUN_004b1870(param_2);
      (**(code **)(*plVar3 + 0x28))(plVar3,iVar1 + (param_3 & 0xff));
    }
  }
  return plVar3;
}

