/* Ghidra address: 006e47d0 */
/* Ghidra symbol: FUN_006e47d0 */


void FUN_006e47d0(longlong *param_1,longlong param_2)

{
  char cVar1;
  undefined4 uVar2;
  longlong lVar3;
  undefined8 uVar4;
  code *pcVar5;
  undefined8 local_60;
  undefined1 local_58 [20];
  int local_44;
  int local_40;
  undefined4 local_3c;
  undefined8 local_38;
  undefined8 local_30;
  
  if ((*(ushort *)((longlong)param_1 + 0x34) & 0x10) == 0) {
    (**(code **)(*param_1 + 600))(param_1);
  }
  cVar1 = FUN_004983c0(*(undefined4 *)(param_2 + 0x10));
  if (cVar1 != '\0') {
    lVar3 = FUN_006e2530(param_1);
    if (lVar3 != 0) {
      uVar4 = FUN_006e2530(param_1);
      FUN_006ddff0(uVar4,local_58,1);
      local_60 = FUN_00423ba0(local_58);
      uVar4 = FUN_0064d1f0(param_1,&local_60);
      local_38._0_2_ = (undefined2)uVar4;
      local_38._4_2_ = (undefined2)((ulonglong)uVar4 >> 0x20);
      local_3c = CONCAT22(local_38._4_2_,(undefined2)local_38);
      *(undefined4 *)(param_2 + 0x10) = local_3c;
      local_38 = uVar4;
    }
  }
  FUN_0065dd90(param_1,param_2);
  if ((*(ushort *)((longlong)param_1 + 0x34) & 8) == 0) {
    local_44 = (int)*(short *)(param_2 + 0x10);
    local_40 = (int)*(short *)(param_2 + 0x12);
    local_30 = FUN_0064d3a0(param_1,&local_44);
    uVar2 = FUN_007f9a50();
    pcVar5 = (code *)FUN_00411550(param_1,0xffd1);
    (*pcVar5)(param_1,1,uVar2,local_30 & 0xffffffff,local_30._4_4_);
  }
  return;
}

