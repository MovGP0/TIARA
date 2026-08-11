/* Ghidra address: 00acf6b0 */
/* Ghidra symbol: FUN_00acf6b0 */


undefined4 FUN_00acf6b0(longlong param_1,int param_2,undefined8 *param_3)

{
  char cVar1;
  undefined4 uVar2;
  undefined8 unaff_RDI;
  
  *param_3 = 0;
  if (param_2 == 0) {
    cVar1 = (**(code **)(**(longlong **)(param_1 + 0x140) + 0x260))(*(longlong **)(param_1 + 0x140))
    ;
    if (cVar1 != '\0') {
      uVar2 = (undefined4)CONCAT71((int7)((ulonglong)unaff_RDI >> 8),1);
      goto LAB_00acf6eb;
    }
  }
  uVar2 = 0;
LAB_00acf6eb:
  if ((char)uVar2 != '\0') {
    FUN_00416cd0(param_3,3,*(undefined8 *)(param_1 + 200),&LAB_00acf730,
                 *(undefined8 *)(param_1 + 0xe0));
  }
  return uVar2;
}

