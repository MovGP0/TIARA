/* Ghidra address: 00b433b0 */
/* Ghidra symbol: FUN_00b433b0 */


void FUN_00b433b0(longlong param_1,undefined8 param_2,longlong *param_3,int *param_4,
                 undefined4 *param_5,undefined4 *param_6)

{
  char cVar1;
  int iVar2;
  longlong lVar3;
  undefined8 uVar4;
  undefined1 auStack_78 [32];
  undefined8 local_58;
  undefined1 *local_50;
  longlong local_40;
  longlong *local_38;
  undefined1 local_2c;
  longlong *local_28;
  longlong *local_20;
  
  local_50 = auStack_78;
  local_58 = 0;
  local_38 = (longlong *)0x0;
  *param_4 = -1;
  *param_5 = 0;
  *param_6 = 0;
  iVar2 = FUN_00416420(param_2,0);
  if (iVar2 == 0) {
    local_28 = param_3;
    FUN_004b6dc0(param_3,0);
  }
  else {
    FUN_004168b0(&local_58,param_2);
    local_38 = (longlong *)FUN_004b9860(&PTR_FUN_0047c498,1,local_58,0);
    local_28 = local_38;
  }
  local_20 = (longlong *)FUN_00410e60(&LAB_00b251f8,1);
  FUN_00b42e10(auStack_78);
  cVar1 = FUN_00b42cb0(auStack_78);
  if (cVar1 == '\0') {
    local_40 = FUN_00b41860(&DAT_00b3fde8,1);
    FUN_004ae7e0(*(undefined8 *)(param_1 + 8),local_40);
    *(undefined1 *)(local_40 + 0x24) = local_2c;
    FUN_00414b90(local_40 + 0x10,param_2);
    *(undefined4 *)(local_40 + 0x1c) = *param_5;
    *(undefined4 *)(local_40 + 0x20) = *param_6;
    iVar2 = FUN_00b41f50(param_1);
    *param_4 = iVar2 + -1;
    FUN_004b6dc0(local_20,0);
    uVar4 = (**(code **)*local_20)(local_20);
    FUN_004b8ba0(*(undefined8 *)(local_40 + 8),local_20,uVar4);
  }
  else {
    lVar3 = FUN_00b41f30(param_1,*param_4);
    *param_5 = *(undefined4 *)(lVar3 + 0x1c);
    lVar3 = FUN_00b41f30(param_1,*param_4);
    *param_6 = *(undefined4 *)(lVar3 + 0x20);
  }
  if (local_38 != (longlong *)0x0) {
    (**(code **)(*local_38 + -0x20))(local_38,1);
  }
  (**(code **)(*local_20 + -0x20))(local_20,1);
  FUN_00414480(&local_58);
  return;
}

