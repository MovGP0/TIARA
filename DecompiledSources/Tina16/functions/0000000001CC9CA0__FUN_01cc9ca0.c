/* Ghidra address: 01cc9ca0 */
/* Ghidra symbol: FUN_01cc9ca0 */


ulonglong FUN_01cc9ca0(longlong param_1,double *param_2,undefined8 *param_3)

{
  int iVar1;
  int iVar2;
  undefined8 unaff_R13;
  undefined8 uVar3;
  double local_48;
  double local_40;
  double local_38;
  double local_30;
  
  iVar1 = *(int *)(param_1 + 0x24);
  iVar2 = *(int *)(param_1 + 0x28);
  if (iVar1 == iVar2 + -1) {
    (**(code **)(**(longlong **)(param_1 + 0x18) + 0x18))
              (*(longlong **)(param_1 + 0x18),&local_30,8);
    (**(code **)(**(longlong **)(param_1 + 0x18) + 0x48))
              (*(longlong **)(param_1 + 0x18),0xfffffff8,1);
    *(int *)(param_1 + 0x24) = *(int *)(param_1 + 0x24) + 1;
    *param_2 = local_30;
    *param_3 = *(undefined8 *)(param_1 + 0x80);
  }
  else if (iVar1 != iVar2) {
    (**(code **)(**(longlong **)(param_1 + 0x18) + 0x18))
              (*(longlong **)(param_1 + 0x18),&local_30,8);
    (**(code **)(**(longlong **)(param_1 + 0x18) + 0x48))
              (*(longlong **)(param_1 + 0x18),*(undefined4 *)(param_1 + 0x30),1);
    (**(code **)(**(longlong **)(param_1 + 0x18) + 0x18))
              (*(longlong **)(param_1 + 0x18),&local_40,8);
    (**(code **)(**(longlong **)(param_1 + 0x18) + 0x48))
              (*(longlong **)(param_1 + 0x18),*(undefined4 *)(param_1 + 0x34),1);
    (**(code **)(**(longlong **)(param_1 + 0x18) + 0x18))
              (*(longlong **)(param_1 + 0x18),&local_38,8);
    (**(code **)(**(longlong **)(param_1 + 0x18) + 0x48))
              (*(longlong **)(param_1 + 0x18),*(undefined4 *)(param_1 + 0x30),1);
    (**(code **)(**(longlong **)(param_1 + 0x18) + 0x18))
              (*(longlong **)(param_1 + 0x18),&local_48,8);
    (**(code **)(**(longlong **)(param_1 + 0x18) + 0x48))
              (*(longlong **)(param_1 + 0x18),-0x10 - *(int *)(param_1 + 0x30),1);
    *(int *)(param_1 + 0x24) = *(int *)(param_1 + 0x24) + 1;
    *param_2 = local_30;
    uVar3 = FUN_00c43b60(local_48 - local_40,local_38 - local_30);
    *param_3 = uVar3;
    *(undefined8 *)(param_1 + 0x80) = *param_3;
  }
  return CONCAT71((int7)((ulonglong)unaff_R13 >> 8),iVar1 != iVar2) & 0xffffffff;
}

