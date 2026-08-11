/* Ghidra address: 0058c8f0 */
/* Ghidra symbol: FUN_0058c8f0 */


void FUN_0058c8f0(longlong *param_1,undefined8 *param_2,undefined8 param_3)

{
  int iVar1;
  int iVar2;
  code *pcVar3;
  undefined4 local_48 [8];
  
  iVar2 = FUN_0058c240(*(undefined8 *)*param_2);
  FUN_0058c6a0(*(undefined8 *)*param_2,param_3,local_48);
  pcVar3 = (code *)param_2[2];
  if (((ulonglong)pcVar3 & 0xff00000000000000) == 0xff00000000000000) {
    FUN_00409a70(local_48,(longlong)param_1 + ((ulonglong)pcVar3 & 0xffffffffffffff),(longlong)iVar2
                );
  }
  else {
    if (((ulonglong)pcVar3 & 0xff00000000000000) == 0xfe00000000000000) {
      pcVar3 = *(code **)(*param_1 + ((ulonglong)pcVar3 & 0xffff));
    }
    iVar1 = *(int *)(param_2 + 4);
    if (iVar1 == -0x80000000) {
      if (iVar2 < 5) {
        (*pcVar3)(param_1,local_48[0]);
      }
      else {
        (*pcVar3)(param_1,local_48);
      }
    }
    else if (iVar2 < 5) {
      (*pcVar3)(param_1,iVar1,local_48[0]);
    }
    else {
      (*pcVar3)(param_1,iVar1,local_48);
    }
  }
  return;
}

