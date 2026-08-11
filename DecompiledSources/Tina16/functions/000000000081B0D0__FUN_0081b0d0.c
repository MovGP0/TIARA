/* Ghidra address: 0081b0d0 */
/* Ghidra symbol: FUN_0081b0d0 */


void FUN_0081b0d0(longlong param_1)

{
  longlong lVar1;
  char cVar2;
  undefined4 uVar3;
  int iVar4;
  undefined8 uVar5;
  undefined1 auStack_88 [32];
  int local_68;
  longlong local_58;
  int local_4c;
  undefined8 local_48;
  undefined8 uStack_40;
  int local_38;
  undefined4 local_34;
  int local_30;
  int local_2c;
  
  if (*(int *)(*(longlong *)(*(longlong *)(param_1 + 0x170) + 0x10) + 0x324) != 0) {
    local_58 = param_1;
    uVar5 = FUN_00781840();
    uVar3 = FUN_00779380(uVar5,0x1d);
    FUN_005fdab0(*(undefined8 *)(*(longlong *)(local_58 + 0x178) + 0x80),uVar3);
    FUN_005fdcb0(*(undefined8 *)(*(longlong *)(local_58 + 0x178) + 0x80),0);
    if (*(char *)(*(longlong *)(*(longlong *)(local_58 + 0x170) + 0x10) + 0x4d1) == '\0') {
      local_68 = 0;
      FUN_004238d0(&local_38,0,0,0);
    }
    else {
      FUN_00819760(*(undefined8 *)(local_58 + 0x170),&local_38);
    }
    local_4c = local_38;
    local_68 = *(int *)(*(longlong *)(local_58 + 0x170) + 0x78) - local_2c;
    FUN_004238d0(&local_48,local_38,local_34,
                 *(int *)(*(longlong *)(local_58 + 0x170) + 0x130) - local_30);
    *(undefined8 *)(local_58 + 0x108) = local_48;
    *(undefined8 *)(local_58 + 0x110) = uStack_40;
    lVar1 = *(longlong *)(*(longlong *)(local_58 + 0x170) + 0xa0);
    if (lVar1 != 0) {
      iVar4 = FUN_00815380(lVar1,(*(int *)(*(longlong *)(local_58 + 0x170) + 0x130) - local_4c) -
                                 local_30);
      *(int *)(local_58 + 0x10c) = *(int *)(local_58 + 0x10c) + iVar4;
    }
    local_68 = *(undefined4 *)(local_58 + 0x114);
    FUN_004238d0(&local_48,*(int *)(local_58 + 0x108),*(undefined4 *)(local_58 + 0x10c),
                 *(int *)(local_58 + 0x108) +
                 *(int *)(*(longlong *)(*(longlong *)(local_58 + 0x170) + 0x10) + 0x324));
    *(undefined8 *)(local_58 + 0x120) = local_48;
    *(undefined8 *)(local_58 + 0x128) = uStack_40;
    cVar2 = FUN_0081b080(auStack_88,local_58 + 0x108,local_58 + 0x120);
    if (cVar2 != '\0') {
      (**(code **)(**(longlong **)(local_58 + 0x178) + 0xa8))
                (*(longlong **)(local_58 + 0x178),local_58 + 0x120);
    }
    local_68 = *(undefined4 *)(local_58 + 0x114);
    FUN_004238d0(&local_48,
                 *(int *)(local_58 + 0x110) -
                 *(int *)(*(longlong *)(*(longlong *)(local_58 + 0x170) + 0x10) + 0x324),
                 *(undefined4 *)(local_58 + 0x10c),*(int *)(local_58 + 0x110));
    *(undefined8 *)(local_58 + 0x120) = local_48;
    *(undefined8 *)(local_58 + 0x128) = uStack_40;
    cVar2 = FUN_0081b080(auStack_88,local_58 + 0x108,local_58 + 0x120);
    if (cVar2 != '\0') {
      (**(code **)(**(longlong **)(local_58 + 0x178) + 0xa8))
                (*(longlong **)(local_58 + 0x178),local_58 + 0x120);
    }
    local_68 = *(int *)(local_58 + 0x10c) +
               *(int *)(*(longlong *)(*(longlong *)(local_58 + 0x170) + 0x10) + 0x324);
    FUN_004238d0(&local_48,
                 *(int *)(local_58 + 0x108) +
                 *(int *)(*(longlong *)(*(longlong *)(local_58 + 0x170) + 0x10) + 0x324),
                 *(int *)(local_58 + 0x10c),
                 *(int *)(local_58 + 0x110) -
                 *(int *)(*(longlong *)(*(longlong *)(local_58 + 0x170) + 0x10) + 0x324));
    *(undefined8 *)(local_58 + 0x120) = local_48;
    *(undefined8 *)(local_58 + 0x128) = uStack_40;
    cVar2 = FUN_0081b080(auStack_88,local_58 + 0x108,local_58 + 0x120);
    if (cVar2 != '\0') {
      (**(code **)(**(longlong **)(local_58 + 0x178) + 0xa8))
                (*(longlong **)(local_58 + 0x178),local_58 + 0x120);
    }
    local_68 = *(int *)(local_58 + 0x114);
    FUN_004238d0(&local_48,
                 *(int *)(local_58 + 0x108) +
                 *(int *)(*(longlong *)(*(longlong *)(local_58 + 0x170) + 0x10) + 0x324),
                 local_68 - *(int *)(*(longlong *)(*(longlong *)(local_58 + 0x170) + 0x10) + 0x324),
                 *(int *)(local_58 + 0x110) -
                 *(int *)(*(longlong *)(*(longlong *)(local_58 + 0x170) + 0x10) + 0x324));
    *(undefined8 *)(local_58 + 0x120) = local_48;
    *(undefined8 *)(local_58 + 0x128) = uStack_40;
    cVar2 = FUN_0081b080(auStack_88,local_58 + 0x108,local_58 + 0x120);
    if (cVar2 != '\0') {
      (**(code **)(**(longlong **)(local_58 + 0x178) + 0xa8))
                (*(longlong **)(local_58 + 0x178),local_58 + 0x120);
    }
  }
  return;
}

