/* Ghidra address: 005391d0 */
/* Ghidra symbol: FUN_005391d0 */


longlong * FUN_005391d0(longlong *param_1,longlong param_2,int param_3)

{
  undefined8 *puVar1;
  int iVar2;
  int iVar3;
  undefined8 local_48;
  undefined8 uStack_40;
  
  FUN_00419260(param_1,&DAT_004d96d8,1,(longlong)(param_3 + 1));
  iVar3 = 0;
  if (*param_1 != 0) {
    iVar3 = (int)*(undefined8 *)(*param_1 + -8);
  }
  iVar2 = 0;
  if (iVar3 - 1U < 0x80000000) {
    do {
      FUN_00537a70(param_2,&local_48);
      puVar1 = (undefined8 *)(*param_1 + (longlong)iVar2 * 0x10);
      *puVar1 = local_48;
      puVar1[1] = uStack_40;
      iVar2 = iVar2 + 1;
      param_2 = param_2 + 0x20;
      iVar3 = iVar3 + -1;
    } while (iVar3 != 0);
  }
  return param_1;
}

