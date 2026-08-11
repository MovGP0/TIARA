/* Ghidra address: 00bf70d0 */
/* Ghidra symbol: FUN_00bf70d0 */


void FUN_00bf70d0(longlong param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  char cVar4;
  undefined1 uVar5;
  code *pcVar6;
  undefined8 uVar7;
  undefined8 local_28;
  undefined8 local_20;
  
  *(undefined1 *)(param_1 + 0xb6) = 0;
  if (*(char *)(*(longlong *)(param_1 + 0x130) + 0x5c1) != '\0') {
    uVar7 = *(undefined8 *)(param_1 + 0x130);
    pcVar6 = (code *)FUN_00411550(uVar7,0xffb0);
    cVar4 = (*pcVar6)(uVar7);
    if (cVar4 == '\0') {
      return;
    }
  }
  *(undefined1 *)(param_1 + 0xb6) = 1;
  iVar1 = *(int *)(*(longlong *)(param_1 + 0x130) + 0x4b8);
  iVar2 = *(int *)(*(longlong *)(param_1 + 0x130) + 0x4c0);
  if (iVar1 < iVar2) {
    local_20 = *(undefined8 *)(*(longlong *)(param_1 + 0x130) + 0x4b4);
    local_28 = *(undefined8 *)(*(longlong *)(param_1 + 0x130) + 0x4bc);
  }
  else if (iVar2 < iVar1) {
    local_28 = *(undefined8 *)(*(longlong *)(param_1 + 0x130) + 0x4b4);
    local_20 = *(undefined8 *)(*(longlong *)(param_1 + 0x130) + 0x4bc);
  }
  else {
    iVar2 = *(int *)(*(longlong *)(param_1 + 0x130) + 0x4b4);
    iVar3 = *(int *)(*(longlong *)(param_1 + 0x130) + 0x4bc);
    if (iVar2 == iVar3) {
      *(undefined1 *)(param_1 + 0xb6) = 0;
    }
    else if (iVar2 < iVar3) {
      local_20 = CONCAT44(iVar1,iVar2);
      local_28 = CONCAT44(iVar1,iVar3);
    }
    else {
      local_20 = CONCAT44(iVar1,iVar3);
      local_28 = CONCAT44(iVar1,iVar2);
    }
  }
  if (*(char *)(param_1 + 0xb6) != '\0') {
    if ((local_28._4_4_ < *(int *)(param_1 + 0xb0)) || (*(int *)(param_1 + 0xac) < local_20._4_4_))
    {
      uVar5 = 0;
    }
    else {
      uVar5 = 1;
    }
    *(undefined1 *)(param_1 + 0xb6) = uVar5;
    if (*(char *)(param_1 + 0xb6) != '\0') {
      uVar7 = FUN_00c0ec90(*(undefined8 *)(param_1 + 0x130),&local_20);
      *(undefined8 *)(param_1 + 0xf8) = uVar7;
      uVar7 = FUN_00c0ec90(*(undefined8 *)(param_1 + 0x130),&local_28);
      *(undefined8 *)(param_1 + 0xf0) = uVar7;
      if ((*(char *)(*(longlong *)(param_1 + 0x130) + 0x5f5) == '\x02') &&
         (*(int *)(param_1 + 0xf0) < *(int *)(param_1 + 0xf8))) {
        FUN_00bcbe70(param_1 + 0xf8,param_1 + 0xf0);
      }
    }
  }
  return;
}

