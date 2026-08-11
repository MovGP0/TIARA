/* Ghidra address: 00a9bc60 */
/* Ghidra symbol: FUN_00a9bc60 */


undefined8
FUN_00a9bc60(longlong param_1,undefined8 param_2,undefined4 param_3,undefined4 param_4,
            undefined8 *param_5,undefined8 *param_6,undefined8 *param_7)

{
  undefined8 uVar1;
  longlong *plVar2;
  int iVar3;
  int iVar4;
  
  *param_7 = 0;
  uVar1 = 0;
  *param_6 = 0;
  *param_5 = 0;
  iVar4 = *(int *)(param_1 + 0x10);
  iVar3 = 0;
  if (-1 < iVar4 + -1) {
    do {
      plVar2 = (longlong *)FUN_00ac3910(param_1,iVar3);
      uVar1 = FUN_00414480(param_7);
      uVar1 = (**(code **)(*plVar2 + 0x90))(plVar2,param_2,param_3,param_4,param_5,param_6,uVar1);
      if ((char)uVar1 != '\0') {
        return uVar1;
      }
      iVar3 = iVar3 + 1;
      iVar4 = iVar4 + -1;
    } while (iVar4 != 0);
  }
  return uVar1;
}

