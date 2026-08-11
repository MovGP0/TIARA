/* Ghidra address: 01bfe390 */
/* Ghidra symbol: FUN_01bfe390 */


void FUN_01bfe390(longlong param_1,char param_2)

{
  longlong lVar1;
  longlong *plVar2;
  
  if (*(char *)(param_1 + 0xc0) != param_2) {
    *(char *)(param_1 + 0xc0) = param_2;
    if (*(longlong *)(param_1 + 0x80) != 0) {
      lVar1 = FUN_01c07120(*(longlong *)(param_1 + 0x80));
      if (lVar1 != 0) {
        plVar2 = (longlong *)FUN_01c07120(*(undefined8 *)(param_1 + 0x80));
        (**(code **)(*plVar2 + 0x358))(plVar2);
      }
    }
  }
  return;
}

