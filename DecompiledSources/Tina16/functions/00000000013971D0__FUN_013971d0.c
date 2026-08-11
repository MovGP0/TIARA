/* Ghidra address: 013971d0 */
/* Ghidra symbol: FUN_013971d0 */


void FUN_013971d0(longlong param_1,undefined8 param_2,undefined1 param_3,char param_4,
                 undefined4 param_5,undefined4 param_6,undefined1 param_7,undefined1 param_8)

{
  int iVar1;
  int iVar2;
  double unaff_XMM6_Qa;
  double dVar3;
  double local_48;
  double local_40;
  
  if (*(longlong *)(param_1 + 0x4c0) != 0) {
    iVar1 = FUN_017d1380(*(longlong *)(param_1 + 0x4c0));
    dVar3 = 0.0;
    unaff_XMM6_Qa = 0.0;
    iVar1 = iVar1 + -1;
    iVar2 = 1;
    if (0 < iVar1) {
      do {
        FUN_017d13d0(&local_48,param_1,iVar2,param_2,param_3,param_5,param_6,param_7,param_8);
        unaff_XMM6_Qa = dVar3 + local_48 * local_48 + local_40 * local_40;
        iVar2 = iVar2 + 1;
        iVar1 = iVar1 + -1;
        dVar3 = unaff_XMM6_Qa;
      } while (iVar1 != 0);
    }
  }
  if (param_4 != '\0') {
    unaff_XMM6_Qa = unaff_XMM6_Qa / 2.0;
  }
  FUN_0040c760(unaff_XMM6_Qa);
  return;
}

