/* Ghidra address: 00a65950 */
/* Ghidra symbol: FUN_00a65950 */


void FUN_00a65950(longlong param_1,undefined8 param_2)

{
  char cVar1;
  int iVar2;
  undefined8 uVar3;
  int iVar4;
  int iVar5;
  longlong *plVar6;
  undefined1 auStack_d8 [40];
  longlong local_b0;
  undefined8 local_a8;
  undefined8 local_a0;
  undefined8 local_98;
  undefined8 local_90;
  undefined8 local_88;
  undefined8 local_80;
  undefined8 local_78;
  longlong local_70;
  byte local_65;
  int local_64;
  longlong local_60 [8];
  
  local_a0 = 0;
  local_b0 = param_1;
  local_a8 = param_2;
  FUN_00417600(local_60,&DAT_00401390,7);
  FUN_00417600(&local_98,&DAT_00401390,6);
  FUN_00414b50(&local_98,L"normal");
  FUN_00414b50(&local_90,L"normal");
  FUN_00414b50(&local_88,L"normal");
  if (*(char *)(*(longlong *)(local_b0 + 0x30) + 0x20) == '\0') {
    FUN_00414b50(&local_80,L"medium");
  }
  else {
    FUN_00414b50(&local_80,L"small");
  }
  FUN_00414b50(&local_78,L"normal");
  FUN_00414480(&local_70);
  local_65 = 2;
  uVar3 = FUN_00417840(local_60,&DAT_00401390,7);
  FUN_00a640f0(local_a8,uVar3,6,&local_64);
  if (-1 < local_64 + -1) {
    plVar6 = local_60;
    iVar5 = local_64;
    do {
      if (*(short *)*plVar6 == 0x2f) {
        iVar2 = 0;
        if (*plVar6 != 0) {
          iVar2 = *(int *)(*plVar6 + -4);
        }
        FUN_00416dc0(&local_78,*plVar6,2,iVar2 + -1);
      }
      else if ((ushort)(*(short *)*plVar6 - 0x30U) < 10) {
        iVar2 = FUN_004170c0(&DAT_00a65d94,*plVar6,1);
        if (iVar2 < 2) {
          FUN_009ec440(&local_a0,*plVar6);
          iVar2 = FUN_0043fc50(local_a0,0xffffffff);
          if (iVar2 < 100) {
            FUN_00414b50(&local_80,*plVar6);
          }
        }
        else {
          FUN_00416dc0(&local_80,*plVar6,1,iVar2 + -1);
          iVar4 = 0;
          if (*plVar6 != 0) {
            iVar4 = *(int *)(*plVar6 + -4);
          }
          FUN_00416dc0(&local_78,*plVar6,iVar2 + 1,iVar4 - iVar2);
        }
      }
      else {
        cVar1 = FUN_00a658f0(auStack_d8,*plVar6,&local_65);
        if (cVar1 == '\0') {
          FUN_00414b50(&local_70,*plVar6);
        }
        else if (local_65 < 2) {
          FUN_00414b50(&local_98,*plVar6);
        }
        else if ((byte)(local_65 - 2) < 4) {
          FUN_00414b50(&local_88,*plVar6);
        }
        else if (local_65 == 6) {
          FUN_00414b50(&local_90,*plVar6);
        }
        else if ((byte)(local_65 - 7) < 9) {
          FUN_00414b50(&local_80,*plVar6);
        }
      }
      plVar6 = plVar6 + 1;
      iVar5 = iVar5 + -1;
    } while (iVar5 != 0);
  }
  if (local_70 != 0) {
    (**(code **)**(undefined8 **)(local_b0 + 0x30))
              (*(undefined8 **)(local_b0 + 0x30),L"font-style",local_98,
               *(undefined1 *)(local_b0 + 0x58));
    (**(code **)**(undefined8 **)(local_b0 + 0x30))
              (*(undefined8 **)(local_b0 + 0x30),L"font-variant",local_90,
               *(undefined1 *)(local_b0 + 0x58));
    (**(code **)**(undefined8 **)(local_b0 + 0x30))
              (*(undefined8 **)(local_b0 + 0x30),L"font-weight",local_88,
               *(undefined1 *)(local_b0 + 0x58));
    (**(code **)**(undefined8 **)(local_b0 + 0x30))
              (*(undefined8 **)(local_b0 + 0x30),L"font-size",local_80,
               *(undefined1 *)(local_b0 + 0x58));
    (**(code **)**(undefined8 **)(local_b0 + 0x30))
              (*(undefined8 **)(local_b0 + 0x30),L"line-height",local_78,
               *(undefined1 *)(local_b0 + 0x58));
    (**(code **)**(undefined8 **)(local_b0 + 0x30))
              (*(undefined8 **)(local_b0 + 0x30),L"font-family",local_70,
               *(undefined1 *)(local_b0 + 0x58));
  }
  FUN_00414480(&local_a0);
  FUN_00417840(&local_98,&DAT_00401390,6);
  FUN_00417840(local_60,&DAT_00401390,7);
  return;
}

