/* Ghidra address: 01b53e60 */
/* Ghidra symbol: FUN_01b53e60 */


void FUN_01b53e60(undefined8 param_1,longlong param_2)

{
  FUN_00410f20(*(undefined8 *)(param_2 + 0xf8));
  if (*(longlong *)PTR_DAT_02003fc0 != 0) {
    FUN_00410f20(*(undefined8 *)PTR_DAT_02003fc0);
    *(undefined8 *)PTR_DAT_02003fc0 = 0;
    FUN_0080cc70(*(undefined8 *)PTR_DAT_02004030);
  }
  return;
}

