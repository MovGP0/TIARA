/* Ghidra address: 00a9b240 */
/* Ghidra symbol: FUN_00a9b240 */


undefined4 FUN_00a9b240(longlong param_1,int param_2,undefined8 *param_3)

{
  char cVar1;
  undefined4 uVar2;
  undefined8 unaff_RDI;
  
  *param_3 = 0;
  if (param_2 == 0) {
    cVar1 = FUN_00a9b200(param_1);
    if (cVar1 != '\0') {
      uVar2 = (undefined4)CONCAT71((int7)((ulonglong)unaff_RDI >> 8),1);
      goto LAB_00a9b270;
    }
  }
  uVar2 = 0;
LAB_00a9b270:
  if ((char)uVar2 != '\0') {
    FUN_00416cd0(param_3,3,*(undefined8 *)(param_1 + 200),&LAB_00a9b2b4,
                 *(undefined8 *)(param_1 + 0xe0));
  }
  return uVar2;
}

