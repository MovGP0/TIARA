/* Ghidra address: 01bf66f0 */
/* Ghidra symbol: FUN_01bf66f0 */


longlong * FUN_01bf66f0(undefined8 param_1,undefined8 param_2,longlong param_3,uint param_4)

{
  int iVar1;
  undefined8 uVar2;
  longlong *plVar3;
  
  plVar3 = (longlong *)0x0;
  if ((param_3 != 0) && (*(longlong *)(param_3 + 8) != 0)) {
    plVar3 = (longlong *)FUN_004b1ca0(*(undefined8 *)(param_3 + 8));
    iVar1 = FUN_004b1870(param_3);
    (**(code **)(*plVar3 + 0x28))(plVar3,iVar1 + (param_4 & 0xff));
    FUN_01bfde30(plVar3,param_2);
    uVar2 = FUN_01bfaa40(plVar3);
    uVar2 = FUN_01bfab50(uVar2);
    FUN_01bf9980(uVar2,1);
  }
  return plVar3;
}

