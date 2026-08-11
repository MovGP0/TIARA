/* Ghidra address: 00d590e0 */
/* Ghidra symbol: FUN_00d590e0 */


void FUN_00d590e0(longlong *param_1,longlong *param_2)

{
  int iVar1;
  int iVar2;
  undefined8 uVar3;
  undefined8 local_30 [2];
  int local_20;
  int local_1c;
  
  local_30[0] = 0;
  FUN_00d57480(local_30,param_2);
  FUN_00414ad0(param_1 + 0xe,local_30[0]);
  (**(code **)(*param_2 + 0x18))(param_2,&local_1c,4);
  (**(code **)(*param_2 + 0x18))(param_2,&local_20,4);
  if (0 < local_20) {
    (**(code **)(*param_1 + 0xe0))(param_1,local_1c,local_20);
    iVar1 = (**(code **)(*param_1 + 0x60))(param_1);
    if (iVar1 == local_1c) {
      iVar1 = (**(code **)(*param_1 + 0x48))(param_1);
      if (iVar1 == local_20) {
        iVar1 = (**(code **)(*param_1 + 0x48))(param_1);
        uVar3 = FUN_0060a050(param_1,iVar1 + -1);
        iVar1 = (**(code **)(*param_1 + 0x60))(param_1);
        iVar2 = (**(code **)(*param_1 + 0x48))(param_1);
        (**(code **)(*param_2 + 0x18))(param_2,uVar3,iVar1 * iVar2 * 4);
      }
    }
  }
  FUN_00414480(local_30);
  return;
}

