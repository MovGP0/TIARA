/* Ghidra address: 019bab40 */
/* Ghidra symbol: FUN_019bab40 */


void FUN_019bab40(longlong param_1,undefined8 param_2,char param_3)

{
  longlong *plVar1;
  char cVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  int local_30;
  int local_2c;
  
  if (*(longlong *)(param_1 + 0x78) != 0) {
    uVar3 = thunk_FUN_03b57162(param_2);
    thunk_FUN_03b7e726(param_2,&local_30);
    thunk_FUN_0411ff81(param_2,local_30 - *(int *)(param_1 + 0x90),
                       local_2c - *(int *)(param_1 + 0x94),0);
    uVar4 = FUN_0064d0b0(*(undefined8 *)(param_1 + 0x78));
    uVar5 = FUN_0064d120(*(undefined8 *)(param_1 + 0x78));
    FUN_00428be0(param_2,0,0,uVar4,uVar5);
    FUN_0064fca0(*(undefined8 *)(param_1 + 0x78),0x14,param_2,0);
    FUN_0064fca0(*(undefined8 *)(param_1 + 0x78),0x318,param_2,4);
    thunk_FUN_0402759f(param_2,uVar3);
    if (param_3 != '\0') {
      plVar1 = *(longlong **)(param_1 + 0x78);
      cVar2 = FUN_004113d0(plVar1,&PTR_FUN_00642f10);
      if (cVar2 == '\0') {
        cVar2 = FUN_004113d0(plVar1,&PTR_FUN_007ee548);
        if ((cVar2 == '\0') && ((*(ushort *)(param_1 + 0x34) & 0x10) == 0)) {
          (**(code **)(*plVar1 + 0x180))(plVar1);
        }
      }
    }
  }
  return;
}

