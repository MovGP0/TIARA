/* Ghidra address: 017f4d80 */
/* Ghidra symbol: FUN_017f4d80 */


void FUN_017f4d80(undefined8 param_1,longlong *param_2,undefined8 param_3,undefined8 *param_4)

{
  char cVar1;
  undefined8 uVar2;
  undefined1 auStack_78 [32];
  int local_58;
  int local_54;
  undefined8 local_48;
  undefined8 uStack_40;
  int local_38;
  int local_34;
  undefined4 local_30;
  undefined4 local_2c;
  
  local_48 = *param_4;
  uStack_40 = param_4[1];
  uVar2 = FUN_0198d430(param_3);
  local_2c = (**(code **)(*param_2 + 0x70))(param_2,uVar2);
  uVar2 = FUN_0198d430(param_3);
  local_30 = (**(code **)(*param_2 + 0x78))(param_2,uVar2);
  uVar2 = FUN_0198d430(param_3);
  (**(code **)(*param_2 + 0x68))(param_2,uVar2,&local_58);
  local_34 = *(int *)((longlong)param_2 + 0xc) - local_58;
  local_38 = (int)param_2[2] - local_54;
  cVar1 = FUN_017f4cd0(auStack_78);
  if (cVar1 == '\0') {
    FUN_017f4bf0(param_3,&local_48,param_1);
    FUN_017f4cd0(auStack_78);
  }
  return;
}

