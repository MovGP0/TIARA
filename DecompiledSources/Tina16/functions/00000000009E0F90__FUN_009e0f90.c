/* Ghidra address: 009e0f90 */
/* Ghidra symbol: FUN_009e0f90 */


void FUN_009e0f90(undefined8 param_1,longlong param_2)

{
  longlong lVar1;
  
  if (*(char *)(param_2 + 0x7b0) != '\0') {
    lVar1 = *(longlong *)PTR_DAT_02004030;
    *(undefined8 *)(lVar1 + 0x270) = *(undefined8 *)(param_2 + 0x740);
    *(undefined8 *)(lVar1 + 0x278) = *(undefined8 *)(param_2 + 0x748);
  }
  return;
}

