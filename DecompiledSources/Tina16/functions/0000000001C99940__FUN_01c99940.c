/* Ghidra address: 01c99940 */
/* Ghidra symbol: FUN_01c99940 */


void FUN_01c99940(longlong param_1)

{
  char cVar1;
  undefined8 uVar2;
  
  cVar1 = '\x01';
  if (*(longlong *)PTR_DAT_020051c0 == 0) {
    uVar2 = FUN_007fc180(&PTR_FUN_01bb5178,1,*(undefined8 *)PTR_DAT_02004030);
    *(undefined8 *)PTR_DAT_020051c0 = uVar2;
    cVar1 = FUN_01bb5f00(*(undefined8 *)PTR_DAT_020051c0,*(undefined8 *)(param_1 + 0x27a8));
    if (cVar1 == '\0') {
      FUN_00410f20(*(undefined8 *)PTR_DAT_020051c0);
    }
  }
  if (cVar1 != '\0') {
    FUN_008059a0(*(undefined8 *)PTR_DAT_020051c0);
    FUN_0064e1d0(*(undefined8 *)PTR_DAT_020051c0);
  }
  return;
}

