/* Ghidra address: 01bb2810 */
/* Ghidra symbol: FUN_01bb2810 */


void FUN_01bb2810(longlong param_1,undefined8 param_2,undefined1 *param_3)

{
  char cVar1;
  undefined1 uVar2;
  
  if (*(int *)(param_1 + 0x508) == 1) {
    cVar1 = FUN_01bb3d90();
    if (cVar1 == '\0') {
      uVar2 = 0;
      goto LAB_01bb2830;
    }
  }
  uVar2 = 1;
LAB_01bb2830:
  *param_3 = uVar2;
  return;
}

