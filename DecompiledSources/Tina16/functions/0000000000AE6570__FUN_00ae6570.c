/* Ghidra address: 00ae6570 */
/* Ghidra symbol: FUN_00ae6570 */


void FUN_00ae6570(longlong param_1)

{
  char cVar1;
  longlong *plVar2;
  undefined8 uVar3;
  bool bVar4;
  undefined8 uVar5;
  ulonglong uVar6;
  
  bVar4 = false;
  plVar2 = *(longlong **)(*(longlong *)(param_1 + 0x90) + 0xe8);
  (**(code **)(*plVar2 + 0x10))(plVar2);
  uVar3 = *(undefined8 *)(*(longlong *)(param_1 + 0x90) + 0xe8);
  uVar5 = FUN_00a52510(&PTR_FUN_00a4ffc0,1,uVar3,
                       *(undefined1 *)(*(longlong *)(param_1 + 0x90) + 0xe0));
  FUN_004ae7e0(uVar3,uVar5);
  FUN_00ad1170(*(undefined8 *)(param_1 + 0x90));
  FUN_00ad4730(*(undefined8 *)(param_1 + 0x90));
  do {
    uVar6 = (ulonglong)*(byte *)(*(longlong *)(param_1 + 0x90) + 0x44);
    if (uVar6 < 0x1e) {
      if (uVar6 == 0x1d) goto LAB_00ae67b5;
      if (uVar6 < 0x15) {
        if (uVar6 == 0x14) {
          FUN_00ae3650(*(undefined8 *)(param_1 + 0x90),*(undefined8 *)(param_1 + 0xa0));
        }
        else if (uVar6 == 0xb) {
          FUN_00ae5570(*(undefined8 *)(param_1 + 0x90),*(undefined8 *)(param_1 + 0x98),
                       *(undefined8 *)(param_1 + 0xa0),*(undefined8 *)(param_1 + 0xa8));
        }
        else if (uVar6 == 0xe) {
          do {
            FUN_00ad4730(*(undefined8 *)(param_1 + 0x90));
            cVar1 = *(char *)(*(longlong *)(param_1 + 0x90) + 0x44);
            if (cVar1 == '\x0f') break;
          } while (cVar1 != '\x04');
          FUN_00ad4730(*(undefined8 *)(param_1 + 0x90));
        }
        else if (uVar6 == 0x10) {
          FUN_00ae3920(*(undefined8 *)(param_1 + 0x90));
        }
        else {
          if (uVar6 != 0x12) goto LAB_00ae67ba;
          FUN_00ae34b0(*(undefined8 *)(param_1 + 0x90));
        }
      }
      else if (uVar6 == 0x17) {
        FUN_00ada730(*(undefined8 *)(param_1 + 0x90),*(longlong *)(param_1 + 0x98) + 0x708);
        FUN_00ad4730(*(undefined8 *)(param_1 + 0x90));
      }
      else {
        if (uVar6 != 0x1a) {
          if (uVar6 != 0x1b) goto LAB_00ae67ba;
          goto LAB_00ae67b5;
        }
        FUN_00ae3530(*(undefined8 *)(param_1 + 0x90));
      }
    }
    else {
      if (uVar6 < 0x90) {
        if (((uVar6 == 0x8f) || (uVar6 - 0x65 < 2)) || ((uVar6 - 0x77 < 6 || (uVar6 - 0x86 < 3)))) {
LAB_00ae67b5:
          bVar4 = true;
          goto LAB_00ae67c6;
        }
      }
      else if (((uVar6 - 0x91 < 4) || (uVar6 == 0xa0)) || (uVar6 == 0xb3)) goto LAB_00ae67b5;
LAB_00ae67ba:
      FUN_00ad4730(*(undefined8 *)(param_1 + 0x90));
    }
LAB_00ae67c6:
    if ((bVar4) || (*(char *)(*(longlong *)(param_1 + 0x90) + 0x44) == '\x04')) {
      plVar2 = *(longlong **)(*(longlong *)(param_1 + 0x90) + 0xe8);
      (**(code **)(*plVar2 + 0x10))(plVar2);
      return;
    }
  } while( true );
}

