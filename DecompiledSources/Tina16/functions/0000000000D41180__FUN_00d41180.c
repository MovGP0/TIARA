/* Ghidra address: 00d41180 */
/* Ghidra symbol: FUN_00d41180 */


void FUN_00d41180(longlong *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  char cVar2;
  int iVar3;
  
  cVar2 = FUN_00d3f270(param_1);
  if ((cVar2 != '\0') && (cVar2 = FUN_00d3eda0(param_1), cVar2 != '\x01')) {
    uVar1 = FUN_00781840();
    cVar2 = FUN_00779360(uVar1);
    if (cVar2 == '\0') {
      iVar3 = thunk_FUN_0419e3da(param_1[1]);
      if (iVar3 != 0) {
        FUN_00788d60(param_1,0);
      }
      FUN_00788400(param_1,param_2);
      if (iVar3 != 0) {
        FUN_00788d60(param_1,1);
        (**(code **)(*param_1 + 0x68))(param_1);
      }
      *(undefined1 *)(param_1 + 8) = 1;
      return;
    }
  }
  *(undefined1 *)(param_1 + 8) = 0;
  return;
}

