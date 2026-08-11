/* Ghidra address: 00d3f430 */
/* Ghidra symbol: FUN_00d3f430 */


undefined8 FUN_00d3f430(longlong param_1)

{
  char cVar1;
  longlong *plVar2;
  undefined8 uVar3;
  undefined4 uVar4;
  undefined8 unaff_RSI;
  undefined7 uVar5;
  undefined8 in_stack_ffffffffffffffa8;
  undefined1 local_3c [12];
  undefined1 local_30 [16];
  undefined8 local_20;
  
  uVar4 = (undefined4)((ulonglong)in_stack_ffffffffffffffa8 >> 0x20);
  local_20 = 0;
  plVar2 = (longlong *)FUN_00781840();
  cVar1 = (**(code **)(*plVar2 + 0x90))(plVar2);
  if (cVar1 != '\0') {
    FUN_004238d0(local_30,0,0,*(undefined4 *)(param_1 + 0x108),
                 CONCAT44(uVar4,*(undefined4 *)(param_1 + 0x10c)));
    cVar1 = FUN_00d3f400(param_1);
    uVar5 = (undefined7)((ulonglong)unaff_RSI >> 8);
    if (cVar1 == '\0') {
      uVar4 = (undefined4)CONCAT71(uVar5,2);
    }
    else {
      uVar4 = (undefined4)CONCAT71(uVar5,5);
    }
    thunk_FUN_0416f828(*(undefined8 *)(param_1 + 0x100));
    plVar2 = (longlong *)FUN_00781840();
    (**(code **)(*plVar2 + 0x228))(plVar2,local_3c,uVar4);
    uVar3 = FUN_00781840();
    cVar1 = FUN_00779240(uVar3,0,local_3c,local_30,&local_20);
    if (cVar1 == '\0') {
      *(undefined8 *)(param_1 + 0x100) = 0;
    }
  }
  return local_20;
}

