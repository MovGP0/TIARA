/* Ghidra address: 01995090 */
/* Ghidra symbol: FUN_01995090 */


void FUN_01995090(longlong param_1,ulonglong *param_2,char param_3)

{
  char cVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  undefined1 auStack_a8 [40];
  longlong local_80;
  int local_6c [2];
  int local_64;
  undefined1 local_5c [16];
  int local_4c [2];
  int local_44;
  undefined8 local_3c;
  undefined8 local_34;
  int local_2c;
  
  local_3c = *param_2;
  local_34 = param_2[1];
  local_80 = param_1;
  FUN_01a98060(*(undefined8 *)(param_1 + 0x210),local_4c);
  FUN_01a98210(*(undefined8 *)(local_80 + 0x210),local_6c);
  if (0.7 <= (double)(local_44 - local_4c[0]) / (double)(local_64 - local_6c[0])) {
    local_2c = 1;
    cVar1 = FUN_00b958f0(&local_3c);
    if (cVar1 != '\0') {
      FUN_00b95710(&local_3c,local_6c);
    }
    if ((*(char *)(local_80 + 0x98) != '\0') &&
       (*(char *)(*(longlong *)(local_80 + 0x210) + 0x12d) == '\0')) {
      FUN_019ab9a0(local_80,local_5c);
      FUN_00b95740(&local_3c,local_5c);
    }
    if (param_3 == '\0') {
      uVar2 = (**(code **)(**(longlong **)(local_80 + 0x210) + 0xd0))
                        (*(longlong **)(local_80 + 0x210),0);
    }
    else {
      uVar2 = (**(code **)(**(longlong **)(local_80 + 0x210) + 0xd0))
                        (*(longlong **)(local_80 + 0x210),0x10);
    }
    local_2c = local_2c * 8;
    iVar3 = FUN_01995060(auStack_a8,local_3c & 0xffffffff);
    while( true ) {
      iVar5 = FUN_01995060(auStack_a8,local_34 & 0xffffffff);
      if (iVar5 <= iVar3) break;
      iVar5 = FUN_01995060(auStack_a8,local_3c._4_4_);
      while( true ) {
        iVar4 = FUN_01995060(auStack_a8,local_34._4_4_);
        if (iVar4 <= iVar5) break;
        (**(code **)(**(longlong **)(local_80 + 0x210) + 0x88))
                  (*(longlong **)(local_80 + 0x210),iVar3,iVar5,uVar2);
        iVar5 = iVar5 + local_2c;
      }
      iVar3 = iVar3 + local_2c;
    }
  }
  return;
}

