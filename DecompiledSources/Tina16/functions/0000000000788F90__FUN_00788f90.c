/* Ghidra address: 00788f90 */
/* Ghidra symbol: FUN_00788f90 */


void FUN_00788f90(longlong *param_1,longlong param_2,char param_3)

{
  char cVar1;
  undefined8 uVar2;
  ulonglong uVar3;
  longlong *plVar4;
  undefined1 auStack_d8 [32];
  undefined8 local_b8;
  undefined4 local_b0;
  undefined8 local_a0;
  ulonglong uStack_98;
  undefined1 *local_90;
  undefined8 local_88;
  undefined8 local_80;
  int local_78;
  int local_74;
  int local_70;
  int local_6c;
  undefined1 local_68 [12];
  uint local_5c;
  int local_58;
  int local_54;
  int local_50;
  int local_4c;
  int local_48;
  int local_44;
  undefined8 local_40;
  undefined8 local_38;
  undefined8 local_30;
  
  local_90 = auStack_d8;
  (**(code **)*param_1)(param_1,&local_78);
  local_80 = *(undefined8 *)(param_2 + 0x18);
  uVar2 = thunk_FUN_04118143(local_80,0xffffffec);
  FUN_00788020(param_2,uVar2);
  uVar3 = FUN_00787d70(param_2);
  if ((uVar3 & 0x200) != 0) {
    thunk_FUN_03e49910(*(undefined8 *)(param_2 + 0x18),&local_50);
    FUN_00423b50(&local_50,-local_50,-local_4c);
    local_30 = thunk_FUN_0411fe47(*(undefined8 *)(param_2 + 0x18));
    local_40 = CONCAT44(local_4c,local_50);
    local_38 = CONCAT44(local_44,local_48);
    if (param_3 != '\0') {
      local_88 = *(undefined8 *)(param_2 + 0x18);
      local_5c = thunk_FUN_04118143(local_88,0xfffffff0);
      if (((local_5c & 0x100000) != 0) && ((local_5c & 0x200000) != 0)) {
        local_58 = (**(code **)(*param_1 + 0x50))(param_1,2);
        local_54 = (**(code **)(*param_1 + 0x50))(param_1,3);
        FUN_00423b10(&local_40,0xfffffffe,0xfffffffe);
        cVar1 = FUN_00788eb0(param_1);
        if (cVar1 == '\0') {
          local_b8 = CONCAT44(local_b8._4_4_,local_38._4_4_);
          FUN_004238d0(&local_a0,(int)local_40,local_38._4_4_ - local_54,(int)local_40 + local_58);
          local_40 = local_a0;
          local_38 = uStack_98;
        }
        else {
          local_b8 = CONCAT44(local_b8._4_4_,local_38._4_4_);
          FUN_004238d0(&local_a0,(int)local_38 - local_58,local_38._4_4_ - local_54,
                       local_38 & 0xffffffff);
          local_40 = local_a0;
          local_38 = uStack_98;
        }
        uVar2 = thunk_FUN_0412b593(0xf);
        thunk_FUN_03984819(local_30,&local_40,uVar2);
      }
    }
    local_b8 = CONCAT44(local_b8._4_4_,local_44 - local_6c);
    thunk_FUN_041a27b3(local_30,local_50 + local_78,local_4c + local_74,local_48 - local_70);
    plVar4 = (longlong *)FUN_00781840();
    (**(code **)(*plVar4 + 0x118))(plVar4,local_68,2);
    uVar2 = FUN_00781840();
    local_b8 = 0;
    local_b0 = 0;
    FUN_00778dc0(uVar2,local_30,local_68,&local_50);
    thunk_FUN_041a9b5c(*(undefined8 *)(param_2 + 0x18),local_30);
  }
  return;
}

