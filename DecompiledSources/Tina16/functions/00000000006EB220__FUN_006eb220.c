/* Ghidra address: 006eb220 */
/* Ghidra symbol: FUN_006eb220 */


void FUN_006eb220(longlong *param_1,undefined8 param_2)

{
  char cVar1;
  int iVar2;
  undefined8 uVar3;
  undefined1 auStack_88 [32];
  undefined4 local_68;
  undefined1 *local_50;
  undefined1 local_48 [4];
  undefined4 local_44;
  int local_40;
  undefined4 local_3c;
  undefined1 local_38 [16];
  undefined1 local_28 [24];
  
  local_50 = auStack_88;
  uVar3 = FUN_0065b870(param_1);
  iVar2 = thunk_FUN_03a1a60f(uVar3,local_28,0xffffffff);
  if (iVar2 != 0) {
    (**(code **)(*param_1 + 0xe0))(param_1,local_48);
    local_68 = local_3c;
    FUN_004238d0(local_38,local_40 + -3,local_44,local_40);
    cVar1 = FUN_004239d0(local_28,local_28,local_38);
    if (cVar1 != '\0') {
      uVar3 = FUN_0065b870(param_1);
      thunk_FUN_03a2fc9d(uVar3,local_38,0xffffffff);
    }
  }
  if (DAT_01e00558 == '\0') {
    DAT_01e00558 = 1;
    FUN_00657db0(param_1,param_2);
    DAT_01e00558 = '\0';
  }
  else {
    (**(code **)(*param_1 + 0x180))(param_1);
  }
  return;
}

