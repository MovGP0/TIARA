/* Ghidra address: 016bd780 */
/* Ghidra symbol: FUN_016bd780 */


undefined8
FUN_016bd780(longlong param_1,undefined8 param_2,longlong *param_3,undefined8 param_4,
            undefined1 param_5,undefined8 param_6,longlong *param_7,byte *param_8,char param_9)

{
  int iVar1;
  undefined4 uVar2;
  longlong lVar3;
  byte *pbVar4;
  ulonglong in_stack_fffffffffffffe70;
  undefined8 local_160;
  undefined8 local_158;
  undefined8 local_150;
  undefined1 *local_148;
  undefined1 *local_140 [2];
  longlong local_130;
  byte local_128 [264];
  
  local_158 = 0;
  local_160 = 0;
  local_150 = 0;
  local_148 = (undefined1 *)0x0;
  local_140[0] = (undefined1 *)0x0;
  lVar3 = (ulonglong)*param_8 + 1;
  pbVar4 = local_128;
  for (; lVar3 != 0; lVar3 = lVar3 + -1) {
    *pbVar4 = *param_8;
    param_8 = param_8 + 1;
    pbVar4 = pbVar4 + 1;
  }
  local_130 = 0;
  if (local_128[0] == 0) {
    FUN_016ba960(param_1,param_2,0,&DAT_016bdb28,&DAT_016bdb2c,
                 in_stack_fffffffffffffe70 & 0xffffffffffffff00);
  }
  else {
    FUN_00414ff0(param_2,local_128);
  }
  if (param_9 != '\0') goto code_r0x016bdadf;
  if (*(char *)(param_1 + 0x9a3) == '\0') {
    FUN_004169a0(local_140,param_2);
    iVar1 = FUN_004170c0(&LAB_016bdb58,local_140[0],1);
    if (iVar1 == 0) {
      uVar2 = FUN_016bbd90(param_1,param_2,param_4,&local_130);
    }
    else {
      uVar2 = 0xffffffff;
    }
  }
  else if (*(char *)(param_1 + 0x9a2) == '\0') {
    uVar2 = 0xffffffff;
  }
  else if (param_3 == (longlong *)0x0) {
    FUN_004169a0(&local_150,param_2);
    iVar1 = (**(code **)(**(longlong **)(param_1 + 0xa68) + 0xb8))
                      (*(longlong **)(param_1 + 0xa68),local_150);
    if (iVar1 == -1) {
      uVar2 = FUN_016bbd90(param_1,param_2,param_4,&local_130);
    }
    else {
      FUN_004169a0(&local_160,param_2);
      FUN_004b4060(*(undefined8 *)(param_1 + 0xa68),&local_158,local_160);
      FUN_00416910(param_2,local_158,0xff);
      uVar2 = FUN_016bbd90(param_1,param_2,param_4,&local_130);
    }
  }
  else {
    if (param_7 != (longlong *)0x0) {
      iVar1 = (**(code **)(*param_3 + 0x1c8))(param_3);
      if (iVar1 <= *(int *)(*(longlong *)(param_1 + 0xa30) + 0x10)) {
        FUN_004169a0(&local_148,param_2);
        iVar1 = (**(code **)(*param_7 + 0xb8))(param_7,local_148);
        if (iVar1 < 0) {
          uVar2 = 0xffffffff;
        }
        else {
          uVar2 = (**(code **)(*param_7 + 0x30))(param_7,iVar1);
          FUN_016bc170(param_1,param_2,uVar2,param_4,&local_130);
        }
        goto LAB_016bda58;
      }
    }
    uVar2 = FUN_016bd350(param_1,param_3,param_2,
                         *(undefined4 *)(*(longlong *)(param_1 + 0xa30) + 0x10),param_5,param_6);
    FUN_016bc170(param_1,param_2,uVar2,param_4,&local_130);
  }
LAB_016bda58:
  lVar3 = FUN_016a4560(&DAT_0169ffe0,1,param_2,uVar2);
  if (*(char *)(param_1 + 0x9a2) != '\0') {
    if (*(int *)(*(longlong *)(param_1 + 0xa38) + 0x10) < 1) {
      *(undefined4 *)(lVar3 + 0x1c) = *(undefined4 *)(*(longlong *)(param_1 + 0xa30) + 0x10);
    }
    else {
      uVar2 = FUN_014dbb10(*(undefined8 *)(lVar3 + 8),*(longlong *)(param_1 + 0xa38));
      *(undefined4 *)(lVar3 + 0x1c) = uVar2;
    }
    if (local_130 != 0) {
      *(undefined4 *)(local_130 + 0x1c) = *(undefined4 *)(lVar3 + 0x1c);
    }
  }
  (**(code **)(**(longlong **)(param_1 + 0xa30) + 0x50))(*(longlong **)(param_1 + 0xa30),lVar3);
code_r0x016bdadf:
  FUN_00414560(&local_160,5);
  return param_2;
}

