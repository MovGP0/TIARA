/* Ghidra address: 00bf6ea0 */
/* Ghidra symbol: FUN_00bf6ea0 */


undefined8
FUN_00bf6ea0(undefined8 param_1,undefined8 param_2,longlong param_3,int param_4,int *param_5)

{
  undefined4 uVar1;
  longlong lVar2;
  int iVar3;
  int iVar4;
  
  uVar1 = 0;
  if (param_3 != 0) {
    uVar1 = *(undefined4 *)(param_3 + -4);
  }
  FUN_004169f0(param_2,uVar1);
  iVar4 = 0;
  for (iVar3 = param_4; iVar3 < param_4 + *param_5; iVar3 = iVar3 + 1) {
    iVar4 = iVar4 + 1;
    while (*(short *)(param_3 + -2 + (longlong)iVar3 * 2) == -0x2000) {
      iVar3 = iVar3 + 1;
    }
    lVar2 = FUN_00414de0(param_2);
    *(undefined2 *)(lVar2 + -2 + (longlong)iVar4 * 2) =
         *(undefined2 *)(param_3 + -2 + (longlong)iVar3 * 2);
  }
  FUN_004169f0(param_2,iVar4);
  *param_5 = iVar4;
  return param_2;
}

