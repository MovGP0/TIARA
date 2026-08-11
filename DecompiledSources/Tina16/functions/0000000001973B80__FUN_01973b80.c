/* Ghidra address: 01973b80 */
/* Ghidra symbol: FUN_01973b80 */


undefined8 FUN_01973b80(longlong param_1,undefined8 param_2)

{
  char cVar1;
  int iVar2;
  undefined8 uVar3;
  undefined8 in_stack_00000030;
  undefined8 local_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 local_b0;
  undefined8 local_a8;
  undefined8 local_a0;
  undefined8 local_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 local_70;
  undefined8 local_68;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 local_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 local_20;
  
  local_a0 = 0;
  local_a8 = 0;
  local_b0 = 0;
  local_c8 = 0;
  uStack_c0 = 0;
  uStack_b8 = 0;
  local_90 = 0;
  uStack_88 = 0;
  uStack_80 = 0;
  local_98 = 0;
  local_68 = 0;
  local_70 = 0;
  local_78 = 0;
  local_60 = 0;
  uStack_58 = 0;
  uStack_50 = 0;
  local_40 = 0;
  uStack_38 = 0;
  uStack_30 = 0;
  local_48 = 0;
  local_20 = 0;
  FUN_0046cb70(&local_40,in_stack_00000030,1,&DAT_01973fa4);
  FUN_00467e90(&local_48,&local_40);
  cVar1 = FUN_01973400(param_1,local_48,param_2);
  if (cVar1 != '\0') goto LAB_01973eb1;
  FUN_0046cb70(&local_60,in_stack_00000030,1,&DAT_01973fa4);
  FUN_0046c3f0(&local_20,&local_60);
  iVar2 = FUN_004170c0(&DAT_01973fb4,local_20,1);
  if (iVar2 == 0) {
LAB_01973dd5:
    if (*(longlong *)(DAT_02110720 + 0x38) == 0) {
      if (*(char *)(*(longlong *)(param_1 + 0x1a8) + 0x33) == '\0') {
        uVar3 = FUN_0180bfb0();
        FUN_01809b60(uVar3,&local_a8,L"clUnknownVar");
        FUN_0046cb70(&local_c8,in_stack_00000030,1,&DAT_01973fa4);
        FUN_0046c3f0(&local_b0,&local_c8);
        FUN_00416cd0(&local_a0,3,local_a8,&LAB_01974054,local_b0);
        (**(code **)(**(longlong **)(param_1 + 0x1b0) + 0x78))
                  (*(longlong **)(param_1 + 0x1b0),local_a0);
      }
      else {
        FUN_0046cb70(param_2,in_stack_00000030,1,&DAT_01973fa4);
      }
    }
    else {
      (**(code **)(DAT_02110720 + 0x38))
                (*(undefined8 *)(DAT_02110720 + 0x40),param_2,in_stack_00000030);
    }
  }
  else {
    FUN_00416dc0(&local_78,local_20,1,iVar2 + -1);
    FUN_0043ea00(&local_70,local_78);
    FUN_0043e130(&local_68,local_70);
    FUN_00414b50(&local_20,local_68);
    iVar2 = FUN_00416db0(local_20,&DAT_01973fc4);
    if (iVar2 != 0) {
      iVar2 = FUN_00416db0(local_20,&DAT_01973fd8);
      if (iVar2 != 0) {
        iVar2 = FUN_00416db0(local_20,&DAT_01973fec);
        if (iVar2 != 0) {
          iVar2 = FUN_00416db0(local_20,&DAT_01974000);
          if (iVar2 != 0) {
            iVar2 = FUN_00416db0(local_20,L"COUNT");
            if (iVar2 != 0) goto LAB_01973dd5;
          }
        }
      }
    }
    FUN_0046cb70(&local_90,in_stack_00000030,1,&DAT_01973fa4);
    FUN_00467e90(&local_98,&local_90);
    FUN_01970cf0(param_1,param_2,local_98,0);
  }
LAB_01973eb1:
  FUN_00460ba0(&local_c8);
  FUN_00414560(&local_b0,4);
  FUN_00460ba0(&local_90);
  FUN_00414560(&local_78,3);
  FUN_00460ba0(&local_60);
  FUN_00414480(&local_48);
  FUN_00460ba0(&local_40);
  FUN_00414480(&local_20);
  return param_2;
}

