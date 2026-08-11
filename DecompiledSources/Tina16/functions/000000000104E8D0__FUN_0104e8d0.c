/* Ghidra address: 0104e8d0 */
/* Ghidra symbol: FUN_0104e8d0 */


void FUN_0104e8d0(longlong param_1,undefined8 param_2,undefined4 param_3,undefined2 param_4,
                 undefined4 param_5,undefined4 param_6)

{
  longlong *plVar1;
  char cVar2;
  undefined4 uVar3;
  int iVar4;
  undefined8 uVar5;
  ulonglong uVar6;
  undefined8 in_stack_ffffffffffffffa8;
  undefined1 *puVar7;
  undefined8 in_stack_ffffffffffffffb0;
  undefined1 *puVar9;
  undefined8 local_40;
  char local_31;
  undefined1 local_30 [4];
  undefined1 local_2c [4];
  undefined4 uVar8;
  undefined4 uVar10;
  
  uVar10 = (undefined4)((ulonglong)in_stack_ffffffffffffffb0 >> 0x20);
  uVar8 = (undefined4)((ulonglong)in_stack_ffffffffffffffa8 >> 0x20);
  local_40 = FUN_015fd610(param_5,param_6);
  FUN_00f654e0(*(undefined8 *)(param_1 + 0x980),&local_40);
  if (*(int *)(param_1 + 0x918) == 1) {
    FUN_00801e40(param_1,*(undefined8 *)(param_1 + 0x7a0));
    if ((char)param_3 == '\x01') {
      uVar5 = FUN_00f62a60(*(undefined8 *)(param_1 + 0x980));
      puVar7 = local_2c;
      puVar9 = local_30;
      uVar5 = FUN_00f74ae0(uVar5,param_5,param_6,&local_31,puVar7,puVar9);
      uVar10 = (undefined4)((ulonglong)puVar9 >> 0x20);
      uVar8 = (undefined4)((ulonglong)puVar7 >> 0x20);
      *(undefined8 *)(param_1 + 0x938) = uVar5;
      if ((*(longlong *)(param_1 + 0x938) != 0) && (local_31 == '\x02')) {
        uVar3 = FUN_00664d10(*(undefined8 *)PTR_DAT_020054d8);
        uVar6 = FUN_00664d10(*(undefined8 *)PTR_DAT_020054d8);
        plVar1 = *(longlong **)(*(longlong *)(param_1 + 0x928) + 0x4e0);
        (**(code **)(*plVar1 + 0xa8))(plVar1,uVar3,uVar6 >> 0x20);
      }
    }
  }
  iVar4 = FUN_00f64020(*(undefined8 *)(param_1 + 0x980),param_2,param_3,param_4,
                       CONCAT44(uVar8,param_5),CONCAT44(uVar10,param_6));
  if (iVar4 == 1) {
    FUN_0104e630(param_1);
  }
  cVar2 = FUN_00f629a0(*(undefined8 *)(param_1 + 0x980));
  if (cVar2 != '\0') {
    FUN_01053e80(param_1,1);
  }
  return;
}

