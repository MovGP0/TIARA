/* Ghidra address: 01810040 */
/* Ghidra symbol: FUN_01810040 */


void FUN_01810040(undefined8 param_1,char param_2,double *param_3,double *param_4)

{
  int iVar1;
  double dVar2;
  undefined1 local_104 [172];
  uint local_58;
  uint local_54;
  
  iVar1 = thunk_FUN_03e5bd07(param_1,0x58);
  *param_3 = (double)iVar1 / 96.0;
  iVar1 = thunk_FUN_03e5bd07(param_1,0x5a);
  *param_4 = (double)iVar1 / 96.0;
  dVar2 = (double)FUN_0040c850(*param_3 - 1.0);
  if ((0.0001 < dVar2) && (dVar2 = (double)FUN_0040c850(*param_4 - 1.0), 0.0001 < dVar2)) {
    return;
  }
  if (param_2 == '\0') {
    FUN_0042a230(local_104,0xdc);
    iVar1 = thunk_FUN_04140795(0,0xffffffff,local_104);
    if (iVar1 != 0) {
      iVar1 = thunk_FUN_0410f747(0);
      *param_3 = 1.0 / ((double)local_58 / (double)iVar1);
      iVar1 = thunk_FUN_0410f747(1);
      *param_4 = 1.0 / ((double)local_54 / (double)iVar1);
    }
  }
  return;
}

