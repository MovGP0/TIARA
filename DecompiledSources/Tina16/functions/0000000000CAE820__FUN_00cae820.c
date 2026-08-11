/* Ghidra address: 00cae820 */
/* Ghidra symbol: FUN_00cae820 */


undefined8 FUN_00cae820(longlong *param_1,undefined4 param_2)

{
  char cVar1;
  int iVar2;
  undefined8 uVar3;
  
  uVar3 = 0;
  iVar2 = *(int *)(param_1[0x21] + 0x30);
  cVar1 = (**(code **)(*param_1 + 0x108))(param_1);
  if (cVar1 != '\0') {
    if ((*(int *)(param_1[0x21] + 0x30) <= iVar2) &&
       (iVar2 = FUN_00cae370(param_1,0,param_2,0), iVar2 < 1)) {
      return 0;
    }
    uVar3 = 1;
  }
  return uVar3;
}

