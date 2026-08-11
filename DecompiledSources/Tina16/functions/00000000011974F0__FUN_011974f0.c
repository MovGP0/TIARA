/* Ghidra address: 011974f0 */
/* Ghidra symbol: FUN_011974f0 */


void FUN_011974f0(longlong *param_1,longlong param_2,undefined4 param_3,int param_4)

{
  bool bVar1;
  int iVar2;
  longlong lVar3;
  longlong local_res10 [3];
  
  local_res10[0] = param_2;
  FUN_00414610(param_2);
  bVar1 = false;
  iVar2 = 0;
  if (local_res10[0] != 0) {
    iVar2 = *(int *)(local_res10[0] + -4);
  }
  if (*(short *)(local_res10[0] + -2 + (longlong)iVar2 * 2) == 10) {
    iVar2 = 0;
    if (local_res10[0] != 0) {
      iVar2 = *(int *)(local_res10[0] + -4);
    }
    FUN_00416dc0(local_res10,local_res10[0],1,iVar2 + -2);
    bVar1 = true;
  }
  (**(code **)(**(longlong **)(param_1[0xd8] + 0x4d8) + 0x78))
            (*(longlong **)(param_1[0xd8] + 0x4d8),local_res10[0]);
  FUN_0064e030(param_1[0xd8],0);
  lVar3 = (longlong)DAT_01f29ce8;
  FUN_00414ad0(&DAT_01f29a88 + lVar3,local_res10[0]);
  (&DAT_01f29c18)[lVar3] = param_3;
  (&DAT_01f299c0)[lVar3] = param_4 + 8;
  iVar2 = DAT_01f29ce8;
  DAT_01f29ce8 = DAT_01f29ce8 + 1;
  if (0x1e < DAT_01f29ce8) {
    DAT_01f29ce8 = iVar2;
  }
  if (bVar1) {
    (**(code **)(**(longlong **)(param_1[0xd8] + 0x4d8) + 0x78))
              (*(longlong **)(param_1[0xd8] + 0x4d8),0);
    lVar3 = (longlong)DAT_01f29ce8;
    FUN_00414480(&DAT_01f29a88 + lVar3);
    (&DAT_01f29c18)[lVar3] = 0;
    (&DAT_01f299c0)[lVar3] = 8;
    iVar2 = DAT_01f29ce8;
    DAT_01f29ce8 = DAT_01f29ce8 + 1;
    if (0x1e < DAT_01f29ce8) {
      DAT_01f29ce8 = iVar2;
    }
  }
  (**(code **)(*param_1 + 0x188))(param_1);
  FUN_00414480(local_res10);
  return;
}

