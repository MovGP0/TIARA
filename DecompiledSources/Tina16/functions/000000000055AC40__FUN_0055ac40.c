/* Ghidra address: 0055ac40 */
/* Ghidra symbol: FUN_0055ac40 */


longlong * FUN_0055ac40(undefined8 param_1,longlong *param_2,undefined8 param_3)

{
  undefined8 uVar1;
  int iVar2;
  int iVar3;
  longlong local_30 [2];
  
  local_30[0] = 0;
  FUN_0055b110(param_1,local_30);
  uVar1 = 0;
  if (local_30[0] != 0) {
    uVar1 = *(undefined8 *)(local_30[0] + -8);
  }
  FUN_00419260(param_2,&DAT_00492e48,1,uVar1);
  iVar3 = 0;
  if (local_30[0] != 0) {
    iVar3 = (int)*(undefined8 *)(local_30[0] + -8);
  }
  iVar2 = 0;
  if (-1 < iVar3 + -1) {
    do {
      uVar1 = FUN_00417740(*param_2 + (longlong)iVar2 * 0x20,&DAT_00527bf8);
      FUN_0055b560(local_30[0] + (longlong)iVar2 * 0x10,param_3,uVar1);
      iVar2 = iVar2 + 1;
      iVar3 = iVar3 + -1;
    } while (iVar3 != 0);
  }
  FUN_00419430(local_30,&DAT_0052f808);
  return param_2;
}

