/* Ghidra address: 01a0d1b0 */
/* Ghidra symbol: FUN_01a0d1b0 */


void FUN_01a0d1b0(undefined8 param_1,longlong param_2,longlong param_3,longlong *param_4)

{
  char cVar1;
  int iVar2;
  int iVar3;
  undefined8 uVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  undefined1 auStack_88 [32];
  longlong local_68;
  longlong *local_60;
  longlong *local_58;
  longlong *local_50;
  undefined8 local_48;
  undefined8 local_40;
  longlong local_38;
  undefined8 local_30;
  
  local_48 = 0;
  local_40 = 0;
  local_30 = 0;
  local_38 = 0;
  iVar5 = 0;
  local_68 = param_3;
  local_60 = param_4;
  while( true ) {
    uVar4 = FUN_00b94e60(local_68,iVar5);
    cVar1 = FUN_0198a580(uVar4);
    if (cVar1 == '\x04') break;
    iVar5 = iVar5 + 1;
  }
  iVar6 = *(int *)(local_68 + 0x10);
  do {
    iVar6 = iVar6 + -1;
    uVar4 = FUN_00b94e60(local_68,iVar6);
    cVar1 = FUN_0198a580(uVar4);
  } while (cVar1 != '\x04');
  if (iVar5 <= iVar6) {
    iVar6 = (iVar6 - iVar5) + 1;
    do {
      local_58 = (longlong *)FUN_00b94e60(local_68,iVar5);
      if (local_58 != (longlong *)0x0) {
        (**(code **)(*local_58 + 0x288))(local_58,&local_38);
        if (local_38 == 0) {
          FUN_0043f750(&local_40,iVar5);
          FUN_00416ba0(&local_38,L"Comp_",local_40);
        }
        iVar2 = (**(code **)(*local_58 + 0x1c8))();
        iVar7 = 0;
        if (-1 < iVar2 + -1) {
          do {
            iVar3 = (**(code **)(*local_58 + 0x210))(local_58,iVar7);
            if (iVar3 < *(int *)(*(longlong *)(param_2 + 0x1a8) + 100)) {
              FUN_01a0d110(auStack_88,&local_48,iVar3);
              FUN_00414b50(&local_30,local_48);
            }
            else {
              FUN_0043f750(&local_30,iVar3);
            }
            iVar3 = (**(code **)(*local_60 + 0xb0))(local_60,local_30);
            if (iVar3 == -1) {
              local_50 = (longlong *)FUN_004b6930(&PTR_FUN_00478280,1);
              *(undefined1 *)((longlong)local_50 + 0x49) = 1;
              FUN_004b67b0(local_50,1);
              (**(code **)(*local_50 + 0x80))(local_50,local_38,(longlong)iVar7);
              (**(code **)(*local_60 + 0x80))(local_60,local_30,local_50);
            }
            else {
              local_50 = (longlong *)(**(code **)(*local_60 + 0x30))(local_60,iVar3);
              (**(code **)(*local_50 + 0x80))(local_50,local_38,(longlong)iVar7);
            }
            iVar7 = iVar7 + 1;
            iVar2 = iVar2 + -1;
          } while (iVar2 != 0);
        }
      }
      iVar5 = iVar5 + 1;
      iVar6 = iVar6 + -1;
    } while (iVar6 != 0);
  }
  FUN_00414560(&local_48,4);
  return;
}

