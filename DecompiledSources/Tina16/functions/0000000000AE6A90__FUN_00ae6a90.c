/* Ghidra address: 00ae6a90 */
/* Ghidra symbol: FUN_00ae6a90 */


undefined8 FUN_00ae6a90(longlong param_1)

{
  longlong *plVar1;
  undefined8 uVar2;
  bool bVar3;
  undefined8 uVar4;
  ulonglong uVar5;
  undefined8 uVar6;
  undefined8 local_38;
  undefined8 uStack_30;
  
  uVar6 = 0;
  plVar1 = *(longlong **)(*(longlong *)(param_1 + 0x90) + 0xe8);
  (**(code **)(*plVar1 + 0x10))(plVar1);
  uVar2 = *(undefined8 *)(*(longlong *)(param_1 + 0x90) + 0xe8);
  uVar4 = FUN_00a52510(&PTR_FUN_00a4ffc0,1,uVar2,
                       *(undefined1 *)(*(longlong *)(param_1 + 0x90) + 0xe0));
  FUN_004ae7e0(uVar2,uVar4);
  bVar3 = false;
  FUN_00ad1170(*(undefined8 *)(param_1 + 0x90));
  FUN_00ad4730(*(undefined8 *)(param_1 + 0x90));
  do {
    uVar5 = (ulonglong)*(byte *)(*(longlong *)(param_1 + 0x90) + 0x44);
    if (uVar5 < 0x77) {
      if (uVar5 < 0x1c) {
        if ((uVar5 != 0x1b) && (uVar5 != 5)) {
          if (uVar5 != 0xb) {
            if (uVar5 != 0x17) goto LAB_00ae6bec;
            local_38 = 0;
            uStack_30 = 0;
            FUN_00ada730(*(undefined8 *)(param_1 + 0x90),&local_38);
            FUN_00ad4730(*(undefined8 *)(param_1 + 0x90));
            goto LAB_00ae6bf8;
          }
          uVar6 = 1;
code_r0x00ae6c0f:
          plVar1 = *(longlong **)(*(longlong *)(param_1 + 0x90) + 0xe8);
          (**(code **)(*plVar1 + 0x10))(plVar1);
          return uVar6;
        }
      }
      else if ((uVar5 != 0x1d) && (1 < uVar5 - 0x65)) goto LAB_00ae6bec;
LAB_00ae6be7:
      bVar3 = true;
    }
    else {
      if (uVar5 < 0x91) {
        if (((uVar5 - 0x77 < 6) || (uVar5 - 0x86 < 3)) || (uVar5 - 0x86 == 9)) goto LAB_00ae6be7;
      }
      else if (((uVar5 - 0x91 < 4) || (uVar5 == 0xa0)) || (uVar5 == 0xb3)) goto LAB_00ae6be7;
LAB_00ae6bec:
      FUN_00ad4730(*(undefined8 *)(param_1 + 0x90));
    }
LAB_00ae6bf8:
    if ((bVar3) || (*(char *)(*(longlong *)(param_1 + 0x90) + 0x44) == '\x04'))
    goto code_r0x00ae6c0f;
  } while( true );
}

