/* Ghidra address: 0186a990 */
/* Ghidra symbol: FUN_0186a990 */


void FUN_0186a990(undefined8 *param_1)

{
  int iVar1;
  code *local_28;
  undefined8 local_20;
  
  local_28 = (code *)*param_1;
  local_20 = param_1[1];
  if ((DAT_02110380 == '\0') || (local_28 == (code *)0x0)) {
    FUN_0186a730();
    if (local_28 != (code *)0x0) {
      if ((DAT_02110388 == 0) || (*(longlong *)(DAT_02110388 + 0x10) == 0)) {
        if ((*(longlong *)(*(longlong *)PTR_DAT_02004030 + 0x2d0) != 0) &&
           (iVar1 = FUN_00427ab0(), *(int *)PTR_DAT_020050d8 != iVar1)) {
          FUN_004d1a50(0,&local_28);
          return;
        }
        (*local_28)(local_20);
      }
      else {
        thunk_FUN_041b2403(*(undefined8 *)(DAT_02110388 + 0x10),0x4fa,&local_28,0);
      }
    }
  }
  else {
    (*local_28)(local_20);
  }
  return;
}

