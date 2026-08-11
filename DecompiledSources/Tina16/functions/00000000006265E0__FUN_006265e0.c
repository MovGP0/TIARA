/* Ghidra address: 006265e0 */
/* Ghidra symbol: FUN_006265e0 */


undefined8 FUN_006265e0(void)

{
  int iVar1;
  HRESULT HVar2;
  undefined4 extraout_var;
  int local_c [3];
  
  iVar1 = FUN_0044f080();
  if (5 < iVar1) {
    HVar2 = DwmIsCompositionEnabled(local_c);
    if ((HVar2 == 0) && (local_c[0] != 0)) {
      return CONCAT71((int7)(CONCAT44(extraout_var,HVar2) >> 8),1);
    }
  }
  return 0;
}

