/* Ghidra address: 0046cfb0 */
/* Ghidra symbol: FUN_0046cfb0 */


longlong * FUN_0046cfb0(longlong *param_1,undefined8 *param_2,undefined8 param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar1 = FUN_00419a40(param_3);
  FUN_00419260(param_1,&DAT_0046ceb0,1,(longlong)(iVar1 * 2));
  for (iVar2 = 0; iVar2 < iVar1 * 2; iVar2 = iVar2 + 2) {
    *(undefined4 *)(*param_1 + (longlong)iVar2 * 4) = 0;
    if (param_2 == (undefined8 *)0x0) {
      *(undefined4 *)(*param_1 + (longlong)(iVar2 + 1) * 4) = 0xffffffff;
    }
    else {
      iVar3 = 0;
      if (param_2 != (undefined8 *)0x0) {
        iVar3 = (int)param_2[-1];
      }
      *(int *)(*param_1 + (longlong)(iVar2 + 1) * 4) = iVar3 + -1;
      param_2 = (undefined8 *)*param_2;
    }
  }
  return param_1;
}

