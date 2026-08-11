/* Ghidra address: 00d4aa60 */
/* Ghidra symbol: FUN_00d4aa60 */


void FUN_00d4aa60(longlong param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  char cVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined8 in_stack_ffffffffffffff98;
  undefined4 uVar8;
  ulonglong uVar7;
  ulonglong in_stack_ffffffffffffffa0;
  undefined1 local_44 [4];
  undefined4 local_40;
  undefined1 local_38 [24];
  
  uVar8 = (undefined4)((ulonglong)in_stack_ffffffffffffff98 >> 0x20);
  uVar5 = FUN_00787bc0(*(undefined8 *)(param_1 + 0x18));
  uVar6 = FUN_00787ba0(*(undefined8 *)(param_1 + 0x18));
  uVar7 = CONCAT44(uVar8,uVar6);
  FUN_004238d0(local_38,0,0,uVar5,uVar7);
  thunk_FUN_04176532(local_38,2,2);
  local_44[0] = 0x1a;
  local_40 = 0;
  uVar1 = FUN_00781840();
  cVar4 = FUN_007794c0(uVar1,local_44);
  if (cVar4 != '\0') {
    uVar2 = FUN_00781840();
    uVar1 = *(undefined8 *)(param_1 + 8);
    uVar3 = FUN_005ffa40(param_2);
    in_stack_ffffffffffffffa0 = 0;
    FUN_00778e90(uVar2,uVar1,uVar3,local_44,uVar7 & 0xffffffffffffff00,0);
  }
  uVar1 = FUN_00781840();
  uVar2 = FUN_005ffa40(param_2);
  FUN_00778dc0(uVar1,uVar2,local_44,local_38,0,in_stack_ffffffffffffffa0 & 0xffffffff00000000);
  return;
}

