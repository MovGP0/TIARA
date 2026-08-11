/* Ghidra address: 0060c4e0 */
/* Ghidra symbol: FUN_0060c4e0 */


void FUN_0060c4e0(longlong *param_1,int param_2,int param_3)

{
  longlong lVar1;
  longlong lVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined8 local_a0;
  int local_98;
  int local_7c;
  int local_78;
  
  FUN_0060a460(param_1);
  lVar1 = param_1[0xc];
  if ((*(int *)(lVar1 + 0x44) != param_2) || (*(int *)(lVar1 + 0x48) != param_3)) {
    puVar3 = (undefined8 *)(lVar1 + 0x40);
    puVar4 = &local_a0;
    for (lVar2 = 0xd; lVar2 != 0; lVar2 = lVar2 + -1) {
      *puVar4 = *puVar3;
      puVar3 = puVar3 + 1;
      puVar4 = puVar4 + 1;
    }
    local_a0._4_4_ = param_2;
    local_98 = param_3;
    local_7c = param_2;
    local_78 = param_3;
    FUN_00608f90(param_1,*(undefined8 *)(lVar1 + 0x10),*(undefined8 *)(lVar1 + 0x20),&local_a0);
    (**(code **)(*param_1 + 0x20))(param_1,param_1);
  }
  return;
}

