/* Ghidra address: 006ed880 */
/* Ghidra symbol: FUN_006ed880 */


void FUN_006ed880(longlong param_1,char param_2)

{
  int iVar1;
  longlong *plVar2;
  
  if (*(char *)(param_1 + 0x18) != param_2) {
    iVar1 = FUN_004b1870(param_1);
    if (iVar1 != 0) {
      *(char *)(param_1 + 0x18) = param_2;
      FUN_004b1830(param_1,0);
      plVar2 = (longlong *)FUN_006edb60(*(undefined8 *)(param_1 + 8));
      (**(code **)(*plVar2 + 0x188))(plVar2);
    }
  }
  return;
}

