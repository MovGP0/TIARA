/* Ghidra address: 015bff30 */
/* Ghidra symbol: FUN_015bff30 */


void FUN_015bff30(undefined8 param_1,undefined8 param_2)

{
  longlong *plVar1;
  longlong *plVar2;
  
  plVar2 = (longlong *)FUN_015bfd70(param_1,param_2);
  plVar1 = (longlong *)*plVar2;
  if (plVar1 != (longlong *)0x0) {
    *plVar2 = *plVar1;
    FUN_00418590(plVar1,&DAT_015b9720);
  }
  return;
}

