/* Ghidra address: 017f4830 */
/* Ghidra symbol: FUN_017f4830 */


void FUN_017f4830(longlong param_1,longlong *param_2)

{
  char cVar1;
  undefined8 uVar2;
  int iVar3;
  int iVar4;
  bool bVar5;
  undefined1 auStack_78 [32];
  int local_58;
  undefined1 local_48 [16];
  undefined1 local_38 [16];
  int local_28;
  int local_24;
  int local_20;
  int local_1c;
  
  uVar2 = FUN_0198a580(param_2);
  if ((byte)uVar2 < 8) {
    bVar5 = ((int)CONCAT71((int7)((ulonglong)uVar2 >> 8),1) << ((byte)uVar2 & 0x1f) & 0x1aU) != 0;
  }
  else {
    bVar5 = false;
  }
  if (bVar5) {
    uVar2 = FUN_0198d430(*(undefined8 *)(param_1 + 0x70));
    (**(code **)(*param_2 + 0x68))(param_2,uVar2,&local_28);
    if (local_28 != *(int *)(param_1 + 0x28)) {
      iVar4 = *(int *)(*(longlong *)(param_1 + 0x20) + 8);
      iVar3 = 0;
      if (-1 < iVar4 + -1) {
        do {
          local_58 = *(int *)(param_1 + 0x34);
          FUN_00b956d0(local_38,*(undefined4 *)(param_1 + 0x28),*(undefined4 *)(param_1 + 0x2c),
                       local_28);
          FUN_017f4350(*(undefined8 *)(param_1 + 0x20),local_48,iVar3);
          FUN_00b95740(local_38,local_48);
          cVar1 = FUN_00b958f0(local_38);
          if ((cVar1 == '\0') && (cVar1 = FUN_017f4700(auStack_78,local_38), cVar1 == '\0')) {
            FUN_017f40f0(*(undefined8 *)(param_1 + 0x38),local_38);
          }
          iVar3 = iVar3 + 1;
          iVar4 = iVar4 + -1;
        } while (iVar4 != 0);
      }
    }
    if (local_24 != *(int *)(param_1 + 0x2c)) {
      iVar4 = *(int *)(*(longlong *)(param_1 + 0x20) + 8);
      iVar3 = 0;
      if (-1 < iVar4 + -1) {
        do {
          local_58 = local_24;
          FUN_00b956d0(local_38,*(undefined4 *)(param_1 + 0x28),*(undefined4 *)(param_1 + 0x2c),
                       *(undefined4 *)(param_1 + 0x30));
          FUN_017f4350(*(undefined8 *)(param_1 + 0x20),local_48,iVar3);
          FUN_00b95740(local_38,local_48);
          cVar1 = FUN_00b958f0(local_38);
          if ((cVar1 == '\0') && (cVar1 = FUN_017f4700(auStack_78,local_38), cVar1 == '\0')) {
            FUN_017f40f0(*(undefined8 *)(param_1 + 0x38),local_38);
          }
          iVar3 = iVar3 + 1;
          iVar4 = iVar4 + -1;
        } while (iVar4 != 0);
      }
    }
    if (local_20 != *(int *)(param_1 + 0x30)) {
      iVar4 = *(int *)(*(longlong *)(param_1 + 0x20) + 8);
      iVar3 = 0;
      if (-1 < iVar4 + -1) {
        do {
          local_58 = *(int *)(param_1 + 0x34);
          FUN_00b956d0(local_38,local_20,*(undefined4 *)(param_1 + 0x2c),
                       *(undefined4 *)(param_1 + 0x30));
          FUN_017f4350(*(undefined8 *)(param_1 + 0x20),local_48,iVar3);
          FUN_00b95740(local_38,local_48);
          cVar1 = FUN_00b958f0(local_38);
          if ((cVar1 == '\0') && (cVar1 = FUN_017f4700(auStack_78,local_38), cVar1 == '\0')) {
            FUN_017f40f0(*(undefined8 *)(param_1 + 0x38),local_38);
          }
          iVar3 = iVar3 + 1;
          iVar4 = iVar4 + -1;
        } while (iVar4 != 0);
      }
    }
    if (local_1c != *(int *)(param_1 + 0x34)) {
      iVar4 = *(int *)(*(longlong *)(param_1 + 0x20) + 8);
      iVar3 = 0;
      if (-1 < iVar4 + -1) {
        do {
          local_58 = *(int *)(param_1 + 0x34);
          FUN_00b956d0(local_38,*(undefined4 *)(param_1 + 0x28),local_1c,
                       *(undefined4 *)(param_1 + 0x30));
          FUN_017f4350(*(undefined8 *)(param_1 + 0x20),local_48,iVar3);
          FUN_00b95740(local_38,local_48);
          cVar1 = FUN_00b958f0(local_38);
          if ((cVar1 == '\0') && (cVar1 = FUN_017f4700(auStack_78,local_38), cVar1 == '\0')) {
            FUN_017f40f0(*(undefined8 *)(param_1 + 0x38),local_38);
          }
          iVar3 = iVar3 + 1;
          iVar4 = iVar4 + -1;
        } while (iVar4 != 0);
      }
    }
    FUN_017f41b0(*(undefined8 *)(param_1 + 0x20),*(undefined8 *)(param_1 + 0x38));
    FUN_017f4200(*(undefined8 *)(param_1 + 0x38));
  }
  return;
}

