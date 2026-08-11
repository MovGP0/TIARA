/* Ghidra address: 0157e010 */
/* Ghidra symbol: FUN_0157e010 */


void FUN_0157e010(longlong param_1)

{
  char cVar1;
  longlong lVar2;
  undefined8 uVar3;
  uint uVar4;
  undefined1 local_70 [2];
  undefined1 local_6e [2];
  undefined1 local_6c [2];
  undefined1 local_6a [2];
  undefined1 local_68 [4];
  undefined1 local_64 [4];
  undefined1 local_60 [4];
  undefined1 local_5c [4];
  short local_58;
  short local_56;
  short local_54;
  undefined1 local_52 [2];
  undefined1 local_50 [2];
  undefined1 local_4e [4];
  undefined1 local_4a [4];
  undefined8 local_46;
  undefined8 local_3e;
  undefined8 local_36;
  undefined1 local_2e [6];
  ushort local_28;
  uint local_22;
  int local_1c [3];
  
  FUN_00417580(local_70,&DAT_015764a8);
  FUN_00598040(*(longlong *)(param_1 + 0x30) + 8);
  lVar2 = (**(code **)**(undefined8 **)(param_1 + 0x10))(*(undefined8 **)(param_1 + 0x10));
  if (lVar2 != 0) {
    cVar1 = FUN_0157f0a0(param_1,local_2e);
    if (cVar1 == '\0') {
      uVar3 = FUN_0044d710(&PTR_FUN_01576898,1,PTR_PTR_02003e30);
      FUN_004134c0(uVar3);
    }
    FUN_004b6dc0(*(undefined8 *)(param_1 + 0x10),local_22);
    *(ulonglong *)(param_1 + 0x28) = (ulonglong)local_22;
    uVar4 = (uint)local_28;
    if (-1 < (int)(uVar4 - 1)) {
      do {
        (**(code **)(**(longlong **)(param_1 + 0x10) + 0x18))
                  (*(longlong **)(param_1 + 0x10),local_1c,4);
        if (local_1c[0] != DAT_01f654d8) {
          uVar3 = FUN_0044d710(&PTR_FUN_01576898,1,PTR_PTR_02002e68);
          FUN_004134c0(uVar3);
        }
        FUN_0157c960(*(undefined8 *)(param_1 + 0x10),local_70,2);
        FUN_0157c960(*(undefined8 *)(param_1 + 0x10),local_6e,2);
        FUN_0157c960(*(undefined8 *)(param_1 + 0x10),local_6c,2);
        FUN_0157c960(*(undefined8 *)(param_1 + 0x10),local_6a,2);
        FUN_0157c9b0(*(undefined8 *)(param_1 + 0x10),local_68,4);
        FUN_0157c9b0(*(undefined8 *)(param_1 + 0x10),local_64,4);
        FUN_0157c9b0(*(undefined8 *)(param_1 + 0x10),local_60,4);
        FUN_0157c9b0(*(undefined8 *)(param_1 + 0x10),local_5c,4);
        FUN_0157c960(*(undefined8 *)(param_1 + 0x10),&local_58,2);
        FUN_0157c960(*(undefined8 *)(param_1 + 0x10),&local_56,2);
        FUN_0157c960(*(undefined8 *)(param_1 + 0x10),&local_54,2);
        FUN_0157c960(*(undefined8 *)(param_1 + 0x10),local_52,2);
        FUN_0157c960(*(undefined8 *)(param_1 + 0x10),local_50,2);
        FUN_0157c9b0(*(undefined8 *)(param_1 + 0x10),local_4e,4);
        FUN_0157c9b0(*(undefined8 *)(param_1 + 0x10),local_4a,4);
        if (local_58 != 0) {
          FUN_00419260(&local_46,&DAT_00406578,1,local_58);
          FUN_0157c8d0(*(undefined8 *)(param_1 + 0x10),local_46,local_58);
        }
        if (local_56 != 0) {
          FUN_00419260(&local_3e,&DAT_00406578,1,local_56);
          FUN_0157c8d0(*(undefined8 *)(param_1 + 0x10),local_3e,local_56);
        }
        if (local_54 != 0) {
          FUN_00419260(&local_36,&DAT_00406578,1,local_54);
          FUN_0157c8d0(*(undefined8 *)(param_1 + 0x10),local_36,local_54);
        }
        FUN_00597ec0(*(longlong *)(param_1 + 0x30) + 8,local_70);
        uVar4 = uVar4 - 1;
      } while (uVar4 != 0);
    }
  }
  FUN_00417740(local_70,&DAT_015764a8);
  return;
}

