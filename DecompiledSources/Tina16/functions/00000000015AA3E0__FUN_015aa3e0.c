/* Ghidra address: 015aa3e0 */
/* Ghidra symbol: FUN_015aa3e0 */


bool FUN_015aa3e0(longlong param_1,undefined1 *param_2,int param_3,char param_4)

{
  undefined4 uVar1;
  int iVar2;
  undefined8 uVar3;
  
  if (param_4 != '\0') {
    uVar3 = (**(code **)(param_1 + 0x28))(param_1);
    uVar1 = FUN_00414ce0(uVar3);
    for (; 0 < param_3; param_3 = param_3 + -1) {
      iVar2 = FUN_015aa100(*param_2,uVar3,uVar1);
      if (iVar2 < 0) {
        return param_4 == '\0';
      }
      param_2 = param_2 + 1;
    }
  }
  return true;
}

