/* Ghidra address: 00ebdf60 */
/* Ghidra symbol: FUN_00ebdf60 */


void FUN_00ebdf60(longlong *param_1,undefined8 param_2,undefined1 *param_3,longlong *param_4)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined8 uVar4;
  undefined8 local_30;
  undefined1 local_28 [16];
  
  local_30 = 0;
  if (*param_4 == param_1[0xda]) {
    iVar1 = FUN_0068c230(*param_4,param_4 + 6,1);
    if (iVar1 < 0) {
      *param_3 = 0;
    }
    else {
      (**(code **)(**(longlong **)(*param_4 + 0x4a0) + 0x18))
                (*(longlong **)(*param_4 + 0x4a0),&local_30,iVar1);
      uVar4 = FUN_007ffbe0(param_1);
      iVar2 = FUN_005fdff0(uVar4,local_30);
      iVar3 = (**(code **)(*param_1 + 0x1a0))(param_1,10);
      if (*(int *)(*param_4 + 0x98) < iVar2 + iVar3 + 5) {
        FUN_00414ad0(param_4 + 8,local_30);
        FUN_0068c2d0(*param_4,local_28,iVar1);
        *(undefined4 *)(param_4 + 7) = 100;
        *param_3 = 1;
      }
      else {
        *param_3 = 0;
      }
    }
  }
  FUN_00414480(&local_30);
  return;
}

