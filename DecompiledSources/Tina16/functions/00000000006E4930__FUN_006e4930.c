/* Ghidra address: 006e4930 */
/* Ghidra symbol: FUN_006e4930 */


void FUN_006e4930(longlong *param_1,longlong param_2)

{
  uint uVar1;
  char cVar2;
  undefined8 uVar3;
  uint uVar4;
  undefined1 auStack_78 [40];
  undefined1 *local_50;
  ushort local_3a;
  undefined4 local_38;
  undefined8 local_34;
  undefined4 local_2c;
  undefined1 local_28 [8];
  longlong local_20;
  
  local_50 = auStack_78;
  *(undefined1 *)(param_1 + 0x97) = 0;
  param_1[0x99] = 0;
  FUN_00650a80(param_1,param_2);
  cVar2 = FUN_0064c470(param_1);
  if ((cVar2 == '\x01') && (*(char *)((longlong)param_1 + 0xff) == '\0')) {
    (**(code **)(*param_1 + 600))(param_1);
    if ((char)param_1[0x97] == '\0') {
      thunk_FUN_03cc0d62(local_28);
      uVar3 = FUN_0064d3a0(param_1,local_28);
      local_34._0_2_ = (short)uVar3;
      local_34._4_2_ = (ushort)((ulonglong)uVar3 >> 0x20);
      local_38 = CONCAT22(local_34._4_2_,(short)local_34);
      local_2c = local_38;
      local_3a = local_34._4_2_;
      uVar1 = (uint)local_34._4_2_;
      uVar4 = (uint)(short)local_34;
      local_34 = uVar3;
      FUN_0064fca0(param_1,0x202,0,uVar4 | uVar1 << 0x10);
    }
    else {
      local_20 = FUN_006e21e0(param_1,(longlong)*(short *)(param_2 + 0x10),
                              (longlong)*(short *)(param_2 + 0x12));
      if (local_20 != 0) {
        FUN_006dd300(local_20,1);
        FUN_006dd110(local_20,1);
        FUN_0064e9e0(param_1,0,0xffffffff);
      }
    }
  }
  param_1[0x99] = 0;
  return;
}

