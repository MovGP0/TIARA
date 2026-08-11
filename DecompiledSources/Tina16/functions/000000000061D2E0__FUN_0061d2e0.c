/* Ghidra address: 0061d2e0 */
/* Ghidra symbol: FUN_0061d2e0 */


undefined8 FUN_0061d2e0(longlong param_1)

{
  longlong *plVar1;
  char cVar2;
  longlong lVar3;
  
  plVar1 = *(longlong **)(param_1 + 0xc0);
  if ((((plVar1 == (longlong *)0x0) ||
       (cVar2 = (**(code **)(*plVar1 + 0x80))(plVar1,param_1), cVar2 == '\0')) &&
      (cVar2 = FUN_0080f600(*(undefined8 *)PTR_DAT_02004030,param_1), cVar2 == '\0')) &&
     (cVar2 = FUN_004d4d90(param_1), cVar2 == '\0')) {
    lVar3 = FUN_00648670(0xb03f,0,param_1);
    if (lVar3 != 1) {
      return 0;
    }
  }
  return 1;
}

