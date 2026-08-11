/* Ghidra address: 008196c0 */
/* Ghidra symbol: FUN_008196c0 */


void FUN_008196c0(longlong param_1,undefined8 param_2)

{
  char cVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  longlong *plVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 in_stack_ffffffffffffffa8;
  undefined4 uVar7;
  undefined1 local_44 [16];
  undefined1 local_34 [4];
  undefined4 local_30;
  
  uVar7 = (undefined4)((ulonglong)in_stack_ffffffffffffffa8 >> 0x20);
  plVar4 = (longlong *)FUN_00781840();
  cVar1 = (**(code **)(*plVar4 + 0x90))(plVar4);
  if (cVar1 != '\0') {
    local_34[0] = 0x1f;
    local_30 = 0;
    uVar2 = FUN_0064d0b0(*(undefined8 *)(param_1 + 0x10));
    uVar3 = FUN_0064d120(*(undefined8 *)(param_1 + 0x10));
    FUN_004238d0(local_44,0,0,uVar2,CONCAT44(uVar7,uVar3));
    uVar5 = FUN_00781840();
    uVar6 = FUN_005ffa40(param_2);
    FUN_00778dc0(uVar5,uVar6,local_34,local_44,0,0);
  }
  return;
}

