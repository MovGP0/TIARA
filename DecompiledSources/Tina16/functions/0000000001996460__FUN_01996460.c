/* Ghidra address: 01996460 */
/* Ghidra symbol: FUN_01996460 */


void FUN_01996460(longlong *param_1,undefined8 param_2,undefined8 param_3,char param_4)

{
  int iVar1;
  int iVar2;
  
  iVar1 = (**(code **)(*param_1 + 0x18))(param_1,param_2);
  iVar2 = (**(code **)(*param_1 + 0x18))(param_1,param_3);
  if ((((iVar1 != -1) && (iVar2 != -1)) && ((param_4 == '\0' || (iVar1 <= iVar2)))) &&
     ((param_4 != '\0' || (iVar2 <= iVar1)))) {
    *(undefined8 *)(param_1[1] + (longlong)iVar1 * 8) = 0;
    if (param_4 != '\0') {
      iVar2 = iVar2 + 1;
    }
    FUN_00b94f50(param_1,iVar2,param_2);
  }
  return;
}

