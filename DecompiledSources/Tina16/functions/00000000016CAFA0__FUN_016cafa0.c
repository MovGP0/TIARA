/* Ghidra address: 016cafa0 */
/* Ghidra symbol: FUN_016cafa0 */


void FUN_016cafa0(longlong param_1,longlong param_2)

{
  undefined8 uVar1;
  char cVar2;
  char cVar3;
  longlong lVar4;
  undefined8 uVar5;
  int iVar6;
  undefined1 uVar7;
  longlong local_58;
  undefined8 local_50;
  undefined8 local_48;
  undefined8 local_40 [2];
  uint local_2c;
  
  local_50 = 0;
  local_48 = 0;
  local_40[0] = 0;
  for (iVar6 = 0; iVar6 <= *(int *)(param_2 + 0x10) + -1; iVar6 = iVar6 + 1) {
    lVar4 = FUN_01d347d0(param_2,iVar6);
    if ((*(char *)(lVar4 + 0x28) == 'X') && (*(longlong *)(lVar4 + 0x10) != 0)) {
      FUN_004169a0(local_40,*(undefined8 *)(lVar4 + 0x10));
      local_2c = (**(code **)(**(longlong **)(param_1 + 0x98) + 0xb0))
                           (*(longlong **)(param_1 + 0x98),local_40[0]);
      if ((*(char *)(*(longlong *)(param_1 + 0xc0) + 0x9ab) == '\0') || (local_2c == 0xffffffff)) {
        cVar2 = FUN_01d350f0(*(undefined8 *)(*(longlong *)(param_1 + 0xc0) + 0xa20),
                             *(undefined8 *)(lVar4 + 0x10),&local_2c);
        uVar7 = 0;
      }
      else {
        cVar2 = FUN_01d350f0(*(undefined8 *)(*(longlong *)(param_1 + 0xc0) + 0xa20),
                             *(undefined8 *)(lVar4 + 0x10),&local_2c);
        if (cVar2 != '\0') {
          local_58 = FUN_01d347d0(*(undefined8 *)(*(longlong *)(param_1 + 0xc0) + 0xa20),local_2c);
        }
        uVar7 = 0;
        if ((cVar2 != '\0') && (*(char *)(local_58 + 0x44) == '\0')) {
          uVar1 = *(undefined8 *)(*(longlong *)(param_1 + 0xc0) + 0xa20);
          uVar5 = FUN_01d347d0(uVar1,local_2c);
          FUN_01d34d10(uVar1,uVar5);
          cVar2 = '\0';
          uVar7 = 1;
        }
      }
      if (cVar2 == '\0') {
        cVar3 = FUN_00ee3970(*(undefined8 *)(*(longlong *)(param_1 + 0xc0) + 8),3,
                             *(undefined8 *)(lVar4 + 0x10),*(undefined8 *)(param_1 + 0xd8),
                             *(undefined8 *)(param_1 + 0xd0));
        if (cVar3 != '\0') {
          cVar2 = FUN_01d350f0(*(undefined8 *)(*(longlong *)(param_1 + 0xc0) + 0xa20),
                               *(undefined8 *)(lVar4 + 0x10),&local_2c);
        }
      }
      if (cVar2 == '\0') {
        FUN_016a4020(*(undefined8 *)(*(longlong *)(param_1 + 0xc0) + 0x10),0xd,
                     *(undefined8 *)(lVar4 + 0x10),0xffffffff);
      }
      else {
        local_58 = FUN_01d347d0(*(undefined8 *)(*(longlong *)(param_1 + 0xc0) + 0xa20),local_2c);
        if (*(char *)(local_58 + 0x44) == '\0') {
          *(undefined1 *)(local_58 + 0x44) = uVar7;
        }
        FUN_004169a0(&local_48,*(undefined8 *)(local_58 + 8));
        local_2c = (**(code **)(**(longlong **)(param_1 + 0x80) + 0xb0))
                             (*(longlong **)(param_1 + 0x80),local_48);
        if ((int)local_2c < 0) {
          FUN_004169a0(&local_50,*(undefined8 *)(local_58 + 8));
          local_2c = (**(code **)(**(longlong **)(param_1 + 0x80) + 0x78))
                               (*(longlong **)(param_1 + 0x80),local_50);
        }
        else {
          FUN_016a4020(*(undefined8 *)(*(longlong *)(param_1 + 0xc0) + 0x10),0x12,
                       *(undefined8 *)(local_58 + 8),0xffffffff);
        }
        if (*(longlong *)(local_58 + 0x18) != 0) {
          FUN_016cafa0(param_1,*(longlong *)(local_58 + 0x18));
        }
        (**(code **)(**(longlong **)(param_1 + 0x80) + 0x98))
                  (*(longlong **)(param_1 + 0x80),local_2c);
      }
    }
  }
  FUN_00414560(&local_50,3);
  return;
}

