/* Ghidra address: 015e3e90 */
/* Ghidra symbol: FUN_015e3e90 */


undefined8 * FUN_015e3e90(longlong param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined1 local_49;
  longlong *local_48;
  undefined1 local_3a;
  undefined1 local_39;
  undefined2 local_36;
  undefined2 local_34;
  undefined4 local_32;
  undefined4 uStack_2e;
  short local_2a;
  
  local_2a = *(short *)(param_1 + 0x188) * 8;
  if (local_2a == 0x80) {
    local_49 = 1;
  }
  else if (local_2a == 0xc0) {
    local_49 = 2;
  }
  else if (local_2a == 0x100) {
    local_49 = 3;
  }
  local_3a = 0x41;
  local_39 = 0x45;
  local_36 = 0x9901;
  local_34 = 7;
  uVar1 = FUN_00409570(7);
  local_32 = (undefined4)uVar1;
  uStack_2e = (undefined4)((ulonglong)uVar1 >> 0x20);
  local_48 = (longlong *)FUN_00410e60(&PTR_FUN_0047cbc0,1);
  (**(code **)(*local_48 + 0x20))(local_48,param_1 + 0x1c0,2);
  (**(code **)(*local_48 + 0x20))(local_48,&local_3a,2);
  (**(code **)(*local_48 + 0x20))(local_48,&local_49,1);
  (**(code **)(*local_48 + 0x20))(local_48,param_1 + 0x1c2,2);
  (**(code **)(*local_48 + 0x48))(local_48,0,0);
  (**(code **)(*local_48 + 0x18))(local_48,CONCAT44(uStack_2e,local_32),7);
  (**(code **)(*local_48 + -0x20))(local_48,1);
  *param_2 = CONCAT44(local_32,CONCAT22(local_34,local_36));
  *(undefined4 *)(param_2 + 1) = uStack_2e;
  return param_2;
}

