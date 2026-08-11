/* Ghidra address: 00fdb700 */
/* Ghidra symbol: FUN_00fdb700 */


void FUN_00fdb700(longlong param_1,undefined8 param_2,char param_3)

{
  int iVar1;
  longlong lVar2;
  ulonglong uVar3;
  undefined8 uVar4;
  int iVar5;
  double dVar6;
  undefined8 local_68;
  undefined8 local_60;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 local_48;
  undefined8 local_40 [2];
  undefined8 local_30;
  
  local_60 = 0;
  local_68 = 0;
  local_50 = 0;
  local_58 = 0;
  local_40[0] = 0;
  local_48 = 0;
  local_30 = 0;
  iVar5 = *(int *)(*(longlong *)(param_1 + 0x90) + 0x10);
  uVar3 = 0;
  if (-1 < iVar5 + -1) {
    do {
      iVar1 = (int)uVar3;
      lVar2 = FUN_004aeac0(*(undefined8 *)(param_1 + 0x90),uVar3);
      if (*(char *)(lVar2 + 0x30) == '\x05') {
        if (*(char *)(lVar2 + 0x125) == '\0') {
          dVar6 = (double)*(int *)(lVar2 + 0x120) / 1000.0;
        }
        else {
          dVar6 = (double)*(int *)(lVar2 + 0x120) / 1000000.0;
        }
        iVar1 = FUN_0040c770(dVar6 / ((1.0 / *(double *)(param_1 + 0x78)) * 4.0));
        if (iVar1 == 0) {
          iVar1 = 1;
        }
        if (param_3 == '\0') {
          *(undefined4 *)(param_1 + 0x8f4) = 1;
        }
        else {
          FUN_00416780(&local_48,*(undefined2 *)(param_1 + 0xb0));
          FUN_00416cd0(local_40,4,*(undefined8 *)(lVar2 + 0x100),&DAT_00fdb9fc,local_48,
                       L"; delay block");
          FUN_00f788b0(param_1,param_2,local_40[0]);
          FUN_0043f750(&local_58,*(undefined4 *)(param_1 + 0x8f4));
          FUN_00416cd0(&local_50,3,L"DELAY",local_58,&DAT_00fdb9fc);
          FUN_00f788b0(param_1,param_2,local_50);
          *(int *)(param_1 + 0x8f4) = *(int *)(param_1 + 0x8f4) + 1;
        }
        if (iVar1 < 9) {
          uVar3 = FUN_00b89270();
          FUN_0041ddd0(&local_68,PTR_PTR_02002fb0);
          FUN_00b8e650(uVar3,&local_60,L"HDLStrings.Msg_delay_short",local_68);
          uVar4 = FUN_0044d490(&PTR_FUN_004334c0,1,local_60);
          FUN_004134c0(uVar4);
        }
        else {
          iVar1 = FUN_00f79fb0(param_1,param_2,iVar1,param_3);
          *(int *)(param_1 + 0x3c) = *(int *)(param_1 + 0x3c) + iVar1;
          if (param_3 != '\0') {
            *(undefined1 *)(param_1 + 0x8f8) = 0;
          }
        }
        iVar1 = (int)uVar3;
        if (param_3 != '\0') {
          FUN_00f787d0(param_1,param_2,L"return");
        }
      }
      uVar3 = (ulonglong)(iVar1 + 1);
      iVar5 = iVar5 + -1;
    } while (iVar5 != 0);
  }
  FUN_00414560(&local_68,6);
  FUN_00414480(&local_30);
  return;
}

