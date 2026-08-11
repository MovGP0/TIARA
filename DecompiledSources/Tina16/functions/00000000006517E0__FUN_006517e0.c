/* Ghidra address: 006517e0 */
/* Ghidra symbol: FUN_006517e0 */


undefined8 FUN_006517e0(longlong *param_1,ulonglong *param_2)

{
  ulonglong uVar1;
  ulonglong uVar2;
  longlong lVar3;
  undefined8 uVar4;
  int local_38;
  int local_34;
  int local_30;
  int local_2c;
  
  uVar1 = *param_2;
  uVar2 = param_2[1];
  uVar4 = 0;
  lVar3 = (**(code **)(*param_1 + 0x100))(param_1);
  if (lVar3 != 0) {
    lVar3 = (**(code **)(*param_1 + 0x100))(param_1);
    if (lVar3 != *param_1) {
      lVar3 = (**(code **)(*param_1 + 0x100))(param_1);
      uVar4 = (**(code **)(lVar3 + 0x78))(lVar3,1,*(undefined8 *)PTR_DAT_02004030);
      local_34 = (int)(uVar1 >> 0x20);
      FUN_0064cb90(uVar4,local_34);
      local_38 = (int)uVar1;
      FUN_0064cb30(uVar4,uVar1 & 0xffffffff);
      local_30 = (int)uVar2;
      FUN_0064d0e0(uVar4,local_30 - local_38);
      local_2c = (int)(uVar2 >> 0x20);
      FUN_0064d150(uVar4,local_2c - local_34);
    }
  }
  return uVar4;
}

