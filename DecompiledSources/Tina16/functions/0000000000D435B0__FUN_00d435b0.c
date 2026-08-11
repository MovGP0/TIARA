/* Ghidra address: 00d435b0 */
/* Ghidra symbol: FUN_00d435b0 */


void FUN_00d435b0(longlong param_1,undefined8 param_2)

{
  char cVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  longlong *plVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 in_stack_ffffffffffffff98;
  undefined1 local_58 [20];
  undefined4 local_44;
  undefined4 local_40;
  undefined4 local_3c;
  undefined4 local_38;
  undefined1 local_34 [12];
  
  uVar4 = (undefined4)((ulonglong)in_stack_ffffffffffffff98 >> 0x20);
  cVar1 = FUN_00788df0(param_1);
  if (cVar1 != '\0') {
    cVar1 = FUN_00787ad0(*(undefined8 *)(param_1 + 0x18));
    if (cVar1 != '\0') {
      cVar1 = FUN_00788bc0(param_1);
      if (cVar1 == '\0') {
        if (*(char *)(param_1 + 0x60) == '\0') {
          cVar1 = FUN_00787c60(*(undefined8 *)(param_1 + 0x18));
          if (cVar1 == '\0') {
            plVar5 = (longlong *)FUN_00781840();
            (**(code **)(*plVar5 + 0x118))(plVar5,local_34,0x18);
          }
          else {
            plVar5 = (longlong *)FUN_00781840();
            (**(code **)(*plVar5 + 0x118))(plVar5,local_34,0x15);
          }
        }
        else {
          plVar5 = (longlong *)FUN_00781840();
          (**(code **)(*plVar5 + 0x118))(plVar5,local_34,0x16);
        }
      }
      else {
        plVar5 = (longlong *)FUN_00781840();
        (**(code **)(*plVar5 + 0x118))(plVar5,local_34,0x17);
      }
      uVar2 = FUN_00787fa0(*(undefined8 *)(param_1 + 0x18));
      uVar3 = FUN_00787c80(*(undefined8 *)(param_1 + 0x18));
      uVar6 = CONCAT44(uVar4,uVar3);
      FUN_004238d0(&local_44,0,0,uVar2,uVar6);
      uVar4 = (undefined4)((ulonglong)uVar6 >> 0x20);
      thunk_FUN_04176532(&local_44,0xfffffffe,0xfffffffe);
      uVar6 = FUN_005ffa40(param_2);
      uVar7 = CONCAT44(uVar4,local_38);
      thunk_FUN_041a27b3(uVar6,local_44,local_40,local_3c,uVar7);
      uVar3 = (undefined4)((ulonglong)uVar7 >> 0x20);
      uVar6 = FUN_00781840();
      uVar7 = FUN_005ffa40(param_2);
      uVar4 = FUN_00787fa0(*(undefined8 *)(param_1 + 0x18));
      uVar2 = FUN_00787c80(*(undefined8 *)(param_1 + 0x18));
      FUN_004238d0(local_58,0,0,uVar4,CONCAT44(uVar3,uVar2));
      FUN_00778dc0(uVar6,uVar7,local_34,local_58,0,0);
    }
  }
  return;
}

