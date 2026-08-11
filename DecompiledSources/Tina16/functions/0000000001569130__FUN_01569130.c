/* Ghidra address: 01569130 */
/* Ghidra symbol: FUN_01569130 */


void FUN_01569130(longlong param_1)

{
  char cVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  undefined8 uVar6;
  int iVar7;
  int iVar8;
  int local_5c;
  code *local_58;
  longlong local_50;
  undefined8 local_40 [2];
  
  local_40[0] = 0;
  cVar1 = FUN_01995600(*(undefined8 *)(param_1 + 0x748),0,0);
  if (cVar1 == '\0') {
    FUN_015fcf20(L"Graph init error!",0,0,0);
  }
  else {
    local_58 = FUN_01567ca0;
    local_50 = param_1;
    FUN_015670c0(param_1,*(undefined8 *)(param_1 + 0x748),0,&local_58);
  }
  iVar8 = *(int *)(*(longlong *)(param_1 + 0x8f0) + 0x10);
  local_5c = 0;
  if (-1 < iVar8 + -1) {
    do {
      lVar3 = FUN_01d347d0(*(undefined8 *)(param_1 + 0x8f0),local_5c);
      cVar1 = FUN_0154cf30(param_1,*(undefined8 *)(lVar3 + 0x40));
      if (cVar1 != '\0') {
        FUN_015502b0(param_1,local_40,lVar3);
        iVar2 = (**(code **)(**(longlong **)(param_1 + 0x30) + 0xb0))
                          (*(longlong **)(param_1 + 0x30),local_40[0]);
        if (iVar2 == -1) {
          (**(code **)(**(longlong **)(param_1 + 0x30) + 0x78))
                    (*(longlong **)(param_1 + 0x30),local_40[0]);
        }
      }
      iVar2 = *(int *)(*(longlong *)(lVar3 + 0x28) + 0x10);
      iVar7 = 0;
      if (-1 < iVar2 + -1) {
        do {
          lVar4 = FUN_01571ee0(*(undefined8 *)(lVar3 + 0x28),iVar7);
          if ((*(int *)(lVar4 + 0x30) != 0) ||
             ((*(int *)(lVar4 + 0x30) == 0 && (cVar1 = FUN_01566aa0(param_1), cVar1 == '\0')))) {
            lVar5 = FUN_01571ef0(*(undefined8 *)(param_1 + 0x750),*(undefined4 *)(lVar4 + 0x30));
            if (lVar5 == 0) {
              *(undefined4 *)(param_1 + 0x928) = 1;
            }
            else {
              FUN_01571450(lVar5,*(undefined4 *)(lVar4 + 0x54));
            }
          }
          iVar7 = iVar7 + 1;
          iVar2 = iVar2 + -1;
        } while (iVar2 != 0);
      }
      local_5c = local_5c + 1;
      iVar8 = iVar8 + -1;
    } while (iVar8 != 0);
  }
  iVar8 = *(int *)(*(longlong *)(param_1 + 0x8f0) + 0x10);
  local_5c = 0;
  if (-1 < iVar8 + -1) {
    do {
      lVar3 = FUN_01d347d0(*(undefined8 *)(param_1 + 0x8f0),local_5c);
      iVar2 = *(int *)(*(longlong *)(lVar3 + 0x28) + 0x10);
      iVar7 = 0;
      if (-1 < iVar2 + -1) {
        do {
          uVar6 = FUN_01571ee0(*(undefined8 *)(lVar3 + 0x28),iVar7);
          FUN_0154f5d0(param_1,uVar6,0);
          iVar7 = iVar7 + 1;
          iVar2 = iVar2 + -1;
        } while (iVar2 != 0);
      }
      local_5c = local_5c + 1;
      iVar8 = iVar8 + -1;
    } while (iVar8 != 0);
  }
  FUN_00414480(local_40);
  return;
}

