/* Ghidra address: 01c46880 */
/* Ghidra symbol: FUN_01c46880 */


void FUN_01c46880(longlong param_1,undefined8 param_2,undefined1 *param_3,longlong *param_4)

{
  int iVar1;
  int iVar2;
  undefined8 local_20 [2];
  
  local_20[0] = 0;
  if (*param_4 == *(longlong *)(param_1 + 0x6c0)) {
    iVar1 = FUN_0068c230(*param_4,param_4 + 6,1);
    if (-1 < iVar1) {
      iVar2 = (**(code **)(**(longlong **)(param_1 + 0x6c0) + 0x298))
                        (*(longlong **)(param_1 + 0x6c0));
      if (iVar1 < iVar2 + -1) {
        FUN_004b5390(*(undefined8 *)(param_1 + 0x6e0),local_20,iVar1);
        FUN_00414ad0(param_4 + 8,local_20[0]);
        if (-1 < iVar1) {
          iVar1 = FUN_004170c0(&DAT_01c469b4,param_4[8],1);
          FUN_00416dc0(param_4 + 8,param_4[8],1,iVar1 + -1);
        }
        *(undefined4 *)(param_4 + 7) = 100;
        *param_3 = 1;
        goto code_r0x01c46975;
      }
    }
    *param_3 = 0;
  }
code_r0x01c46975:
  FUN_00414480(local_20);
  return;
}

