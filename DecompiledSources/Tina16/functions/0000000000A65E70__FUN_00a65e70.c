/* Ghidra address: 00a65e70 */
/* Ghidra symbol: FUN_00a65e70 */


void FUN_00a65e70(longlong param_1,undefined8 param_2)

{
  int iVar1;
  undefined8 uVar2;
  longlong *plVar3;
  int iVar4;
  undefined8 local_80 [2];
  undefined8 local_70;
  undefined8 local_68;
  undefined8 local_60;
  int local_54;
  longlong local_50 [7];
  
  local_80[0] = 0;
  FUN_00417600(local_50,&DAT_00401390,7);
  FUN_00417600(&local_70,&DAT_00401390,3);
  FUN_00414b50(&local_70,L"disc");
  if (*(char *)(*(longlong *)(param_1 + 0x30) + 0x20) == '\0') {
    FUN_00414b50(&local_68,L"outside");
  }
  else {
    FUN_00414b50(&local_68,L"inside");
  }
  FUN_00414b50(&local_60,L"none");
  uVar2 = FUN_00417840(local_50,&DAT_00401390,7);
  FUN_00a640f0(param_2,uVar2,6,&local_54);
  if (local_54 - 1U < 0x80000000) {
    plVar3 = local_50;
    iVar4 = local_54;
    do {
      iVar1 = FUN_00416db0(*plVar3,L"none");
      if (iVar1 == 0) {
        FUN_00414b50(&local_70,*plVar3);
        FUN_00414480();
      }
      plVar3 = plVar3 + 1;
      iVar4 = iVar4 + -1;
    } while (iVar4 != 0);
  }
  if (-1 < local_54 + -1) {
    plVar3 = local_50;
    iVar4 = local_54;
    do {
      iVar1 = FUN_004170c0(L"url(",*plVar3,1);
      if (iVar1 < 1) {
        iVar1 = FUN_00416db0(*plVar3,L"inside");
        if (iVar1 != 0) {
          iVar1 = FUN_00416db0(*plVar3,L"outside");
          if (iVar1 != 0) {
            if (*plVar3 != 0) {
              FUN_00414b50(&local_70,*plVar3);
            }
            goto LAB_00a66037;
          }
        }
        FUN_00414b50(&local_68,*plVar3);
      }
      else {
        if (*(longlong *)(*(longlong *)(param_1 + 0x30) + 0x18) != 0) {
          FUN_00a63b70(*(undefined8 *)(param_1 + 0x30),local_80,*plVar3);
          FUN_00414ad0(plVar3,local_80[0]);
        }
        FUN_00414b50(&local_60,*plVar3);
      }
LAB_00a66037:
      plVar3 = plVar3 + 1;
      iVar4 = iVar4 + -1;
    } while (iVar4 != 0);
  }
  (**(code **)**(undefined8 **)(param_1 + 0x30))
            (*(undefined8 **)(param_1 + 0x30),L"list-style-type",local_70,
             *(undefined1 *)(param_1 + 0x58));
  (**(code **)**(undefined8 **)(param_1 + 0x30))
            (*(undefined8 **)(param_1 + 0x30),L"list-style-position",local_68,
             *(undefined1 *)(param_1 + 0x58));
  (**(code **)**(undefined8 **)(param_1 + 0x30))
            (*(undefined8 **)(param_1 + 0x30),L"list-style-image",local_60,
             *(undefined1 *)(param_1 + 0x58));
  FUN_00414480(local_80);
  FUN_00417840(&local_70,&DAT_00401390,3);
  FUN_00417840(local_50,&DAT_00401390,7);
  return;
}

