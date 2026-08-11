/* Ghidra address: 007167d0 */
/* Ghidra symbol: FUN_007167d0 */


void FUN_007167d0(longlong param_1,undefined8 param_2,undefined8 param_3,longlong param_4)

{
  longlong lVar1;
  char cVar2;
  int iVar3;
  undefined8 uVar4;
  uint uVar5;
  longlong *local_28;
  undefined8 local_20;
  
  local_20 = 0;
  local_28 = (longlong *)0x0;
  if (param_4 != 0) {
    FUN_00414ad0(param_1 + 0x40,param_4);
  }
  if (*(int *)(*(longlong *)(param_1 + 0x28) + 0x10) == 0) {
    uVar4 = FUN_0044d710(&PTR_FUN_00712030,1,PTR_PTR_020022e8);
    FUN_004134c0(uVar4);
  }
  uVar5 = 0;
  if (-1 < *(int *)(*(longlong *)(param_1 + 0x28) + 0x10) + -1) {
    do {
      lVar1 = *(longlong *)(param_1 + 0x28);
      if (*(uint *)(lVar1 + 0x10) <= uVar5) {
        FUN_00594f90();
      }
      FUN_0041b840(&local_20,
                   *(undefined8 *)
                    (*(longlong *)(*(longlong *)(lVar1 + 8) + (longlong)(int)uVar5 * 8) + 8));
      uVar4 = FUN_0041b800(&local_28);
      cVar2 = FUN_00452340(local_20,&LAB_00716948,uVar4);
      if (cVar2 != '\0') {
        cVar2 = (**(code **)(*local_28 + 0x60))(local_28,param_2);
        if (cVar2 != '\0') {
          (**(code **)(*local_28 + 0x90))(local_28,param_2,param_3);
          break;
        }
      }
      uVar4 = FUN_0044d710(&PTR_FUN_00712030,1,PTR_PTR_020022e8);
      iVar3 = FUN_004134c0(uVar4);
      uVar5 = uVar5 + 1;
    } while (iVar3 != 1);
  }
  FUN_0041b800(&local_28);
  FUN_0041b800(&local_20);
  return;
}

