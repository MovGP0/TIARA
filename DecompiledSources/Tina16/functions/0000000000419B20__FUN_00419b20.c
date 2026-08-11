/* Ghidra address: 00419b20 */
/* Ghidra symbol: FUN_00419b20 */


longlong * FUN_00419b20(longlong *param_1,undefined8 *param_2,undefined8 param_3)

{
  int iVar1;
  int iVar2;
  longlong lVar3;
  
  iVar1 = FUN_00419a40(param_3);
  FUN_00419260(param_1,&DAT_00403908,1,(longlong)iVar1);
  iVar2 = 0;
  if (-1 < iVar1 + -1) {
    do {
      if (param_2 != (undefined8 *)0x0) {
        lVar3 = 0;
        if (param_2 != (undefined8 *)0x0) {
          lVar3 = param_2[-1];
        }
        *(longlong *)(*param_1 + (longlong)iVar2 * 8) = lVar3 + -1;
        param_2 = (undefined8 *)*param_2;
      }
      iVar2 = iVar2 + 1;
      iVar1 = iVar1 + -1;
    } while (iVar1 != 0);
  }
  return param_1;
}

