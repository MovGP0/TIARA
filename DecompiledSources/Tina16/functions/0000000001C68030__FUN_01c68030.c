/* Ghidra address: 01c68030 */
/* Ghidra symbol: FUN_01c68030 */


void FUN_01c68030(longlong param_1)

{
  longlong *plVar1;
  
  if (*(longlong *)(param_1 + 0x27a8) != 0) {
    FUN_0199e510(*(longlong *)(param_1 + 0x27a8));
    (**(code **)(**(longlong **)(param_1 + 0x27a8) + 0x60))
              (*(longlong **)(param_1 + 0x27a8),*PTR_DAT_02002480,PTR_DAT_02004010[0x816],
               PTR_DAT_02004010[0x814],*PTR_DAT_020037e8,PTR_DAT_02004010[0x815],*PTR_DAT_02001560,
               *PTR_DAT_02005310,0x1c7);
  }
  plVar1 = *(longlong **)(param_1 + 7000);
  if (plVar1 != (longlong *)0x0) {
    (**(code **)(*plVar1 + 0x20))(plVar1);
  }
  return;
}

