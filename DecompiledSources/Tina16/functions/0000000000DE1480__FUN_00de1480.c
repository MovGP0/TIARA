/* Ghidra address: 00de1480 */
/* Ghidra symbol: FUN_00de1480 */


undefined8 FUN_00de1480(undefined8 param_1,undefined4 *param_2,float *param_3,uint param_4)

{
  int iVar1;
  undefined4 uVar2;
  
  if ((param_4 & 4) == 0) {
    uVar2 = FUN_0040c770(((double)*param_3 * 2540.0) /
                         (double)*(int *)(*(longlong *)PTR_DAT_02005950 + 0x98));
    *param_2 = uVar2;
    uVar2 = FUN_0040c770(((double)param_3[1] * 2540.0) /
                         (double)*(int *)(*(longlong *)PTR_DAT_02005950 + 0x98));
    param_2[1] = uVar2;
  }
  else {
    iVar1 = thunk_FUN_03f3ed25(*param_2,*(undefined4 *)(*(longlong *)PTR_DAT_02005950 + 0x98),0x9ec)
    ;
    *param_3 = (float)iVar1;
    iVar1 = thunk_FUN_03f3ed25(param_2[1],*(undefined4 *)(*(longlong *)PTR_DAT_02005950 + 0x98),
                               0x9ec);
    param_3[1] = (float)iVar1;
  }
  return 0;
}

