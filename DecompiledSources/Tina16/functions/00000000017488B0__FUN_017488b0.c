/* Ghidra address: 017488b0 */
/* Ghidra symbol: FUN_017488b0 */


void FUN_017488b0(longlong param_1,undefined8 param_2)

{
  longlong lVar1;
  longlong *plVar2;
  undefined2 *local_28;
  char *local_20;
  
  (**(code **)(**(longlong **)(param_1 + 0x28) + 0x2d0))(*(longlong **)(param_1 + 0x28),0,&local_20)
  ;
  lVar1 = *(longlong *)(*(longlong *)(param_1 + 0x28) + 0x168);
  if (lVar1 != 0) {
    plVar2 = *(longlong **)(lVar1 + 0xbe);
    (**(code **)(*plVar2 + 0x2d0))(plVar2,0,&local_28);
    *local_28 = *(undefined2 *)local_20;
  }
  if (*local_20 != *(char *)(param_1 + 0x38)) {
    *(undefined1 *)(param_1 + 10) = 1;
    FUN_0173d100(param_1,param_2,*PTR_DAT_02002480,*PTR_DAT_02001560);
    *(undefined1 *)(param_1 + 10) = 0;
  }
  return;
}

