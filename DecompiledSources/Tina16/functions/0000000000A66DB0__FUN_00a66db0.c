/* Ghidra address: 00a66db0 */
/* Ghidra symbol: FUN_00a66db0 */


undefined8 FUN_00a66db0(longlong param_1,longlong *param_2,undefined8 param_3,undefined8 param_4)

{
  char cVar1;
  int iVar2;
  longlong lVar3;
  
  *param_2 = 0;
  while( true ) {
    cVar1 = FUN_00a63140(*(undefined2 *)(param_1 + 0x26),param_3,param_4);
    if (cVar1 == '\x01') {
      FUN_00a66ba0(param_1);
      return 1;
    }
    if (cVar1 == '\x02') break;
    iVar2 = 0;
    if (*param_2 != 0) {
      iVar2 = *(int *)(*param_2 + -4);
    }
    FUN_004169f0(param_2,iVar2 + 1);
    lVar3 = FUN_00414de0(param_2);
    iVar2 = 0;
    if (*param_2 != 0) {
      iVar2 = *(int *)(*param_2 + -4);
    }
    *(undefined2 *)(lVar3 + -2 + (longlong)iVar2 * 2) = *(undefined2 *)(param_1 + 0x26);
    FUN_00a66ba0(param_1);
  }
  return 0;
}

