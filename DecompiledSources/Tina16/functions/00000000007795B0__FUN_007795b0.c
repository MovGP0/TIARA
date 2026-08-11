/* Ghidra address: 007795b0 */
/* Ghidra symbol: FUN_007795b0 */


void FUN_007795b0(longlong *param_1,longlong *param_2,char param_3)

{
  char cVar1;
  undefined8 uVar2;
  undefined1 auStack_d8 [32];
  undefined8 local_b8;
  undefined4 local_b0;
  undefined8 local_a0;
  ulonglong uStack_98;
  undefined1 *local_90;
  undefined8 local_80;
  undefined8 local_78;
  undefined1 local_6c [12];
  uint local_60;
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
  local_78 = FUN_0065b870(param_2);
  local_60 = thunk_FUN_04118143(local_78,0xffffffec);
  if ((local_60 & 0x200) != 0) {
    uVar2 = FUN_0065b870(param_2);
    thunk_FUN_03e49910(uVar2,&local_50);
    FUN_00423b50(&local_50,-local_50,-local_4c);
    uVar2 = FUN_0065b870(param_2);
    local_30 = thunk_FUN_0411fe47(uVar2);
    local_40 = CONCAT44(local_4c,local_50);
    local_38 = CONCAT44(local_44,local_48);
    if (param_3 != '\0') {
      local_80 = FUN_0065b870(param_2);
      local_5c = thunk_FUN_04118143(local_80,0xfffffff0);
      if (((local_5c & 0x100000) != 0) && ((local_5c & 0x200000) != 0)) {
        local_58 = (**(code **)(*param_2 + 0x1a0))(param_2,2);
        local_54 = (**(code **)(*param_2 + 0x1a0))(param_2,3);
        FUN_00423b10(&local_40,0xfffffffe,0xfffffffe);
        cVar1 = FUN_0064e970(param_2);
        if (cVar1 == '\0') {
          local_b8 = CONCAT44(local_b8._4_4_,local_38._4_4_);
          FUN_004238d0(&local_a0,(int)local_38 - local_58,local_38._4_4_ - local_54,
                       local_38 & 0xffffffff);
          local_40 = local_a0;
          local_38 = uStack_98;
        }
        else {
          local_b8 = CONCAT44(local_b8._4_4_,local_38._4_4_);
          FUN_004238d0(&local_a0,(int)local_40,local_38._4_4_ - local_54,(int)local_40 + local_58);
          local_40 = local_a0;
          local_38 = uStack_98;
        }
        uVar2 = thunk_FUN_0412b593(0xf);
        thunk_FUN_03984819(local_30,&local_40,uVar2);
      }
    }
    local_b8 = CONCAT44(local_b8._4_4_,local_44 + -2);
    thunk_FUN_041a27b3(local_30,local_50 + 2,local_4c + 2,local_48 + -2);
    (**(code **)(*param_1 + 0x118))(param_1,local_6c,2);
    local_b8 = 0;
    local_b0 = 0;
    FUN_00778dc0(param_1,local_30,local_6c,&local_50);
    uVar2 = FUN_0065b870(param_2);
    thunk_FUN_041a9b5c(uVar2,local_30);
  }
  return;
}

