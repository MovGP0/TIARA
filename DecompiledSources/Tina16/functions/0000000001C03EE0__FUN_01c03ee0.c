/* Ghidra address: 01c03ee0 */
/* Ghidra symbol: FUN_01c03ee0 */


undefined8 FUN_01c03ee0(longlong *param_1,int *param_2)

{
  char cVar1;
  undefined8 uVar2;
  
  uVar2 = 0;
  if (*param_2 == 0xb014) {
    cVar1 = FUN_00664d50(*(undefined8 *)PTR_DAT_020054d8);
    if (cVar1 != '\0') {
      (**(code **)(*param_1 + -0x40))(param_1,param_2);
      uVar2 = 1;
    }
  }
  return uVar2;
}

