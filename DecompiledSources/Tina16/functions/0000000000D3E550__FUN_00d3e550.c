/* Ghidra address: 00d3e550 */
/* Ghidra symbol: FUN_00d3e550 */


undefined8 FUN_00d3e550(longlong param_1,undefined8 param_2)

{
  char cVar1;
  longlong *plVar2;
  undefined8 uVar3;
  ulonglong in_stack_ffffffffffffffa8;
  undefined1 local_3c [4];
  int local_38;
  undefined1 local_34 [20];
  
  FUN_004238d0(param_2,0,0,*(undefined4 *)(param_1 + 0x108),
               in_stack_ffffffffffffffa8 & 0xffffffff00000000);
  cVar1 = FUN_00d3f270(param_1);
  if (cVar1 != '\0') {
    if (*(char *)(param_1 + 0xc0) == '\0') {
      cVar1 = FUN_00d3f400(param_1);
      if (cVar1 == '\0') {
        plVar2 = (longlong *)FUN_00781840();
        (**(code **)(*plVar2 + 0x228))(plVar2,local_34,3);
      }
      else {
        plVar2 = (longlong *)FUN_00781840();
        (**(code **)(*plVar2 + 0x228))(plVar2,local_34,6);
      }
    }
    else {
      cVar1 = FUN_00d3f400(param_1);
      if (cVar1 == '\0') {
        plVar2 = (longlong *)FUN_00781840();
        (**(code **)(*plVar2 + 0x228))(plVar2,local_34,2);
      }
      else {
        plVar2 = (longlong *)FUN_00781840();
        (**(code **)(*plVar2 + 0x228))(plVar2,local_34,5);
      }
    }
    uVar3 = FUN_00781840();
    FUN_00779290(uVar3,0,local_34,1,local_3c,0);
    FUN_004238d0(param_2,0,0,*(undefined4 *)(param_1 + 0x108),local_38 + *(int *)(param_1 + 0x114));
  }
  return param_2;
}

